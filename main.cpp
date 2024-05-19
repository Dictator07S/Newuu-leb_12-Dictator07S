#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    float *ptr, arr[SIZE], overall_grades[SIZE];
    float midterm_weight = 0.3; // Midterm weights 30%

    // Read and store grades
    cout << "Enter grades of 10 students for Midterm exam:\n";
    ptr = arr;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    // Calculate overall grades
    ptr = arr;
    for (int i = 0; i < SIZE; i++)
    {
        overall_grades[i] = *ptr * midterm_weight;
        ptr++;
    }

    // Display overall grades in reverse order
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << overall_grades[i] << " ";
    }

    return 0;
}