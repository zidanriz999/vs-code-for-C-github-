#include<stdio.h>
#include<math.h>

int main() {
    int realNum;
    int j, p = 150, q = 153;
    int a, n, rem, val, sum, i;

    for (realNum = p; realNum <= q; realNum++) {
        a = realNum;
        n = 0;
        sum = 0;
        printf("Number: %d\n", a);

        while (a != 0) {
            a = a / 10;
            n = n + 1;
        }

        printf("Number of digits: %d\n", n);

        a = realNum;
        i = n;

        while (a != 0) {
            rem = a % 10;
            printf("Digit-%d: %d\n", i, rem);
            i--;
            a = a / 10;

            val = pow(rem, n);
            printf("pow(%d, %d): %d\n", rem, n, val);

            sum = sum + val;
        }

        printf("Summation of pow(each digit, total digits): %d\n", sum);

        if (sum == realNum) {
            printf("Armstrong\n");
        } else {
            printf("not Armstrong\n");
        }
    }

    return 0;
}

