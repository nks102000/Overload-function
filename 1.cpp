//WAP using Employee with members name, employee No,dept and salary. 
//Demonstrate the use of inline functions and overloaded functions.
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    char *name;
    int num;
    int dept;
    int salary;
    public:
        employee(){
            name = new char[50];
            num=0;
            salary=0;
            dept=0;
        }
        inline void set(char *c,int id){
            name = new char[strlen(c)];
            strcpy(name,c);
            num=id;
        }
        void calsalary(int sal){
            salary=sal+sal*0.8+sal*0.1;
        }
        void calsalary(int sal,int dep){
            salary=sal+sal*0.8+sal*0.1;
            cout<<"Salary after reducing complete dept"<<endl;
            salary=salary-dep;
            dept=dep;
        }
        void calsalary(int sal,int dep, int per){
            salary=sal+sal*0.8+sal*0.1;
            dept=dep;
            cout<<"Salary after reducing "<<per<<"% dept"<<endl;
            salary=salary-(dep*per/100);
            dept=dep-(dep*per/100);
        }
        inline void get(){
            cout<<"Name: "<<name<<endl;
            cout<<"Employee No: "<<num<<endl;
            cout<<"Dept: "<<dept<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main(){
    employee e;
    e.set("Nitish",20);
    e.calsalary(20000);
    e.calsalary(20000,2534);
    e.get();
    e.calsalary(20000,2534,20);
    e.get();
    return 0;
}