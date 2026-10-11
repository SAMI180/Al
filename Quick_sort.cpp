#include<bits/stdc++.h>
using namespace std;
int  Quick_sort(int ar[], int l, int h)
{
    int i = l;
    int j = h;
    int pivot = ar[l];
    while(i<j)
    {
        while(i < h and ar[i] <= pivot)
        {
            i++;
        }
        while(j > l and ar[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[l],ar[j]);
    return j;
}
void sort_array(int ar[], int l, int h)
{
    if(l<h)
    {
    int j = Quick_sort(ar,l,h);
    sort_array(ar,l, j-1);
    sort_array(ar,j+1,h);
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
    sort_array(ar,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] <<" ";
    }
    return 0;
}