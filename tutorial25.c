//RECURSION
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)

    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;

    printf("enter a number you want to factorial of\n");
    scanf("%d", &num);
    printf("the fectorial of%d is %d\n", num, factorial(num));
    return 0;
}
