#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int i;
    int sum=0;
    for(i=0;i<=a;i++){
        sum+=i;
    }
    printf("from 1 %d to %d", a, sum);
    return 0;
}