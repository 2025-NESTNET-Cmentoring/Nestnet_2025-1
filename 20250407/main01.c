#include <stdio.h>

int main02()
{
    int n = 0;
    int sum = 0; 
    int i;

    printf("정수를 하나 입력하시오: ");
    scanf("%d", &n);

    for( i = 1; i <= n; i++ )
    {
        sum += i;
    }

    printf("1부터 n까지의 합: %d", sum);
    return 0;
}