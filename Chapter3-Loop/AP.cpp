#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    // // 1 3 5 7 9 ....
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // second method
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + 2;
    }
    cout<<endl;
    
  
    // // 4 7 10 13....
    // for(int i=4;i<=3*n-1;i+=3){
    //     cout<<i<<" ";
    // }
    
      // second method
    int b = 4;
    for(int i=1;i<=n;i++){
        cout<<b<<" ";
        b = b + 3;
    }
}
