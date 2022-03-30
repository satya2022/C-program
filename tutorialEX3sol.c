#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_itrerative(int n)
{
    int a = 0;
    int b = -1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //1 for iterative 1
        a = b - a; //1 for iterative 1
    }

    return 0;
}

int main()
{
    int number;
    printf("enter the index to get fibonacci series \n");
    scanf("%d", &number);
    printf("the number of fibonacci number at position no %d using itrerative approch%d\n", number, fib_itrerative(number));
    printf("the number of fibonacci number at position no %d using recursive approch%d\n", number, fib_recursive(number));
    return 0;
}
