#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    // vars
    vector<int> days;
    int from, to, n;
    int k;

    bool smallerFound ;

    cin >> n >> from >> to;

    for (int x=0; x<n; x++)
    {
        cin >> k;
        days.push_back(k);
    }


    // work principle

    for (int x=0; x < n; x++)
    {
        smallerFound = false;
        for (int a = x+1; a <= x+to && a<n ;a++)
        {
            if (days[x] > days[a])
            {
                smallerFound = true;
                x = a-1;
                break;
            }
        }

        if (!smallerFound || x+1 == n)
        {
            cout << x + 1 << endl;
            break;
        }

    }



    return 0;
}
