// link - https://www.codechef.com/problems/BESTSEATS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count = 0, mini = 1000000;
        cin >> count;
        int array[count] = {0};

        for (int i = 0; i < count; i++)
        {
            cin >> array[i];
        }
        mini = (array[0] + array[1]);

        for (int i = 0; i < count - 1; i++)
        {
            mini = min(mini, array[i] + array[i + 1]);
        }
        cout << mini << endl;
    }
    return 0;
}
