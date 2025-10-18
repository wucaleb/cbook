#include<stdio.h>
int main(void){
    int i,arr[5];
    for(i = 0; i < 5; i++)
    arr[i] = i + 1;
    for (i = 0; i < 5; i++)
    printf("arr[%d]= %d\n",i, arr[i]);
    return 0;
}

