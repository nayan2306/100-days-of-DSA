#include<iostream>
using namespace std;

int main(){
    int age =0;
    char gender ;
    cout<<"Enter your age ";
    cin>>age;
    cout<< "\n Enter your gender \n 1.For Male M \n 2.For Female F \n";
    cin>>gender;

    if (age>=18){
        if (gender =='F' || gender=='f'){
            cout<<"Female Adult";
        }
        else {
            cout<<"Male Adult";
        }

    }
    else {
       if (gender =='F' || gender=='f'){
            cout<<"Female kid";
        }
        else {
            cout<<"Male kid";
        } 
    }
    return 0;
}