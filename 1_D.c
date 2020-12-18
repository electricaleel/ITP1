#include <stdio.h>

int main(void)
{
    int S, hour, minute, second;

    S      = 0;
    hour   = 0;
    minute = 0;
    second = 0;

    scanf("%d", &S);

    if ((S >= 0) && (S < 86400))
    {
        hour = S / 3600;
        minute = (S % 3600) / 60;
        second = (S % 3600) % 60;

        printf("%d:%d:%d\n", hour, minute, second);
    }

    return 0;
}
