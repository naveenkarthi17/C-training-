#include <stdio.h>

#include <math.h>

int main() {

    int N, t, d;

    int c = 0;

    long long s = 0;

    scanf("%d", &N);

    t = N;

    if (t == 0) {

        c = 1;

    } else {

        while (t != 0) {

            c++;

            t /= 10;

        }

    }

    t = N;

    while (t != 0) {

        d = t % 10;

        s += pow(d , c);

        t /= 10;

    }

    if (N == 0)

        s = 0;

    if (s == N)

        printf("true");

    else

        printf("false");

    return 0;

}
