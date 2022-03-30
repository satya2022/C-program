//printing star pattern
#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++) //consept  J< rows-i       //if i type rows7then  -ve   i=012344......so result will come here
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("enter 0 for star pattern and 1 for reverse star pattern\n");
    scanf("%d", &type);
    printf("how many row do you want\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;
    case 1:
        reversestarpattern(rows);
        break;
    default:
        printf("you have enterd invalid choice");
        break;
    }

    return 0;
}

/*
*
**
***
****
*/
//tringulaer star

/*
****
***
**
*
*/
//reverse tringulaer star
