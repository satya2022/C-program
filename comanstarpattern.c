//printing star pattern
#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j <i; j++)
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
        for (int j = 0; j < rows-i; j++)//consept  J< rows-i       //if i type rows7then  -ve   i=012344......so result will come here
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("how many row do you want\n");
    scanf("%d", &rows);
    reversestarpattern(rows);//if you want notreversestar pattern then  //this line you have to remove and you wright only STARPATTERN
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
