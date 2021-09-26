#include <stdio.h>

int main(void)
{
    int num;
    int* IGS = malloc(sizeof(int) * 1000000);
    int max = -1000000, min = 1000000;

    scanf_s("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf_s("%d", &IGS[i]);
        if (IGS[i] > max)
            max = IGS[i];
        if (IGS[i] < min)
            min = IGS[i];
    }
    printf("%d %d\n", min, max);
    
    return 0;
}