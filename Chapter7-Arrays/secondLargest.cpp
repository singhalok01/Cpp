

#include<iostream>
using namespace std;
int main(){
    int arr[] = {-9,-7,-6,-4,-3};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
     mx = max(mx,arr[i]);
        
    }
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
     if(arr[i]!=mx) smx = max(smx,arr[i]);
        
    }
    cout<<smx;
    

}