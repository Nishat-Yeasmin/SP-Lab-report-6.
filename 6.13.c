#include<stdio.h>
int large(int arr[], int size)
{
   int i,max = arr[0];
   for(i=1;i<size;i++)
{
    if(max<arr[i])
        max = arr[i];
}
    return max;
}
int main()
{
    int i,n,largest;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    largest = large(arr,n);
    printf("The largest element in the array is: %d\n",largest);
    return 0;
}
