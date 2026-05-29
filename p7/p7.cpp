#include <iostream>
using namespace std;
int n = 5;
void palindrome(int arr[])
{
    int p = 0, q = n - 1;
    while (p < q)
    {
        if (arr[p] != arr[q])
        {
            cout << "Not palindrome\n";
            exit(0);
        }
        p++;
        q--;
    }
}

int main()
{
    int a[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    palindrome(a);
    cout << "Palindrome\n"<< endl;
}