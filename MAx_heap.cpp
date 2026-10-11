
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

    // Build Max Heap
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        int root = i;

        while(true)
        {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;

            // Check left child
            if(left < n && ar[left] > ar[largest])
            {
                largest = left;
            }

            // Check right child
            if(right < n && ar[right] > ar[largest])
            {
                largest = right;
            }

            // If root is largest, stop
            if(largest == root)
            {
                break;
            }

            swap(ar[root], ar[largest]);

            root = largest;
        }
    }

    // Heap Sort
    for(int i = n - 1; i > 0; i--)
    {
        // Move maximum element to the end
        swap(ar[0], ar[i]);

        int root = 0;
        int size = i;

        // Restore Max Heap
        while(true)
        {
            int largest = root;
            int left = 2 * root + 1;
            int right = 2 * root + 2;

            if(left < size && ar[left] > ar[largest])
            {
                largest = left;
            }

            if(right < size && ar[right] > ar[largest])
            {
                largest = right;
            }

            if(largest == root)
            {
                break;
            }

            swap(ar[root], ar[largest]);

            root = largest;
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    cout << endl;

    return 0;
}
