//7. Write a program to print the squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1;
    printf("Enter number:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d\t",i*i);
        i++;
    }
    getch();
    return 0;
}