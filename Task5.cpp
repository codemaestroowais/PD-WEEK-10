#include<iostream>
#include<algorithm>


using namespace std;
void order(int weight[]);


main()
{




    int weight[10];

	cout<<"Enter the weights of 10 packages: "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>weight[i];
	}

	
	order(weight);
}
void order(int weight[])
{



	sort(weight, weight+ 10);
	cout<<"Sorted array in ascending order: [";				for(int i=0; i<10; i++)
	{
		cout<<weight[i];
		if((i+1)!=10)
		{
			cout<<", ";
		}
	}
			cout<<"]";
}