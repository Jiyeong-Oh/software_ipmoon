#include <stdio.h>

int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n>1)
        return (fibonacci(n-1)+fibonacci(n-2));
}

void main()
{
    int input;
    printf("0보다 크거나 같은 정수를 하나 입력해주세요\n");
    scanf("%d", &input);
    printf("%d\n", fibonacci(input));
}

