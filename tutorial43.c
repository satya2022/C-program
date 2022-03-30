//TYPEDEF
#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fev_char;
    char name[34];
} std;
int main()
{
  //  int *a, b;
    typedef int *intpointer;
    intpointer a, b;
    int c = 89;
    a = &c;
    b =& c;
    //  std s1, s2;
    //  s1.id = 56;
    //    s2.id = 89;
    //  printf("value of s1's id is %d\n", s1.id);
    //  printf("value of s2's id is %d\n", s2.id);
    //  printf("value of s1's id is %d\n", s1.id);
    //typedef<previos_name><alise_name>
    // typedef unsigned long ul;
    //  typedef int integer;
    //  integer a = 4;
    //  ul l1, l2, l3;
    //  printf("value of a is %d\n", a);
    return 0;
}
