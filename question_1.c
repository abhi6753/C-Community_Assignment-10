//1. Write a program to print MySirG N times on the screen.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many times you want to print:\n");
    scanf("%d",&n);
    while (n>0)
    {
        printf("MySirG\n",n--);
    }
    getch();
    return 0;
    
}