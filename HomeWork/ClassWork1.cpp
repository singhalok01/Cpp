#include <iostream>
using namespace std;

class Array
{
    int arr[100];
    int n;

public:
    void get_values()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements:\n";

        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void show_values()
    {
        cout << "Array elements: ";

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    void search_element()
    {
        int value;
        cout << "Enter element to search: ";
        cin >> value;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == value)
            {
                cout << "Element found at index " << i << endl;
                return;
            }
        }

        cout << "Element not found.\n";
    }

    void add_element()
    {
        int value, position;

        cout << "Enter element: ";
        cin >> value;

        cout << "Enter position: ";
        cin >> position;

        if (position < 0 || position > n)
        {
            cout << "Invalid position.\n";
            return;
        }

        for (int i = n; i > position; i--)
            arr[i] = arr[i - 1];

        arr[position] = value;
        n++;

        cout << "Element added successfully.\n";
    }

    void remove_element()
    {
        int position;

        cout << "Enter position to remove: ";
        cin >> position;

        if (position < 0 || position >= n)
        {
            cout << "Invalid position.\n";
            return;
        }

        for (int i = position; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;

        cout << "Element removed successfully.\n";
    }
};

int main()
{
    Array obj;

    obj.get_values();

    obj.show_values();

    obj.search_element();

    obj.add_element();
    obj.show_values();

    obj.remove_element();
    obj.show_values();

    return 0;
}