
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int target;
    cin >> target;

    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(ar[mid] == target)
        {
            cout << "Found at index " << mid << endl;
            found = 1;
            break;
        }
        else if(ar[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
