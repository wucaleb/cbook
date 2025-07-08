#include<stdio.h>
int main(void){
    int A[5] = {74, 48, 55, 64, 34};
    int i, min, max;
    min=max=A[0];

    for(i = 0; i < 5; i++){
        if(A[i] > max)
            max = A[i];
        if(A[i] < min)
            min = A[i];
    }
    printf("陣列元素內最大值為: %d\n",max);
    printf("陣列元素內最小值為: %d\n",min);

    return 0;
}