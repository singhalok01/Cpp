#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Factorial Number : ";
    cin>>n;

    int number = 1;
    for(int i=1;i<=n;i++){
        number *= i;
    }
    cout<<number<<endl;

    // int n;
    cout<<"Enter the N number : ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum;


}


