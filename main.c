
#include "include/my_printf.h"
#include "include/my.h"

int main(void)
{
    char *str = "Bonjour !bqdvhdvxHGXVJXGBHVJSbHAGXVHxvqhsqvcjcbkjchbqjcgbhcvJ\n";
    int nbr = 546738;
    int n1;
    int n2;
    int a;
    int b;
    signed char c = -100;

    printf("my_printf :\n");


    a = my_printf("% e", 2121);


    printf("\n%d\n", a);
    printf("\n");
    printf("printf :\n");


    b = printf(   "% c", 85);


    printf("\n%d\n", b);

    return 0;
}
