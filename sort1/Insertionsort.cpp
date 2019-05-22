#include <bits/stdc++.h>
using namespace std;
void Sort(int arr[][2], int n)
{
    int i,j, temp,temp1;
    for (i = 1; i < n; i++)
    {
        temp= arr[i][0];
        temp1=arr[i][1];
        j = i - 1;


        while (j >= 0 && arr[j][0] >temp)
        {
            arr[j + 1][0] = arr[j][0];
			arr[j + 1][1] = arr[j][1];
            j = j - 1;
        }
        arr[j + 1][0] =temp;
        arr[j + 1][1] =temp1;
    }
    for(j=0;j<n;j++)
    {

	for(i=0;i<n;i++)
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
   	cout<<"Enter size of Array:n=";
	cin>>n;
	cout<<"enter the array in 2-d form(array[n][2]):";
	cout<<endl;
   for(i=0; i<n; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for array[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   Sort(arr,n);

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
