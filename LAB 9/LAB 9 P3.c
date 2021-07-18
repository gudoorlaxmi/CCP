PROGRAM- Demonstrate how to read data from the keyboard, write it    to a file called BMSCE,again read the same data from the BMSCE file,and display it on the screen/console.

#include<stdio.h>
int main()
{
FILE * fp;
char input[100];
int i;
fp=fopen("BMSCE.text","w");
printf("Enter the content to be inputted into the file:\n ");
gets(input);
fprintf(fp,"%s",input);
fp=fopen("BMSCE.text","r");
printf("Data read:");
fscanf(fp,"%s",input);
printf("\n %s",input);
fclose(fp);
return 0 ;
}
