#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The maximum element is: ");
    for(i=0;i<n;i++)
    {
        max = arr[0];
        if(max<arr[i])
        max = arr[i];
    }
    printf("%d\n",max);

    printf("The minimum element is: ");
    for(i=0;i<n;i++)
    {
        min = arr[0];
        if(min>arr[i])
            min = arr[i];
    }
    printf("%d\n",min);
}
