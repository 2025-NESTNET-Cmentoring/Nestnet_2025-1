#include<stdio.h>
int main(){
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        else
            printf("output:%d\n",a);
    }
    return 0;
}