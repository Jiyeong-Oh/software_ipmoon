#include <stdio.h>

int main(void)
{
    printf("Enter three integers here:");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int min, max;
    if(num1<=num2 && num1<=num3)//num1이 최솟값일 때
    {
        min=num1;
        if(num2>=num3)
            max=num2;
        else
            max=num3;
    }
    else if(num2<=num3)//num1이 최솟값이 아닐 때 대소비교1
    {
        min=num2;
        if(num1>=num3)
            max=num1;
        else
            max=num3;
    }
    else
    {
        min=num3;
        if(num1>=num2)
            max=num1;
        else
            max=num2;
    }
    printf("min: %d", min);
    printf("\nmax: %d", max);
    printf("\n");
    return 0;
}

