#include<iostream>
#include<ctime>         // For time()
#include<cstdlib>      // For rand() and srand()
using namespace std;
int main(){
    // seed the random number generator
    srand(static_cast<unsigned int>( time(nullptr)));
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 10){
        cout<< "Your subscription will expire soon.Renew now!" << endl;
    } else if (daysUntilExpiration <= 5){
         cout<<"Your subscription expires in"<< daysUntilExpiration << "days.Renew now and save 10%!" <<endl;
    } else if (daysUntilExpiration == 1){
        cout <<"Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else{
        cout <<"You have an active subscription"<< endl;
        if (daysUntilExpiration < 0){
            cout <<"Your subscription has expired"<< endl;
        }
    }
        return 0;          

    

}