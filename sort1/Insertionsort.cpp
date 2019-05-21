#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    int i,j, temp;
    for (i = 1; i < n; i++)
    {
        temp= arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] >temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] =temp;
    }
}



int main()
{
    int arr[1000],n;

	cout<<"Enter size of Array:"<<endl;
	cin>>n;
	cout<<"enter the array:";
	for(int i=0;i<n;i++)
	{ 
		cin>>arr[i];
		}
    

    Sort(arr, n);
        int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout <<endl;


    return 0;
}
