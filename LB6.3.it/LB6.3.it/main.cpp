#include <iostream>
#include <iomanip>

using namespace std;

void output(int a[], int n);

template <typename T>
void countA(T a[], int n, T& count) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
             count += a[i];
        }
    }
}

int main()
{
    const int n = 4;
    int count = 0;
    int a[n] = { 1,2,3,4 };
    output(a, n);
    countA(a, n, count);
    cout << "Count: " << count << endl;
}

void output(int a[], int n)
{
    cout << "a= ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << setw(4);
    }
    cout << endl;
}
