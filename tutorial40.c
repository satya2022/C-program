//STRING  FUNCTION
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[20];

    printf("Enter your name");
    scanf("%s", &s1);
    strcat(s1, "  is a friend of ");

    printf("Enter Seconds name");
    scanf("%s", s2);
    strcpy(s3, strcat(s1, s2));
    puts(s3);
}