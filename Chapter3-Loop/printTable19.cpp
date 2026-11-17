#include<iostream>
using namespace std;
int main(){
    // 172 times 
    //  for(int i=19;i<=190;i++){
    //    if(i%19==0) cout<<i<<" ";
    // }

    // second method
    // 10 times
    // for(int i=19;i<=190;i+=19){
    //     cout<<i<<" ";
    // }
    int n;
    cin>>n;

    for(int i=n;i<=n*10;i+=n){
        cout<<i<<" ";
    }
  
}
