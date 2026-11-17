#include<iostream>
using namespace std;
int jai(int x, int rev = 0){
    if (x==0) return rev;
    return jai(x/10, rev*10+x%10);
    
}

int main(){
    int n;
    cout<<"Enter n  ";
    cin>>n;

  int reverse = jai(n);
  cout<<"Reversed number ="<<reverse;
   
}    