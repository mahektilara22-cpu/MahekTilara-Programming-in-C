/*
Experiment 3.2 : LOOPS
1. Write a program to enter numbers till the user wants.
At the end, display the count of positive, negative, and zeroes entered.
*/
#include <stdio.h>
int main() {
int num, posCount = 0, negCount = 0, zeroCount = 0;
char choice;
do {
printf("Name - Mahek Tilara\nSAP ID - 590025452\nCourse-
BSC_CS\nBatch-01\n");
printf("Enter a number: ");
scanf("%d", &num);
if (num > 0)
posCount++;
else if (num < 0)
negCount++;
else
zeroCount++;
printf("Do you want to enter another number? (y/n): ");
// Consume any trailing newline characters and take user input
while ((getchar()) != '\n');
scanf("%c", &choice);
} while (choice == 'y' || choice == 'Y');
printf("\nCount of positive numbers: %d\n", posCount);
printf("Count of negative numbers: %d\n", negCount);
printf("Count of zeroes: %d\n", zeroCount);
return 0;
}
