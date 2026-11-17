#include<iostream>
using namespace std;
int main(){
   int arr[5][5];
    for(int i=0;i<=4;i++){ // rows
    for(int j=0;j<5;j++){ // col
       arr[i][j] = 10;
        
    }

   }
    for(int i=0;i<=4;i++){ // rows
    for(int j=0;j<5;j++){ // col
      cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
   }
}   