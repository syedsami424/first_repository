#include<iostream>
using namespace std;
class Person{
    char name[10];
    int age;
    char phno[12];
    public:
    void getPerson(){
        cin>>name;
        cin>>age;
        cin>>phno;
    }
    void printPerson(){
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<phno<<"\n";
    }
    
};
class employee: public Person{
    int empId;
   char desig[11];
   public:
   
   void getEmp(){
        getPerson();
        cin>>empId;
        cin>>desig;
   }
   void displayEmp(){
       printPerson();
       cout<<empId<<"\n";
       cout<<desig<<"\n";
   }
};
class PartTimeEmployee: public employee{
    int NumberofHoursWorked;
    int HourlyWage;
    public:
    void getPartTimeEmployeeDetails(){
        getEmp();
        cin>>NumberofHoursWorked;
        cin>>HourlyWage;
    }
    void displayPartTimeEmployeeDetail(){
        displayEmp();
        cout<<NumberofHoursWorked<<"\n";
        cout<<HourlyWage<<"\n";
    }
    
};
int main(){
    PartTimeEmployee p1;
    p1.getPartTimeEmployeeDetails();
    p1.displayPartTimeEmployeeDetail();
}
    
