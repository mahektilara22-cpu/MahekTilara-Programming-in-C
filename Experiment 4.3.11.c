/* 4.3 Patterns: 11*/
#include<stdio.h>
int main()
{
printf("Mahek Tilara\nSAP ID: 590025452\nCourse: BSc. CS. \nBatch: 1");
printf("\n-----------------\n");
printf("The pattern is:\n");
int i, l;
for(i=1; i<=6; i++)
{
int m=7-i;
for(l=1; l<i; l++)
{
printf("%d", m);
m++;
}
printf("\n");
}
return 0;
}
