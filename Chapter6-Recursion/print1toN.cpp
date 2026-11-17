#include<iostream>
using namespace std;
void greet(int x, int n){
    if(x>n) return; //Base case
    cout<<x<<endl; //Work
    greet(x+1,n); //Call
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    greet(1,n);
}