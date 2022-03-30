#include <stdio.h>
int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;
    while (1)
    {
        printf("enter the input charactor.q to quit\n  1. kms to miles\n 2.inches to foot\n  3.cms to inches\n        4. pound to kgs\n  5.  nchestometers\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':

            printf("quiting the program...");
            goto end;
            break;

        case '1':

            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%2f km is equal to %2f miles\n", first, second);
            break;

        case '2':

            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f inches  is equal to %f foot\n\n\n", first, second);
            break;
        case '3':

            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cms is equal to %finches\n", first, second);
            break;
        case '4':

            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f pound is equal to %f kgs\n", first, second);
            break;
        case '5':

            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%f inches is equal to %f meters\n", first, second);
            break;

        default:

            break;
        }
    }
end:
    return 0;
}
