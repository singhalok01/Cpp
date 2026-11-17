#include<iostream>
using namespace std;
int main() {
    float length, breadth;
    
    cout << "Enter length: ";
    cin >> length;
    
    cout << "Enter breadth: ";
    cin >> breadth;
    
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    if (area > perimeter) {
        cout << "Area is greater than Perimeter";
    } else {
        cout << "Area is NOT greater than Perimeter";
    }
    
    return 0;
}

