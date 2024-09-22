

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

int main() 
{
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


