//STRUCTURES IMPORTANTE
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fev_char;
    char name[34];
};
int main()
{
    struct student harry, subham, ravi;
    harry.id = 1;
    ravi.id = 2;
    subham.id = 3;
    harry.marks = 466;
    ravi.marks = 466;
    subham.marks = 66;
    harry.fev_char = 'p';
    ravi.fev_char = 'y';
    subham.fev_char = 'o';
    strcpy(harry.name, "harry poter student of the year"); //strcpy copy your harry.name  and replace vlue
    strcpy(subham.name, "subham kumar");
    printf("harry got  %d marks\n", harry.marks);
    printf("hary's  name is : %s\n", harry.name);
    printf("subham got  %d marks\n", subham.marks);
    printf("subham's name is:  %s", subham.name);
    return 0;
}
