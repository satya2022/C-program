#include <stdio.h>
int main()
{
    int num;
    printf("enter any number you want multiplication table\n");
    scanf("%d", &num);
    printf("multiplication table of %d is as follows\n",num);
/*printf("%d x 1=%d\n",num,num*1);
printf("%d x 2=%d\n",num,num*2);
printf("%d x 3=%d\n",num,num*3);
printf("%d x 4=%d\n",num,num*4);
*/
for (int i = 1; i < 11; i++)
{
    printf("%d x %d=%d\n",num,i,num*i);
}


    return 0;
}
