#include<stdio.h>
int main()
{
    int n,i;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
     int arr[n];
    printf("Input %d elements in the array :\n",n);

    for(i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    int j,count=0;
    printf("Total number of duplicate elements found in the array is : ");
    for(i=0;i<n;i++)
    {
        for(j=i-1;j<n;j++)
        {
        if(arr[j]== arr[i])
        count++;
        break;
        }
    }
    printf("%d\n",count);
}
