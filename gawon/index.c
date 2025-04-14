#include <stdio.h>

int main()
{
   
   int index[10] = { 0, };

   for(int i=0; i< 10; i++){
    scanf("%d",&index[i]);
   }

   for ( int i = 0; i < 9; i++){
    for(int j= i+1; j<10; j++){
        int temp = 0;
        if(index[j]>index[i]){
            temp = index[i];
            index[i]=index[j];
            index[j]=temp;
        }
    }
   }

   for(int i=0; i<10; i++){
    printf("%d", index[i] );
   }

    return 0;
}