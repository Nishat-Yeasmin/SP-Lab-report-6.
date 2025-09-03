#include<stdio.h>
int main()
{
    int n,even,odd;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d element in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Even elements are :\n");
    for(int i=0;i<n;i++)
    {
        even = arr[i];
        if(arr[i]%2==0)
         printf("%d ",even);
    }
     printf("\nThe Odd elements are :\n");
    for(int i=0;i<n;i++)
    {
        odd = arr[i];
        if(arr[i]%2!=0)
         printf("%d ",odd);
    }
    printf("\n");
    return 0;
}
