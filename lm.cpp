#include <iostream>
using namespace std;

struct Book
{
    int id;
    string name;
    string author;
    float price;
    bool isIssued;
};

Book library[100];   // Array of books
int totalBooks = 0;

// Function to add book
void addBook()
{
    cout << "\nEnter Book ID: ";
    cin >> library[totalBooks].id;

    cout << "Enter Book Name: ";
    cin.ignore();
    getline(cin, library[totalBooks].name);

    cout << "Enter Author Name: ";
    getline(cin, library[totalBooks].author);

    cout << "Enter Price: ";
    cin >> library[totalBooks].price;

    library[totalBooks].isIssued = false;

    totalBooks++;

    cout << "Book Added Successfully!\n";
}

// Function to display all books
void displayBooks()
{
    if(totalBooks == 0)
    {
        cout << "No books available.\n";
        return;
    }

    for(int i = 0; i < totalBooks; i++)
    {
        cout << "\nBook ID: " << library[i].id;
        cout << "\nName: " << library[i].name;
        cout << "\nAuthor: " << library[i].author;
        cout << "\nPrice: " << library[i].price;
        cout << "\nStatus: " 
             << (library[i].isIssued ? "Issued" : "Available") 
             << "\n";
    }
}

// Search Book
void searchBook()
{
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for(int i = 0; i < totalBooks; i++)
    {
        if(library[i].id == id)
        {
            cout << "\nBook Found!";
            cout << "\nName: " << library[i].name;
            cout << "\nAuthor: " << library[i].author;
            return;
        }
    }

    cout << "Book Not Found.\n";
}

// Issue Book
void issueBook()
{
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for(int i = 0; i < totalBooks; i++)
    {
        if(library[i].id == id)
        {
            if(!library[i].isIssued)
            {
                library[i].isIssued = true;
                cout << "Book Issued Successfully!\n";
            }
            else
            {
                cout << "Book already issued.\n";
            }
            return;
        }
    }

    cout << "Book Not Found.\n";
}

// Return Book
void returnBook()
{
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for(int i = 0; i < totalBooks; i++)
    {
        if(library[i].id == id)
        {
            if(library[i].isIssued)
            {
                library[i].isIssued = false;
                cout << "Book Returned Successfully!\n";
            }
            else
            {
                cout << "Book was not issued.\n";
            }
            return;
        }
    }

    cout << "Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== LIBRARY MENU =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}