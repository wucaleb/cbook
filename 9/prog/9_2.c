#include<stdio.h>
int main(void){
    int i,score[4];

    score[0] = 78;
    score[1] = 55;
    //score[2] = 34;  //殘值無法判斷
    score[3] = 22;
    score[4] = 66; //無法預期結果

    for(i = 0;i <= 4; i++)
        printf("score[%d] = %d\n",i, score[i]);

        return 0;

}