#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,len=0;
    char str1[100],str2[200];
    printf("Input the string: ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
        }
    for(i=len-1;i>=0;i--)
    {
        if(str1[i]!= ' ')
       {
        str2[j++]=str1[i];
        str2[j++] = ' ';
        }
    }
    if(j>0)
        j--;

    str2[j]='\0';
    printf(" %s\n",str2);

    return 0;
}

