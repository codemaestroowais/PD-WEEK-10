#include<iostream>
using namespace std;
int progressDays(int n, int arr[]);
main()
{
    int n;
    cout<<"Enter the number of Saturdays: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter miles run for Saturday "<<(i+1)<<": ";
        cin>>arr[i];
        cout<<arr[i];
    }
    cout<<"Total progress days: "<<progressDays(n,arr);
}
int progressDays(int n, int arr[])
{
    int size=0;
    for(int i=0; i<(n-1); i++)
    {
        if(arr[i]<arr[i+1])
          size=size+1;
    }
    return size;
}