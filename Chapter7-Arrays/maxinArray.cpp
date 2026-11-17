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
    int arr[] = {-9,-7,-6,-4,-3};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
    //    if(arr[i]>mx) mx = arr[i];
    mx = max(mx,arr[i]);
        
    }
    cout<<mx<<endl;
    cout<<INT_MIN;

}