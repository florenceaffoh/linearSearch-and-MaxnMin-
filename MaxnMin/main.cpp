#include <iostream>

using namespace std;

int main()
{
  int arr[10];
  int a,max,min,size;

  cout<<"Please enter the size of the array: ";
  cin>>size;

  cout<<"Please enter the elements in the array: ";
  for(a=0; a<size; a++)
	{
		cin>>arr[a];
	}
//start by assuming first elements as max and min
  for(a = 0; a<size; a++)
    {
         max = arr[0];
         min = arr[0];
    }
     //Find maximum and minimum in all array elements.
    for(a=1; a<size; a++)
    {
    // If current element is greater than max
        if(arr[a] > max)
            max = arr[a];
        // If current element is smaller than min
        if(arr[a] < min)
            min = arr[a];
    }

    cout<<"The minimum element is: "<<min;
    cout<<"\nThe maximum element is: "<<max;
    return 0;

}
