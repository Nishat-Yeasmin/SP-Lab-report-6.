#include<stdio.h>
int main()
{
int n,i,r,sum=0;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
int arr[n];
for(i=0 ;i<n; i++)
{
    printf("element - %d : ",i);
    scanf("%d",&arr[i]);
}
printf("Sum of all elements stored in the array is : ");
for(i=0;i<n;i++)
{
while(arr[i]!=0)
{
    r = arr[i]%10;
    sum = sum + r;
      arr[i] = arr[i]/10;
}
}
printf("%d",sum);
return 0;
}
