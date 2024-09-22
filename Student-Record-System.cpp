/*#include<iostream>
#include<fstream>
using namespace std;

class my {
    string name;
    int id;
    int salary;
public:
    static int emc;
    void Add();
    void display();
    void storeInFile();
};

void my::Add() {
    cout<<"Enter a Employee Name=>";
    cin>>name;
    cout<<"Enter a Employee Id=>";
    cin>>id;
    cout<<"Enter a Employee Salary=>";
    cin>>salary;
    emc++;
}

void my::display() {
    cout<<"Employee Name=>"<<name<<endl;
    cout<<"Employee Id=>"<<id<<endl;
    cout<<"Employee Salary=>"<<salary<<endl;
}


int my::emc=0;

int main() {
    int no;
    cout<<"Enter The Number of Employees=>"<<endl;
    cin>>no;
    my ob[no];
    for(int i=0; i<no; i++) {
        cout<<"Enter the Details of Employee=>"<<i+1<<endl;
        ob[i].Add();
        cout<<"-----Display Employee-----"<<endl;
        ob[i].display();
        ob[i].storeInFile();
    }
    cout<<"Total Number Of Employee=>"<<my::emc;
    return 0;
}

*/


/*#include<iostream>
using namespace std;
class my
{
    string name;
    int id;
    int salary;
public:
    static int emc;
    void Add();
    void display();

};

void my::Add()
{
    cout<<"Enter a Employee Name=>";
    cin>>name;
    cout<<"Enter a Employee Id=>";
    cin>>id;
    cout<<"Enter a Employee Salary=>";
    cin>>salary;
    emc++;
}
void my::display()
{
    cout<<"Employee Name=>"<<name<<endl;
    cout<<"Employee Id=>"<<id<<endl;
    cout<<"Employee Salary=>"<<salary<<endl;
}
int my::emc=0;
int main()
{
    int no;
    cout<<"Enter The Number of Employees=>"<<endl;
    cin>>no;
    my ob[no];
    for(int i=0; i<no; i++)
    {
        cout<<"Enter the Details of Emplyee=>"<<i+1<<endl;
        ob[no].Add();
    }
    for(int i=0;i<no;i++)
    {
        cout<<"-----Display Emplyees-----"<<endl;
        ob[no].display();
    }
    cout<<"Total Number Of Employee=>"<<my::emc;
    return 0;
}
*/


//Student Record System
#include<iostream>
using namespace std;

class my {
    string s_name;
    string roll_no;
    int std;
    string course;
public:
    static int studentcount;
    void Add_Student();
    friend void display(my ob);
    void Delete();
    void update();
};

void my::Add_Student() {
    cout<<"Enter the name:";
    cin>>s_name;
    cout<<"Enter the rollno:";
    cin>>roll_no;
    cout<<"Enter the std:";
    cin>>std;
    cout<<"Enter the Course:";
    cin>>course;
    studentcount++;
}

void display(my ob)
{
    cout<<"Student Name=>"<<ob.s_name<<endl;
    cout<<"Roll Number=>"<<ob.roll_no<<endl;
    cout<<"Student Standard=>"<<ob.std<<endl;
    cout<<"Course=>"<<ob.course<<endl;
}

void my::Delete()
{
   // int tos=-1;
    if(s_name!="")//Or(s_name!=""||roll_no!=""||std!=0||course!="")
    {
        s_name = "";
        roll_no = "";
        std = 0;
        course = "";
        studentcount--;
        //tos--;
        cout << "Student record deleted successfully!" << endl;
    }
    else
    {
        cout<<"Student Record is Empty\n";
    }
}
void my::update()
{
    if(s_name!="")
    {
        cout<<"Enter a New Name=>";
        cin>>s_name;
        cout<<"Enter a New Roll_Number=>";
        cin>>roll_no;
        cout<<"Enter a New Standard=>";
        cin>>std;
        cout<<"Enter a New Courses=>";
        cin>>course;
        cout<<"Student Update Successful"<<endl;
    }
    else
    {
        cout<<"Student Record is Empty\n";
    }
}

int my::studentcount = 0;

int main() {
    my ob;
    int no;
    do
    {
        cout<<"1.Add_Student\n2.Display\n3.Delete\n4.Update\n5.Exit\n";
        cout<<"Enter Your Choose:";
        cin>>no;
        switch(no)
         {
            case 1:
            ob.Add_Student();
            break;

            case 2:
            display(ob);
            break;

            case 3:
            ob.Delete();
            break;

            case 4:
            ob.update();
            break;

            case 5:
            return 0;
            break;
        }
        cout<<"Total Number Of Student=>"<<my::studentcount;
    }while(no!=5);

}






//Library management system Program 1
/*#include<iostream>
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
  int no[100];
 for(int i=0;i<no[100];i++)
 {
  cout<<"--------All Book Details-------";
  cout<<"\nDetails of Book"<<i+1<<":"<<endl;
  cout<<"Title is:"<<ob.title[i]<<endl;
  cout<<"Author is:"<<ob.author[i]<<endl;
  cout<<"BookId is:"<<ob.bookid[i]<<endl;
  cout<<"Price is:"<<ob.price[i]<<endl;
  cout<<endl;
  cout<<"Total Number of Books in The Libary=>"<<no[i]<<endl;
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
}*/


/*#include<iostream>
using namespace std;

class my {
    string s_name;
    string roll_no;
    int std;
    string course;
public:
    static int studentcount;
    void Add_Student();
    friend void display(my ob);
    void Delete();
    void update();
};

void my::Add_Student() {
    cout<<"Enter the name:";
    cin>>s_name;
    cout<<"Enter the rollno:";
    cin>>roll_no;
    cout<<"Enter the std:";
    cin>>std;
    cout<<"Enter the Course:";
    cin>>course;
    studentcount++;
}

void display(my ob)
{
    cout<<"Student Name=>"<<ob.s_name<<endl;
    cout<<"Roll Number=>"<<ob.roll_no<<endl;
    cout<<"Student Standard=>"<<ob.std<<endl;
    cout<<"Course=>"<<ob.course<<endl;
}

void my::Delete()
{
   // int tos=-1;
    if(s_name!="")//Or(s_name!=""||roll_no!=""||std!=0||course!="")
    {
        s_name = "";
        roll_no = "";
        std = 0;
        course = "";
        studentcount--;
        //tos--;
        cout << "Student record deleted successfully!" << endl;
    }
    else
    {
        cout<<"Student Record is Empty\n";
    }
}
void my::update()
{
    if(s_name!="")
    {
        cout<<"Enter a New Name=>";
        cin>>s_name;
        cout<<"Enter a New Roll_Number=>";
        cin>>roll_no;
        cout<<"Enter a New Standard=>";
        cin>>std;
        cout<<"Enter a New Courses=>";
        cin>>course;
        cout<<"Student Update Successful"<<endl;
    }
    else
    {
        cout<<"Student Record is Empty\n";
    }
}

int my::studentcount = 0;

int main() {
    my ob;
    int no;
    do
    {
        cout<<"1.Add_Student\n2.Display\n3.Delete\n4.Update\n5.Exit\n";
        cout<<"Enter Your Choose:";
        cin>>no;
        switch(no)
         {
            case 1:
            ob.Add_Student();
            break;

            case 2:
            display(ob);
            break;

            case 3:
            ob.Delete();
            break;

            case 4:
            ob.update();
            break;

            case 5:
            return 0;
            break;
        }
        cout<<"Total Number Of Student=>"<<my::studentcount;
    }while(no!=5);

}
*/

/*my(string s,string no,int st,string cou)
        {
            s_name=s;
            roll_no=no;
            std=st;
            course=cou;
            studentcount++;
        }*/