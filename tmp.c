#include <stdio.h>
/*
int main(void)
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Entered numbers are %d and %d\n", num1, num2);
    return 0;
}
*/

int main(void)
{
    for(int i=0; i<3; ++i)
    {
        printf("%d\n", i);
        for(int j=0; j<2; ++j)
            printf("%d\n", j);
    }
    return 0;
}
