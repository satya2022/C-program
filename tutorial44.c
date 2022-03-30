//UNIONS IN C
#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    int fev_char;
    int name[34];
};
int main()
{
    union student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fev_char = 'u';
    strcpy(s1.name, "harry");

    printf("the id is %d\n ", s1.id);
    printf("the marks is %d\n ", s1.marks);
    printf("the fev_char is %c\n ", s1.fev_char);
    printf("the name is %s\n ", s1.name);

    return 0;
}
