#include<iostream>
using namespace std;

//write a program to take 10 pairs of x & Y and prints x/y for each pair

int main(){
    for(int i=0;i<=10;i++){
        int x,y;
        cin>>x>>y;
        if (y==0){
            continue;
        }
        else {
            cout<<x<<" "<<y<<" "<<x/y<<endl;
        }
    }
    return 0;
}