#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int a[] = { 66,32,27,89,14 };

    cout << a[3] << " ";
    
    for (int i = 0; i < n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int b[10];

    for (int i = 0; i < 10; i++) {
        b[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }

    cout << endl;

    int c[10];
    int lfg=5 ;
    for (int i = 0; i < 10; i++) {
        c[i] = i;
        lfg = lfg + c[i];
        cout << lfg << " ";
    }

    cout << endl;
    cout << "lfg " << lfg;
}
