#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n :";
    cin>>n;

    // if(n%5==0 && n%3==0) 
    if((n%5==0 || n%3==0)&&(n%15!=0)){
        cout<<"Yes divisible by 5 and 3  :";
    }
    else{
        cout<<" divisible by 15 :";
    }
    
}