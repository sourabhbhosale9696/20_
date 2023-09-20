// que no 3
#include <stdio.h>
void main()
{
    int i, j, cnt, n1, n2;
    printf("Enter two Numbers : ");
    scanf("% d % d”, &n1, &n2");

    if (n1 > n2)
    {
        printf("n2 must be greater than n1 \n");
        return;
    }

    printf("prime Numbers between % d and % d  : ", n1, n2);
    for (i = n1; i <= n2; i++)
    {

        cnt = 0;

        for (j = 2; j <= i / 2; j++)
        {
            if (i%j == 0)
            {
                cnt++;
                break;
            }
        }
        if (cnt == 0)
            printf("% d “, i");
    }

    printf("\n");
    return;
}