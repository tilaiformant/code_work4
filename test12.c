#include <stdio.h>
int main()
{
    int sum = 0;
    int i;

    for ( i = 1; i <= 100; i++ )
        sum += i;
    printf("總和 = %d \n",sum);

    getchar();
    return 0;
}
