#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#define N 10
using namespace std;

int main() {
    char a[N] = {};
    cout << "Enter 10 characters: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < N / 2; j++) 

    {
        char temp = a[j]; 
        a[j] = a[N - j - 1]; 
        a[N - j - 1] = temp;
    }
    cout << "Inverted array: " << endl;
    for (int i = 0; i < N; i++) {
    cout << a[i] << " ";
    }

    return 0;
}