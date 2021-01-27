#include <stdio.h>

int addAll(int n)
{
    //재귀함수 사용해서 만들기
    if(n==0)
    {
        return 0;
    }
    else if(n!=0)
    {
        n = n+addAll(n-1);
        return n;
    }
}

void main()
{
    int num;
    printf("정수 하나를 입력해주세요. \n");
    scanf("%d", &num);
    printf("%d\n", addAll(num));
}

