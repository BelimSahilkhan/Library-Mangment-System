//Employee Management System
#include<iostream>
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



            