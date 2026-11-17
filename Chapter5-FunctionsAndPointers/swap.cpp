#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int y = 14;
    cout<<x<<" "<<y<<endl;
    // int temp = x;
    // x = y;
    // y = temp;
    // cout<<x<<" "<<y;

    // second meth od
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y;
}