#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* ptr = &x;
    cout<<x<<endl;
    *ptr = 98; // pointer ke madadt se kisi bhi variable ka value badal sakate hai
    cout<<x<<endl;
    
}