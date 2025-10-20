/*無窮迴圈的應用*/
#include<stdio.h>
int main(void)
{
    char ch;
    while(ch != 17)
    {
        ch = getch();
        printf("ASCII of ch=%d\n",ch);
    }
    printf("您已按下control+q\n");

    return 0;
}

