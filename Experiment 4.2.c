/*
2. Write a program to print the multiplication table of the number
entered by the user.
It should display in the format: Num * i = Result.
*/
#include <stdio.h>
int main() {
int num, i;
printf("Name - Mahek tilara\nSAP ID - 590025452\nCourse-
BSC_CS\nBatch-01\n");
printf("Enter a number: ");
scanf("%d", &num);
printf("Multiplication table of %d:\n", num);
for (i = 1; i <= 10; i++) {
printf("%d * %d = %d\n", num, i, num * i);
}
return 0;
}
