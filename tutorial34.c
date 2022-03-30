//CALL THE VALUE  AND CALL THE REFERENCE
#include<stdio.h>
//function defnition to swap the values
void swap(int*x,int*y)
{
    int temp;
    temp =*x;  //seve the value  at  address X
    *x=*y; //put X into Y
    *y=temp;  // put temp into y
    return;
}
int main()
{
int a=34,b=74;
printf("%d and %d\n",a,b);
swap(&a,&b);
printf("%d and %d\n",a,b);
    return 0;
}

