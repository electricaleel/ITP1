#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    /* 入力値範囲チェック */
    if ((a >= -1000) &&
        (a <=  1000) &&
        (b >= -1000) &&
        (b <=  1000))
    {
        if (a < b)
        {
            /* a は b より小さい */
            printf("a < b\n");
        }
        else if (a > b)
        {
            /* a は b より大きい */
            printf("a > b\n");
        }
        else
        {
            /* a は b と等しい */
            printf("a == b\n");
        }
    }

    return 0;
}
