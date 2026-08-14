//  Implement a C++ program to find the non-repeating characters in string. 
// Typical Input: graphic era university  
//  Typical Output: c g h n p s t u v y 

#include<iostream>
 #include<string>
 using namespace std;
 int i;
 int main(){
     int count;
     string str;
     cout<<"enter the string:";
     getline(cin,str);
     cout<<"non repeating are:";
     for(int i=0;i<str.length();i++)  
     {
         count=0;
     for(int j=0;j<str.length();j++)
     {
         if(str[i]==str[j])
         {
             count++;
         }
     }
     if(count==1 && str[i]!=' ')
     {
         cout<<str[i];
     }
 }
 return 0;
 }

