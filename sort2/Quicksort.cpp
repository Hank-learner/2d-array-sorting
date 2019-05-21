#include <bits/stdc++.h>
using namespace std;
int split (int arr[], int small, int big)
{
    int pivot = arr[big];  
    int i = (small - 1);

    for (int j = small; j <= big- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;

            swap(arr[i], arr[j]);
        }
    }

      swap(arr[i+1], arr[big]);
    
    return (i + 1);
}

void Sort(int arr[], int small, int big)
{
    if (small < big)
    {

        int pi = split(arr, small, big);
        Sort(arr, small, pi - 1);
        Sort(arr, pi + 1, big);
    }
}





int main()
{
 int arr[1000],n;

	cout<<"Enter size of Array:";
	cin>>n;
	cout<<"enter the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		}


    Sort(arr,0, n-1);
        int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout <<endl;


    return 0;
}
