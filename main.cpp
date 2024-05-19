#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    float *ptr, arr[SIZE], overall_grade;
    float midterm_weight = 0.3; // Midterm weights 30%

    // Read and store grades
    cout << "Enter grades of 10 students for Midterm exam:\n";
    ptr = arr;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    // Calculate overall grade and display in reverse order
    ptr = arr + SIZE - 1; // Point to the last element of the array
    for (int i = SIZE - 1; i >= 0; i--)
    {
        overall_grade = *ptr * midterm_weight;
        cout << overall_grade << " ";
        ptr--;
    }

    return 0;
}