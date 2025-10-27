/* 4.3 Patterns: 8*/
#include<stdio.h>
int main()
{
printf("Mahek Tilara\nSAP ID: 590025452\nCourse: BSc. CS. \nBatch: 1");
printf("\rn-----------------\n");
printf("The pattern is:\n");
int i, j, k;
for(i=1; i<=5; i++)
{
for(k=1; k<=i; k++)
{
printf(" ");
}
{
for(j=1; j<=6-i; j++)
printf("%d", j);
}
printf("\n");
}
return 0;
}
