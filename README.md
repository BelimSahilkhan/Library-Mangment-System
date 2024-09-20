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
