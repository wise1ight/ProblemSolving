#include <iostream>

using namespace std;

int main()
{
    int a, b, n;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d,%d", &a, &b);
        cout << (a + b) << "\n";
    }

    return 0;
}