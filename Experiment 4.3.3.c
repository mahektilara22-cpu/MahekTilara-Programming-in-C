/* 4.3 Patterns: 3*/
#include<stdio.h>
int main()
{
printf("Mahek Tilara\nSAP ID: 590025452\nCourse: BSc. CS. \nBatch: 1");
printf("\n-----------------\n");
printf("The pattern is:\n");
int i, j, k=1;
for(i=1; i<=5; i++)
{
for(j=1; j<=i; j++)
{
printf("%d ", k);
k++;
}
printf("\n");
}
}
