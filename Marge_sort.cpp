#include<bits/stdc++.h>
using namespace std;
void marge(int arr[], int left[], int szl, int right[], int szr);
void Marge_sort(int ar[],int size) 
{
    if(size <= 1)
    {
        return;
    }
    int mid = size/2;
    int left[mid];
    int right[size - mid];
    for(int i =0; i < mid; i++)
    {
        left[i] = ar[i];
    }
    for(int i = 0; i < size - mid; i++)
    {
        right[i] = ar[mid + i];
    }
    Marge_sort(left,mid);
    Marge_sort(right,size - mid);
    marge(ar , left , mid ,right, size - mid);
}
void marge(int arr[], int left[], int szl, int right[], int szr)
{
    int x = 0, y = 0, i = 0;
    while(x < szl and y < szr)
    {
        if(left[x] < right[y])
        {
         arr[i] = left[x];
         x++;
        }
        else
        {
            arr[i] = right[y];
            y++;
        }
        i++;
    }
    while(x < szl)
    {
        arr[i++] = left[x++];
    }
    while(y < szr)
    {
        arr[i++] = right[y++];
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    Marge_sort(ar,n);
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] <<" ";
    }
    return 0;
}