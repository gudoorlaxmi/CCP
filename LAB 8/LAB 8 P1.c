PROGRAM-   Develop a C program to copy one string to another string and find its length without using built in functions.


#include <stdio.h>
#include <stdlib.h>

int main()

{
    char string1[1000],string2[1000];
    int i;
    printf("enter any string: ");
    gets(string1);
    for(i=0;string1[i]!='\0';i++)
    {
        string2[i] = string1[i];
    }
    string2[i]='\0';
    printf("original string = '%s'\n",string1);
    printf("copied string = '%s'\n",string2);
    printf("length of the string = %d\n",i);
    return 0;


}

