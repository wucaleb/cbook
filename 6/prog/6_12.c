/*忘了加上break的switch敘述*/
#include<stdio.h>
int main(void)
{
    char grade;
    printf("Input grade:");
    scanf("%c",&grade);

    switch(grade)
    {
        case'a':
        case'A':
            printf("Excellent!\n");
        
        case'b':
        case'B':
            printf("Good\n");

        case'c':
        case'C':
            printf("Be study hard!\n");

        default:
            printf("Failed\n");
            return 0;
    }
    
    return 0;
}