#include<iostream> 
using namespace std; 
class my 
{ 
    public:
    int no[100]; 
    string title[100],author[100];
    int bookid[100];
    float price[100];
 public: 
  void set_data();  
  friend void get_data(my ob); 
   
}; 

void my::set_data() 
{ 
  
 cout<<"Enter the number of book:"; 
 cin>>no[0]; 
 for(int i=0;i<no[0];i++) 
 { 
   
  cout<<"Enter Details of Book"<<i+1<<":"<<endl; 
  cout<<"Title:"; 
  cin>>title[i]; 
  cout<<"Author:"; 
  cin>>author[i]; 
  cout<<"Book Id:"; 
  cin>>bookid[i]; 
  cout<<"Price:"; 
  cin>>price[i]; 
 } 
} 
void get_data(my ob) 
{ 
  int no1[100];
 for(int i=0;i<no1[0];i++) 
 { 
  cout<<"--------All Book Details-------";
  cout<<"\nDetails of Book"<<i+1<<":"<<endl; 
  cout<<"Title is:"<<ob.title[i]<<endl; 
  cout<<"Author is:"<<ob.author[i]<<endl; 
  cout<<"BookId is:"<<ob.bookid[i]<<endl; 
  cout<<"Price is:"<<ob.price[i]<<endl; 
  cout<<endl; 
  cout<<"Total Number of Books in The Libary=>"<<no1[i]<<endl; 
 } 
 
} 
int main() 
{ 
 int ch; 
 my ob;
 my ob1;
 do 
 { 
  cout<<"1.Add Book:\n2.Display\n3.Exit\n"; 
  cout<<"Enter Your choose:"; 
  cin>>ch; 
   
  switch(ch) 
  { 
   case 1: 
   ob1.set_data(); 
   break; 
     
   case 2: 
   get_data(ob); 
   break; 
      
   case 3: 
   return 0; 
   break; 
  } 
 }while(ch!=4); 
 return 0; 
}
/*#include <iostream>
#include <string>

using namespace std;

// Book class
class Book
{
    private:
    string title;
    string author;
    string publication;
    int quantity;

public:
    static int totalBooks; // Static member to track total books

    // Constructor
    Book(string t, string a, string p, int q) {
        title = t;
        author = a;
        publication = p;
        quantity = q;
        totalBooks++; // Increment total books
    }

    // Friend function to display detailed book information
    friend void displayBookDetails(Book);

    // Member function to issue a book
    void issueBook() 
    {
        if (quantity > 0) 
        {
            quantity--;
            cout << "Book issued successfully!" << endl;
        } 
        else
        {
            cout << "Book is out of stock!" << endl;
        }
    }

    // Member function to return a book
    void returnBook() 
    {
        quantity++;
        cout << "Book returned successfully!" << endl;
    }
};

// Initialize static member
int Book::totalBooks = 0;

// Friend function to display detailed book information
void displayBookDetails(Book b)
 {
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Publication: " << b.publication << endl;
    cout << "Quantity: " << b.quantity << endl;
}

int main() 
{
    int choice;
    Book book1("Book1", "Author1", "Publication1", 5);
    Book book2("Book2", "Author2", "Publication2", 3);

    while (true) 
    {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Display total books" << endl;
        cout << "2. Display book details" << endl;
        cout << "3. Issue book" << endl;
        cout << "4. Return book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
         {
            case 1:
            cout << "Total books: " << Book::totalBooks << endl;
            break;
            case 2:
            cout << "Book 1 details:" << endl;
            displayBookDetails(book1);
            cout << "Book 2 details:" << endl;
            displayBookDetails(book2);
            break;
            case 3:
            cout << "Choose book to issue (1/2): ";
            int bookChoice;
            cin >> bookChoice;
            if (bookChoice == 1)
             {
                book1.issueBook();
            } 
            else if (bookChoice == 2) 
            {
                book2.issueBook();
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
            break;
            case 4:
            cout << "Choose book to return (1/2): ";
            cin >> bookChoice;
            if (bookChoice == 1)
            {
                book1.returnBook();
            } else if (bookChoice == 2)
            {
                book2.returnBook();
            }
            else 
            {
                cout << "Invalid choice!" << endl;
            }
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
    */
