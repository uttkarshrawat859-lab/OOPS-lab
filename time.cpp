#include<iostream>
#include<string>
using namespace std;
class Time
{
    int hrs;
    int min;
    int sec;
    public:
        Time()
        {
            hrs=0;
            min=0;
            sec=0;
        }
        Time(int h, int m , int s)
        {
            hrs=h;
            min=m;
            sec=s;

        }
        void display()
        {
            cout<<hrs<<":"<<min<<":"<<sec;
        }
        void add(Time t1, Time t2)
        {
            hrs= t1.hrs+t2.hrs;
            min=t2.min+t1.min;
            sec=t2.sec+t1.sec;
            if(sec>=60)
            {
                min= min+ (sec)/60;
                sec%=60;
            }
            if(min>=60)
            {
                hrs=hrs+ (min)/12;
                min=min%0;
            }

        }


};
int main()
{
    Time t1(12,30,40);
    Time t2(3, 40,59);
    t1.display();
    t2.display();
    Time t3;
    t3.add(t1,t2);
    cout<< "time t3: ";
     t3.display();


}