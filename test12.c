#include <stdio.h>
int main()
{
    int digit,num;

    printf("請輸入任意整數 \n==> ");
    scanf("%d",&num);
    printf("整數的相反輸出 \n==> ");

    while( num != 0 )
    {
        digit = num % 10;
        num = num / 10;
        printf("%d",digit);
            
    }
    printf("\n");
    getchar();
    return 0;
}
