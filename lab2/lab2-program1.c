#include<stdio.h>
int main()
{
    char uppercase;
    char lowercase;
    printf("write the character in uppercase");
    scanf("%c",&uppercase);
    lowercase=uppercase+32;
    printf("lowercase=%c",lowercase);
    return 0;
}
