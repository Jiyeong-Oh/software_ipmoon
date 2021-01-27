#include <stdio.h>

int combination(int n, int r)
{
    if(r==0)
        return 1;
    else if(n==r)
        return 1;
    else if(n>r)
    {
        int answer=combination(n-1,r-1)+combination(n-1,r);
        return answer;
    }
}

void main()
{
    int input_n, input_r;
    scanf("%d %d", &input_n, &input_r);
    printf("%d\n",combination(input_n, input_r));
}
