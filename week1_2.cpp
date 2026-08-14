 #include<iostream>
 using namespace std;
 int main()
 {
     string str ="computer is everything";
     for(int i=0; i< str.length(); i++)
     {
         if(str[i]!='t')
         {
             cout << str[i];
         }     }
     return 0;
 }
