 /*搭配4_18.c
 修正4_18.c讀取到錯誤字元*/
 #include<stdio.h>

 int main (void)
 {
     int num;
     char ch;
 
     printf("請輸入一個整數： ");
     scanf("%d", &num);                // 讀取數字後，使用者按下的 [Enter 鍵 \n] 會殘留
     
     fflush(stdin);                    
     // =========================================================================
     // 【🚩 跨平台陷阱註記 🚩】
     // 課本或 Windows/MSVC 環境可能建議使用 fflush(stdin) 來清除輸入緩衝區。
     // 
     // 🚨 錯誤原因：在 Mac/Linux (GCC/Clang) 等標準 C 環境中，fflush(stdin) 
     //              是未定義行為（Undefined Behavior），它不起作用！
     // 應對方法（選擇其一）：
     // 1. **最簡單：** 在下一個 scanf 前加空格： scanf(" %c", &ch);
     // 2. **最標準：** 使用 getchar() 迴圈清除緩衝區。
     // =========================================================================

     printf("請輸入一個字元： ");
     scanf("%c", &ch);
     printf("num=%d, ASCII of ch=%d\n", num, ch);
 
     return 0;
 }

 