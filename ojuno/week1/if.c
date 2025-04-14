#include<stdio.h>

int main(){
    int grade = 0;

    scanf("%d", &grade);

    if(0>grade>100){
        return 0;
    }
    else if(grade>=90){
        printf("A등급");
    }
    else if(grade>=80){
        printf("B등급");
    }
    else if(grade>=70){
        printf("C등급");
    }
    else printf("F등급");
}