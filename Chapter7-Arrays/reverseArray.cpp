// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {12,6,7,34,9,23,78};
//     int n = sizeof(arr)/4;
//     int mx = arr[0];
//     for(int i=0;i<n;i++){
//     //    if(arr[i]>mx) mx = arr[i];
//     mx = max(mx,arr[i]);
        
//     }
//     cout<<mx;

// }


#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/4;
   int b[n];
   for(int i=0;i<n;i++){
    b[i] = a[n-1-i];
    cout<<b[i]<<" ";
   }
  
  

}