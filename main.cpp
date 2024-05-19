#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    float *ptr, arr[SIZE];
    float midterm=0.3,overall[SIZE];
    ptr = arr;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = arr;
    for (int i = 0; i < SIZE; i++)
    {
        overall[i] = *ptr * midterm;
        ptr++;
    }

    // Display overall grades in reverse order
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << overall[i] << " ";
    }
return 0;
}