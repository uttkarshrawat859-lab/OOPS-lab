#include<iostream>
using namespace std;
class student{
   public: //private: //protected;
    string name;
    int age;
    char section;
    float CGPA;

    void InputData(){
        cout<<"Enter name : ";
        getline(cin,name);
      

        cout<<"Enter age : ";
        cin>>age;
      

        cout<<"Enter section : ";
        cin>>section;
       

        cout<<"Enter CGPA : ";
        cin>>CGPA;
       
    }
    void DisplayDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Section: "<<section<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
    }
};
    int main()
    {
        student s1,s2,s3;
        s1.InputData();
        s1.DisplayDetails();
        s2.InputData();
        s2.DisplayDetails();
        s3.InputData();
        s3.DisplayDetails();
    return 0;
   }


