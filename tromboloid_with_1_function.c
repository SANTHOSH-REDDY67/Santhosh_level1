//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
 float h,b,d,volume;
 printf("enter the value of h");
 scanf("%f",&h);
 printf("enter the value of b");
 scanf("%f",&b);
 printf("enter the value of d");
 scanf("%f",&d);
 volume=(((h*b*d)+(d/b))*1/3);
 printf("volume of tromboloid is %f",volume);
 return 0;
}
