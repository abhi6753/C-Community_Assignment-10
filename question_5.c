//5. Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    while(num)
    {
        printf("%d\n",num*2);
        num--;
    }
    getch();
    return 0; 
}