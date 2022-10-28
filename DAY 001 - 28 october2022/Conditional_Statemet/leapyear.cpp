#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter Year"<<endl;
    cin>>N;
        //code here
        if (N%400==0){
            cout<<"Leap Year"<<endl;
        }
        else if (N%100==0){
            cout<<"Not a Leap Year"<<endl;
        }
        else if (N%4==0){
            cout<<"Leap Year"<<endl;
        }
        else {
            cout<<"Not a Leap Year"<<endl;
        }
    return 0;
}
