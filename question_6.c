//6. Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d\t",2*num-1);
        num--;
    }
    getch();
    return 0;
}