#include <stdio.h>
int main(void){
    char ch;
    while(ch != 'q')
    {
        ch = getchar();
        printf("ASCII OF CH = %d\n", ch);
    }
    printf("你已經按了q...\n");
    return 0;
}