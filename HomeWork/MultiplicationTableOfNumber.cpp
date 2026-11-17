#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter a number : ";
   cin>>num;

   for(int i=num;i<=num*10;i+=num){
        cout<<i;
        cout<<endl;
   }
}

