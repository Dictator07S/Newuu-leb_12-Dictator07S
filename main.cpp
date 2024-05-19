#include <iostream>

using namespace std;

int main(){
    const int son = 10;
    float *ptr, b[son], c;
    float d = 0.3;

    ptr = b;
    for (int i = 0; i < son; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = b;
    for (int i = 0; i < son; i++){
        c = *ptr * d;
        cout << c << " ";
        ptr++;
    }
return 0;
}
