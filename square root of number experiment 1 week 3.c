#include <stdio.h>
#include <math.h>
void main()
{
    float num, root;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num >= 0)
    {
        root = sqrt(num);
        printf("Square root = %.2f", root);
    }
    else
    {
        printf("Square root of a negative number is not real");
    }
}


    