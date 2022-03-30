//STRINGS=array characters terminated by null characters '\0'  equal men if i type?  char name[]="harry";={'h','a','r','r','y'.'\0'};
#include <stdio.h>

void printstr(char str[])
{
    int i;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    //  char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[] = "harry";//char str[?] =?u type  large of 5
    char str[34];
    gets(str);
    printf("using costom printstr\n");
    printstr(str);
    printf("using printf %s\n", str);
    printf("using puts\n");
    puts(str);
    return 0;
}
