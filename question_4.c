//4. Write a program to print the first N even natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1;
    printf("Enter where upto you want to print:\n");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",i*2);
       i++;
    }
    getch();
    return 0;
}