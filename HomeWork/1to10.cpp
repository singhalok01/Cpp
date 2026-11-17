// #include<iostream>
// using namespace std;

// // int main(){
// //     for(int i=1;i<=10;i++){
// //         cout<<i;
// //         cout<<endl;
// //     }
// // }

#include <iostream>
using namespace std;

// function declaration
double seriesSum(int x, int n);

// function to find factorial
long long fact(int num) {
    long long f = 1;
    for(int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

// function definition
double seriesSum(int x, int n) {
    double sum = 0;
    int sign = 1;

    for(int i = 1; i <= n; i += 2) {
        double term = (double)pow(x, i) / fact(i);
        sum += sign * term;
        sign = -sign; // change sign + -
    }

    return sum;
}

int main() {
    int x, n;
    cout << "Enter value of x and n: ";
    cin >> x >> n;

    cout << "Sum = " << seriesSum(x, n);

    return 0;
}

