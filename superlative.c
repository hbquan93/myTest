#include<stdio.h>
void main()
{
    int a, b;
    printf("Superlative solving equations ax + b = 0\n");
    printf("Input a, b: ");
    scanf("%d%d", &a, &b);
    if (a == 0)
        if (b == 0)
            printf("True with all x\n");
        else
            printf("Impossible equation (No result for x)\n");
    else
        printf("Result : x = %.2f\n", -(float)b/a);
}
