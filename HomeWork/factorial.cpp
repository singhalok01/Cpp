#include<iostream>
using namespace std;

int main(){
    int i,num;
    cout<<"Enter Your Factorial Number : ";
    cin>>num;
    int multiply = 1;
    for(i=1;i<=num;i++){
        multiply = multiply*i;
    }
    cout<<multiply;
}