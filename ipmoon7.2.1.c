#include <stdio.h>
int main()
{
    int num1;
    double num2;
    printf("정수와 실수를 하나씩 입력해 주세요\n");
    scanf("%d %lf", &num1, &num2);
    printf("%10d%10d%10d\n", num1*2, num1*4, num1*8);
    printf("%10.2f%10.2f%10.2f\n", num2*2, num2*4, num2*8);
    return 0;
}
