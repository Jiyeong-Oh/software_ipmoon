#include <stdio.h>

void printLine(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}

void main()
{
    int input;
    printf("정수 하나를 입력해주세요");
    scanf("%d",&input);
    for(int i=1; i<=input; i++)
        printLine(i);
    for(int i=input; i>=1; i--)
        printLine(i);
}

