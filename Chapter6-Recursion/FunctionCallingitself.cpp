#include<iostream>
using namespace std;
void greet(){
    cout<<"Hey Alok "<<endl;
    greet();
}
int main(){
    greet();
}