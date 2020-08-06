#include <stdio.h>

int main(void)
{
    unsigned int num, arrnum[1000000];
    unsigned int max = -1000000, min = 1000000;

    scanf_s("%u", &num);

    for (int i = 0; i < num; i++) {
        scanf_s("%u", &arrnum[i]);
        if (arrnum[i] > max)
            max = arrnum[i];
        if (arrnum[i] < min)
            min = arrnum[i];
    }
    printf("%u %u\n", min, max);

    return 0;
}