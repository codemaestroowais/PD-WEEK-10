#include<iostream>
using namespace std;
int checkCount(int n, char count, string arr[]);
main()
{
    int n;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>arr[i];
    }
    char count;
    cout<<"Enter the letter you want to count: ";
    cin>>count;
    cout<<count<<" shows up "<<checkCount(n, count, arr)<<" times in the data.";
}
int checkCount(int n, char count, string arr[])
{
    int size=0;
    for(int i=0; i<n; i++)
    {
        string times;
        times=arr[i];
        for(int i=0; times[i]!='\0'; i++)
            {
            if(times[i]==count)
            {
                size=size+1;
            }
        }
    }
    return size;
}