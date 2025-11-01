/*以指標變數指向字串*/
/*-----------------------
#include<stdio.h>
int main(void)
{
    char name [20];
    char *ptr="How are you?";
    printf("What's your name? ");
    gets(name);
    
    printf("Hi, %s, ",name);
    puts(ptr);
    
    return 0;
}
-----------------------
由於gets() 在 C 語言中是一個極度危險的函式，它已經被標準廢棄，
而且在現代編譯器上使用會導致警告甚至錯誤，以下為改良版(2025.10.31)*/

#include <stdio.h>
#include <string.h> // 引入字串函式庫，雖然本例不一定需要，但對字串操作是好習慣

#define NAME_SIZE 20

int main(void)
{
    char name[NAME_SIZE];
    char *ptr = "How are you?";
    int len;

    printf("What's your name? ");
    
    // 使用安全的 fgets() 讀取輸入，並限制讀取長度為 NAME_SIZE
    if (fgets(name, NAME_SIZE, stdin) != NULL) {
        len = strlen(name);                         //strlen 是一個標準 C 函式，用於計算一個字串（String）的長度。
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';                   //確保將\n替換為\0(null)，來滿足一行表達的需求
        }
    }
    
    printf("Hi, %s, ", name);
    puts(ptr);
    
    return 0;
}

/*輸出結果：
假設使用者輸入 Smith
-------------------------------
What's your name? Smith
Hi, Smith, How are you?
-------------------------------
fgets(str, size, stdin)參數用法
1. str (目標陣列)
2. size (最大長度，防止溢位)
3. stdin (從鍵盤讀取)

puts(str)
輸入	一個字串的地址（char *）。
功能	輸出字串內容，並自動在結尾加上換行符 (\n)。
口訣	輸出字串，自動換行。

*/