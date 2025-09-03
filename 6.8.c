#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[40];
    printf("Input the string: ");
    gets(str);
    int word=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]== ' ')
        word++;
    }
    printf("%d\n",word);
    return 0;
}
