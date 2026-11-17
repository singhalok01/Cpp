#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows--->m , cols--->n :
  
  int n;
  cout<<"Enter side of squre : ";
  cin>>n;
   int mid = n/2+1;
   for(int i=1;i<=n;i++){// rows = m
    for(int j=1;j<=n;j++){// cols = n
     if(i == mid || j == mid) cout<<"* ";
     else cout<<"  ";
    }
    cout<<endl;
  }
}  