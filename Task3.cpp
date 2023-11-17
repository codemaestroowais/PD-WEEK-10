#include<iostream>
using namespace std;
bool lenghtCheck(int n, int arr[], int length);
main()
{
    int n;
    cout<<"Enter the element of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int length;
    cout<<"Enter the lenght of the cycle: ";
    cin>>length;
    cout<<"Output: "<<lenghtCheck(n, arr, length);

}
bool lenghtCheck(int n, int arr[], int length)
{
    if(length<n)
    {
        for(int i=0; i<length; i++)
        {
            if(arr[i]==arr[length+i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}