#include <stdio.h>

int main(void)
{
    int input, i, j;
    scanf("%d", &input);
    for(i=0;i<input;i++)
    {
        for(j=0; j<=i ;j++)
        {printf("*");
        }
        printf("\n");
    }
    return 0;
}

