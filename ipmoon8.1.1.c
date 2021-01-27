#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

double div(int a, int b)
{
    double answer= ((double) a / (double) b);
    return answer;
}

int mod(int a, int b)
{
    return a%b;
}


void printMsg()
{
    printf("completed");
}

void main(void)
{
    int num1, num2;
    printf("정수 두 개를 입력해주세요.");
    scanf("%d %d", &num1, &num2);
    printf("sum: %d\n",add(num1, num2));
    printf("difference: %d\n", sub(num1, num2));
    printf("product: %d\n", mul(num1, num2));
    printf("division: %f\n", div(num1, num2));
    printf("remainder: %d\n", mod(num1, num2));
    printMsg();
    printf("\n");
}

