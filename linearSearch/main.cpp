#include <iostream>

using namespace std;

int main()
{
    int arr[40], i, num, n, c=0, index;
	cout<<"Please enter the array size : ";
	//whatever number you key in is the total number of elements in your array//
	cin>>n;
	cout<<"Please enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number you want to find : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			index=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number cannot be found.!";
	}
	else
	{
		cout<<num<<" Was found at: "<<index<<" position.";
	}
}
