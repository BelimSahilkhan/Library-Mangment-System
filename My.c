#include<iostream>
#include<string.h>
using namespace std;
class my
{
	string title;
	string author;
	int bookid;
	float price;
	static int total;
	public:
		my(string t,string a,int id,float p)
		{
			title=t;
			author=a;
			bookid=id;
			price=p;
			total++;
		}
		
		friend void displayBookdetails(const my&b);	
};
void displayBookdetails(const my&b)
{
	cout<<"BookId:"<<b.bookid<<endl;
	cout <<"Title:"<<b.title<<endl; 
	cout<<"Author:"<<b.author<<endl;
	cout<<"Price:"<<b.price<<endl;
}
int main()
{
	static int total;
	cout<<"Enter the number of book:";
	cin>>total;
	string title,author;
	int bookid;
	float price;
	for(int i=0;i<total;i++)
	{
		
		cout<<"Enter Details of Book"<<i+1<<":"<<endl;
		cout<<"Title:";
		cin>>title;
		cout<<"Author:";
		cin>>author;
		cout<<"Book Id:";
		cin>>bookid;
		cout<<"Price:";
		cin>>price;
	}
	for(int i=0;i<total;i++)
	{
		cout<<"\nDetails of Book"<<i+1<<":"<<endl;
		cout<<"Title is:"<<title<<endl;
		cout<<"Author is:"<<author<<endl;
		cout<<"BookId is:"<<bookid<<endl;
		cout<<"Price is:"<<price<<endl;
	}
		cout<<"Total Number of Books in The Libary=>"<<total;
//	cout<<total;
	return 0;
}#include<iostream>
#include<string.h>
using namespace std;
class my
{
	string title;
	string author;
	int bookid;
	float price;
	static int bookcount;
	public:
		my(string t,string a,int id,float p)
		{
			title=t;
			author=a;
			bookid=id;
			price=p;
			bookcount++;
		}
		
		friend void displayBookdetails(const my&b);	
};
void displayBookdetails(const my&b)
{
	cout<<"BookId:"<<b.bookid<<endl;
	cout <<"Title:"<<b.title<<endl; 
	cout<<"Author:"<<b.author<<endl;
	cout<<"Price:"<<b.price<<endl;
}
int main()
{
	int no;
	cout<<"Enter the number of book:";
	cin>>no;
	string title,author;
	int bookid;
	float price;
	for(int i=0;i<no;i++)
	{
		
		cout<<"Enter Details of Book"<<i+1<<":"<<endl;
		cout<<"Title:";
		cin>>title;
		cout<<"Author:";
		cin>>author;
		cout<<"Book Id:";
		cin>>bookid;
		cout<<"Price:";
		cin>>price;
	}
	for(int i=0;i<no;i++)
	{
		cout<<"\nDetails of Book"<<i+1<<":"<<endl;
		cout<<"Title is:"<<title<<endl;
		cout<<"Author is:"<<author<<endl;
		cout<<"BookId is:"<<bookid<<endl;
		cout<<"Price is:"<<price<<endl;
	}
		cout<<"Total Number of Books in The Libary=>"<<no;
//	cout<<total;
	return 0;
}
