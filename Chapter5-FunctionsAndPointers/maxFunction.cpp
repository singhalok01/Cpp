#include<iostream>
using namespace std;
int maxOfTwo(int a, int b){
   if(a>b) return a;
   else return b;
}
int main(){
    int a,b;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"enter b number: ";
    cin>>b;
    cout<<maxOfTwo(a,b);
}