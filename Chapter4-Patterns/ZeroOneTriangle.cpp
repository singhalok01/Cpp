#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows--->m , cols--->n :
  
  int n;
  cout<<"Enter side of squre : ";
  cin>>n;

   for(int i=1;i<=n;i++){// rows = m
    for(int j=1;j<=i;j++){// cols = n
     if((i+j)%2==0) cout<<1<<" ";
     else cout<<0<<" ";
    }
    cout<<endl;
  }
}  