#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i =0; i < n; i++)
    {
        cin >> ar[i];
    }
    int com = 0;
    for(int i = 0; i < n-1; i++)
    {
        int x = 0;

        for(int j = 0; j < n-1-i; j++)
        {
            com++;
            if(ar[j] > ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                x = 1;
            }
        }
        if(x == 0)
        {
            break;
        }
    }
    for(int i =0; i< n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}