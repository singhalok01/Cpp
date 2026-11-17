#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows--->m , cols--->n :
  
  int n;
  cout<<"Enter side of squre : ";
  cin>>n;

   for(int i=1;i<=n;i++){// rows = m
    int a = 1;
    for(int j=1;j<=2*i-1;j+=2){// cols = n
      cout<<j<<" ";  
    }
    cout<<endl;
  }

   for(int i=1;i<=n;i++){// rows = m
    for(int j=1;j<=i;j++){// cols = n
      cout<<2*j-1<<" ";
    }
    cout<<endl;
  }

  for(int i=1;i<=n;i++){// rows = m
    int a = 1;
    for(int j=1;j<=i;j++){// cols = n
      cout<<a<<" ";
      a += 2;  
    }
    cout<<endl;
  }

}
