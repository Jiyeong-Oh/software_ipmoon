#include <stdio.h>

int main()
{    
    while(1)
    {
        char i;
        printf("숫자 또는 문자 하나를 입력해주세요\n");
        scanf("%c",&i);
        if(i==10)
            continue;
        else if(65<=i && i<=90)
        {
            printf("%c\n", i+32);
            getchar();
            continue;
        }
        else if(97<=i && i<=122)
        {
            printf("%c\n", i-32);
            getchar();
            continue;
        }
        else if(48<=i && i<=57)
        {
            printf("%c\n",i);
            getchar();
            continue;
        }
        else
        {
            printf("exit\n");
            break;
        }
    }
    return 0;
}
