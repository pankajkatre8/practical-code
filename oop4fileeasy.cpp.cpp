#include<iostream>
#include<fstream>
using namespace std;
class employee{
    int id;
    string name;
    int salary;
    public:
    void accept()
    {

        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"salary is"<<endl;
        cin>>salary;

    }
    void display(){
        cout<<"id:"<<id<<"\nname:"<<name<<"\nsalary:"<<salary<<endl;
    }
};
int main(){
    employee abc[10];
    fstream f;
    f.open("employee.txt");
    cout<<"file created"<<endl;
    int i,n;
    cout<<"how many entries"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter data of employee:"<<endl;
        abc[i].accept();
        f.write((char*)&abc[i],sizeof(abc));
    }
    f.close();
    f.open("employee.txt");
    for(i=0;i<n;i++){
        f.read((char*)&abc[i],sizeof(abc));
        abc[i].display();

    }
    f.close();
    return 0;

}