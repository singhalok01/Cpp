#include<iostream>
using namespace std;
void greet(int n){
    if(n==100) return; // Base case
    cout<<n<<endl; // Work
    greet(n+1);  // Call
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    greet(n);
}