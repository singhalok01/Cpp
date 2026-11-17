#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    void get_num()
    {
        cout << "Enter number: ";
        cin >> n;
    }

    void Chk_prime()
    {
        if (n <= 1)
        {
            cout << n << " is not a prime number.\n";
            return;
        }

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number.\n";
                return;
            }
        }

        cout << n << " is a prime number.\n";
    }

    void Chk_pallin()
    {
        int temp = n, rev = 0;

        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (n == rev)
            cout << n << " is a palindrome number.\n";
        else
            cout << n << " is not a palindrome number.\n";
    }

    void Reverse_num()
    {
        int temp = n, rev = 0;

        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        cout << "Reverse = " << rev << endl;
    }

    void Chk_Armstrong()
    {
        int temp = n, sum = 0, digits = 0;

        int x = n;
        while (x > 0)
        {
            digits++;
            x /= 10;
        }

        temp = n;

        while (temp > 0)
        {
            int digit = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " is an Armstrong number.\n";
        else
            cout << n << " is not an Armstrong number.\n";
    }

    void find_factorial()
    {
        long long fact = 1;

        for (int i = 1; i <= n; i++)
            fact *= i;

        cout << "Factorial = " << fact << endl;
    }

    void count_digits()
    {
        int temp = n;
        int count = 0;

        if (temp == 0)
            count = 1;
        else
        {
            while (temp > 0)
            {
                count++;
                temp /= 10;
            }
        }

        cout << "Number of digits = " << count << endl;
    }
};

int main()
{
    Num obj;

    obj.get_num();

    obj.Chk_prime();
    obj.Chk_pallin();
    obj.Reverse_num();
    obj.Chk_Armstrong();
    obj.find_factorial();
    obj.count_digits();

    return 0;
}