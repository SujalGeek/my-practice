#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book
{
public:
  int id;
  string title;
  string author;
  bool isBorrowed;

  Book(int _id, const string &_title, const string &_author)
      : id(_id), title(_title), author(_author), isBorrowed(false) {}
};

class Library
{
private:
  vector<Book> books;

public:
  void addBook(const Book &book)
  {
    books.push_back(book);
    cout << "Book added successfully!" << endl;
  }

  void displayBooks()
  {
    cout << "\nID\tTitle\t\tAuthor\t\tStatus" << endl;
    for (const auto &book : books)
    {
      cout << book.id << "\t"
           << book.title << "\t\t"
           << book.author << "\t\t"
           << (book.isBorrowed ? "Borrowed" : "Available") << endl;
    }
  }

  bool borrowBook(int id)
  {
    for (auto &book : books)
    {
      if (book.id == id)
      {
        if (!book.isBorrowed)
        {
          book.isBorrowed = true;
          return true;
        }
        else
        {
          return false; // Book already borrowed
        }
      }
    }
    return false; // Book not found
  }
  void removeBook(int id)
  {
    for (auto it = books.begin(); it != books.end(); ++it)
    {
      if (it->id == id)
      {
        books.erase(it);
        cout << "Book removed successfully!" << endl;
        return;
      }
    }
    cout << "Book not found!" << endl;
  }
  bool returnBook(int id)
  {
    for (auto &book : books)
    {
      if (book.id == id)
      {
        if (book.isBorrowed)
        {
          book.isBorrowed = false;
          return true;
        }
        else
        {
          return false; // Book was not borrowed
        }
      }
    }
    return false; // Book not found
  }
};

void printMenu()
{
  cout << "\nLibrary Management System\n";
  cout << "1. Add Book\n";
  cout << "2. Display Books\n";
  cout << "3. Borrow Book\n";
  cout << "4. Return Book\n";
  cout << "5. Exit\n";
  cout << "Enter your choice: ";
}

int main()
{
  Library lib;
  int choice;
  while (true)
  {
    printMenu();
    cin >> choice;
    if (choice == 1)
    {
      int id;
      string title, author;
      cout << "Enter Book ID: ";
      cin >> id;
      cin.ignore(); // Clear newline from input buffer
      cout << "Enter Book Title: ";
      getline(cin, title);
      cout << "Enter Book Author: ";
      getline(cin, author);
      Book newBook(id, title, author);
      lib.addBook(newBook);
    }
    else if (choice == 2)
    {
      lib.displayBooks();
    }
    else if (choice == 3)
    {
      int id;
      cout << "Enter Book ID to borrow: ";
      cin >> id;
      if (lib.borrowBook(id))
        cout << "Book borrowed successfully!" << endl;
      else
        cout << "Book is either not available or does not exist!" << endl;
    }
    else if (choice == 4)
    {
      int id;
      cout << "Enter Book ID to return: ";
      cin >> id;
      if (lib.returnBook(id))
        cout << "Book returned successfully!" << endl;
      else
        cout << "Book was not borrowed or does not exist!" << endl;
    }
    else if (choice == 5)
    {
      cout << "Exiting system. Goodbye!" << endl;
      break;
    }
    else
    {
      cout << "Invalid choice. Please try again." << endl;
    }
  }
  return 0;
}