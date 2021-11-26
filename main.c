#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int mas[100], mas_positive[100];
    int n, count_positive = 0, tmp;
    cout << "введіть число n: ";
    cin >> n;
    if (n > 100 || n < 1)
    {
        cout << "введене число n не належить проміжку від 1 до 100 ";
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (abs(tmp) > 100)
        {
            do
            {
                cout << "ви ввели невірне n,воно має бути в проміжку між -100 і 100" << endl;
                cout << "введіть його знову: " << endl;
                cin >> tmp;
            }
            while (abs(tmp) > 100);
        }
        mas[i] = tmp;
        if (mas[i] > 0)
        {
            count_positive++;
            mas_positive[count_positive - 1] = mas[i];
        }
    }
    if ( count_positive == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "кількість позитивних елементів: ";
        cout << count_positive;
        cout << endl; 
        for (int i = 0; i < count_positive; i++)
        {
            cout << mas_positive[i] << " ";
        }
    }
    
    return 0;
}