#include<iostream>
using namespace std;
class SavingsAccount
{
   int annualInterestRate;
   double savingsBalance;
   public:
        SavingsAccount(int sir ,double sb)
        {
            
            annualInterestRate=sir;
            savingsBalance=sb;
        }
        double calMonthlyInterest()
        {
            double monthlyInterest;
            monthlyInterest = (savingsBalance*annualInterestRate)  /12;
            savingsBalance+=monthlyInterest;
            return savingsBalance;
 
        }
        void modifyInterestRate(int air)

        {
            annualInterestRate=air;
        }
};
int main()
{
   SavingsAccount saver1(4,2000.000);
   SavingsAccount saver2(4,3000.000);
   cout<< "\n your savings balance after monthly interest is : "<< saver1.calMonthlyInterest();
   saver2.calMonthlyInterest();
  cout<< "\n your savings balance after monthly interest is : "<< saver2.calMonthlyInterest();
    saver1.modifyInterestRate(5);
    saver2.modifyInterestRate(5);
    cout<< "\n your savings balance after monthly interest after modifying annual rate of interest is : "<< saver1.calMonthlyInterest();
   saver2.calMonthlyInterest();
  cout<< "\n your savings balance after monthly interest after modifying annual rate of interest is : "<< saver2.calMonthlyInterest();
    return 0;
}