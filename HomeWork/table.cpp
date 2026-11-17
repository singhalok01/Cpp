#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    // for(int i=1;i<=10;i++){
    //   int number = n*i;
    //    cout<<number<<" ";
    // }

   // Second Method :
   for(int i=n;i<=n*10;i+=n){
    cout<<i<<" ";
   }
}
