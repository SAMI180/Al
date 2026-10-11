
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;  // n = 5

    int ar[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // Input array: 4 2 5 1 3

    int com = 0; // Total comparison count

    // i = je position-e minimum value bosabo
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        // Prothome dhore nilam ar[i] sobcheye choto

        // i er porer element theke check korbo
        for(int j = i + 1; j < n; j++)
        {
            com++; // Protibar comparison hole count barbe

            // Current element choto hole min update korbo
            if(ar[j] < ar[min])
            {
                min = j;
            }
        }

        // Inner loop sesh.
        // Ekhon min index-e sobcheye choto value ache.

        // ar[i] ar ar[min] swap korbo
        int temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;

        // Pass 1: 1 2 5 4 3
        // Pass 2: 1 2 5 4 3
        // Pass 3: 1 2 3 4 5
        // Pass 4: 1 2 3 4 5
    }

    // Final sorted array print
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    cout << "\nTotal comparisons: " << com;

    return 0;
}
