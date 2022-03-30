#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", '*');
    }

    printf("%c ", '*');
}

int tacknumber()
{
    int i;
    printf("enter a number ");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // printf  c = sum(a, b);
    // printstar(7);
    // printf("the sum is %d\n", c);
    printf("the number enterd is %d\n", c);
    c = tacknumber();
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}