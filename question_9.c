//9. Write a program to print the squares of first N natural numbers in reverse order
#include<conio.h>
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d\t",num*num);
        num--;
    }
    getch();
    return 0;
}