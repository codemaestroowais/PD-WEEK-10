#include<iostream>
using namespace std;
int volumeCalculation(int n, int arr[]);
main()
{
    int n;
    cout<<"Enter the number of boxes: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int i=0; i<(n*3); i++)
    {
        cin>>arr[i];
    }
    int res=volumeCalculation(n, arr);
    cout<<"Total volume of all boxes: "<<res;
    
}
int volumeCalculation(int n, int arr[])
{
    int totalvolume=0;
    for(int i=0; i<(n*3);i=i+3)
    {
        int length=arr[i];
        int width=arr[i+1];
        int height=arr[i+2];
        int volume=length*height*width;
        totalvolume=totalvolume+volume;
    }  
    return totalvolume;
}