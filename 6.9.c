#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char str[100];
    printf("Input the string: ");
    gets(str);

    int freq[256]={0};
    for(i=0;str[i]!='\0';i++)
    {
        char ch = tolower(str[i]);
        freq[(unsigned char)ch]++;
    }
    int max=0;
    char maxchar;
    for(i=0;i<256;i++)
    {
        if(freq[i]>max)
        {
            max = freq[i];
            maxchar = (char)i;
        }
    }
     printf("The highest frequency of character '%c'\n",maxchar);

     printf("appears number of times: %d\n",max);


    return 0;
}
