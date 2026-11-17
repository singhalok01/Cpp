#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows--->m , cols--->n :
  
  int n;
  cout<<"Enter side of squre : ";
  cin>>n;

  for(int i=1;i<=n;i++){// rows = m
    for(int j=1;j<=n+1-i;j++){// cols = n
      cout<<"* ";  
    }
    cout<<endl;
  }

}
