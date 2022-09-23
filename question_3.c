//3. Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enetr number:\n");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d\n",num--);
    }
    getch();
    return 0;
}