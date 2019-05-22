#include <iostream>
using namespace std;

void heapify(int arr[][2], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l][0] > arr[largest][0])
        largest = l;
    if (r < n && arr[r][0] > arr[largest][0])
        largest = r;


    if (largest != i)
    {
        swap(arr[i][0], arr[largest][0]);
        swap(arr[i][1], arr[largest][1]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[][2], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0][0], arr[i][0]);
        swap(arr[0][1], arr[i][1]);

        heapify(arr, i, 0);
    }
    for(int j=0;j<n;j++)
    {

	for(int i=0;i<n;i++)
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
   heapSort(arr,n);

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
