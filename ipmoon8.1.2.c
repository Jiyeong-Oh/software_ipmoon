#include <stdio.h>

int addTotal(int n)
{
    int answer=0;
    for(int i=1; i<=n; i++)
    {
        answer+=i;
    }
    return answer;
}

int mulTotal(int n)
{
    int answer=1;
    for(int i=1; i<=n; i++)
    {
        answer = i * answer;
    }
    return answer;
}

void main()
{
    int num;
    printf("정수 하나를 입력해주세요.\n");
    scanf("%d", &num);
    printf("addTotal (): %d\n", addTotal(num));
    printf("gMul: %d\n", mulTotal(num));
}
