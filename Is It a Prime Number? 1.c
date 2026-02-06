#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{

    int N, i, c = 0;

    scanf("%d", &N);

    if (N <= 1)

    {

        printf("Not Prime");

    }

    else

    {

        for (i = 2; i * i <= N; i++)

        {

            if (N % i == 0)

            {

                c = 1;

                break;

            }

        }

        if (c == 0)

            printf("Prime");

        else

            printf("Not Prime");

    }

    return 0;

}
