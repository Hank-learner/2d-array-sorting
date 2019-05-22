#include <bits/stdc++.h>
using namespace std;
int split (int arr[][2], int small, int big)
{
    int pivot = arr[big][0];
    int pivot1 = arr[big][1];
    int i = (small - 1);

    for (int j = small; j <= big- 1; j++)
    {

        if (arr[j][0] <= pivot)
        {
            i++;

            swap(arr[i][0], arr[j][0]);
            swap(arr[i][1], arr[j][1]);
        }
    }

      swap(arr[i+1][0], arr[big][0]);
      swap(arr[i+1][1], arr[big][1]);

    return (i + 1);
}

void Sort(int arr[][2], int small, int big)
{
    if (small < big)
    {

        int pi = split(arr, small, big);
        Sort(arr, small, pi - 1);
        Sort(arr, pi + 1, big);
    }
    for(int j=0;j<big+1;j++)
    {

	for(int i=0;i<big+1;i++)
	{
		if(arr[i][0]==arr[i+1][0])
		{
					if(arr[i][1]>arr[i+1][1])
		     {swap(arr[i][1],arr[i+1][1]);
		     }
		}
	}
    }
}





int main()
{

int arr[100][2];

   int i, j,n;
   	cout<<"Enter size of Array:";
	cin>>n;
	cout<<"enter the array in 2-d form(array[n][2]):"<<endl;
   for(i=0; i<n; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for array[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   Sort(arr,0,n-1);

   printf("Two Dimensional array elements:\n");
   for(i=0; i<n; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", arr[i][j]);
         if(j==1){
            printf("\n");
         }
      }
   }
}
