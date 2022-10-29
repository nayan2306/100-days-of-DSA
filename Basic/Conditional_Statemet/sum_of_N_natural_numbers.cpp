#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    if (n<0){
        cout<<"Please enter positive number"<<endl;
    }
    else{
        sum = (n*(n+1))/2;
        cout<<sum<<endl;
  
}
return 0;
}