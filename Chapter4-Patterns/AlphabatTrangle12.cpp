#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows--->m , cols--->n :
  
  int n;
  cout<<"Enter side of squre : ";
  cin>>n;
  int a = 1;
   for(int i=1;i<=n;i++){// rows = m
    
    for(int j=1;j<=i;j++){// cols = n
      cout<<a<<" ";
      a++; 
    }
    cout<<endl;
  }
}  