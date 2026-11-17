#include<iostream>
using namespace std;
void shree(){
    cout<<"jai lakshamn"<<endl;
    return; // khatam ho jata hai
}
void  mahadev(){
    cout<<"jai mahadev"<<endl;
    shree();// Function call
    return;
}
int main(){
    cout<<"jai shree ram"<<endl;
    mahadev(); // Function call
    cout<<"jai hanuma ji";

}