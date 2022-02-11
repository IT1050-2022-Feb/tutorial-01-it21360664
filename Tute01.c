/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
int m1,m2;
float avrg;
printf("Marks of the subject 1 : ");
scanf("%d",&m1);
printf("Marks of the subject 2 : ");
scanf("%d",&m2);
avrg=(m1+m2)/2.0;

printf("Average marks %d",avrg);
  
  return 0;
}

