//10. Write a program to print the cubes of the first N natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d\t",num*num*num);
        num--;
    }
    getch();
    return 0;
}