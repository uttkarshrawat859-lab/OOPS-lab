#include<iostream>
using namespace std;
namespace CHOTA_BHEEM{
    void display(){
cout<<"Hello dosto mera naam hai CHOTA_BHEEM";
    }
    namespace DHOLU_BHOLU{
        void display(){
        cout<<"chloo dosto hamara naam hai DHOLU_BHOLU ";
}
    }
}
namespace JAGGU_BANDAR{
    void display(){
        cout<<"\nGaggu bandar mast kalandar";
    }
}
int main(){
     CHOTA_BHEEM :: DHOLU_BHOLU :: display();
     JAGGU_BANDAR :: display();
}

