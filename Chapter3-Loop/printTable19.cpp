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
    int ans = 0;
    for(int i=0;i<=n;i+=1){
       int rem = n%10;
        n /= 10;
       int ans = ans*10+rem;

    }
    cout<<ans;
  
}
