#include <stdio.h>

int main03()
{
    int number = 0;

    while(1)
    {  
        printf("숫자 입력: ");
        scanf("%d", &number);
        if (number == 0)
            break;
        else
            printf("%d", number);
    }

    return 0;
}