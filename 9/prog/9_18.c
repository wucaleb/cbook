/*氣泡排序法改良版*/
#include<stdio.h>
#define SIZE 5
void show(int a[]),bubble2(int a[]);
int main(void)
{
    int data[SIZE]={26,5,81,7,63};

    printf("Before process...\n");
    show(data);
    bubble2(data);
    printf("After process...\n");
    show(data);
    
    return 0;
}
void show(int a[])
{
    int i;

    for(i = 0;i < SIZE;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void bubble2(int a[])
{
    int i, j, temp; 
    int flag = 0;   //新增flag：用來記錄「本趟是否發生了交換」。初始設為 0，確保迴圈至少執行一趟。

    for(i = 1;(i < SIZE) &&(!flag);i++) //只要某一趟結束後 flag 保持 1 ，迴圈就會提前停止。
    {
        flag = 1;   //設flag = 1。
        for(j = 0;j < (SIZE-i);j++)
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
    }
}

/*flag 變數來實現「提前退出 (Early Exit)」。
優化核心：如果某一趟沒有發生任何交換 (flag 保持 1)，則證明陣列已經有序，程式立即停止排序。
效率提升：對於接近有序的陣列，效率從 O(N²) 提升至 O(N)。*/