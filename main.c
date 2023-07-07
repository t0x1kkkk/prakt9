#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
    int d = y - x;
    int k = (int) sqrt(2 * d);
    while (k * (k + 1) < 2 * d) {
        k++;
    }
    if ((k * (k + 1) / 2 - d) % 2 == 0) {
        return k;
    } else if (k % 2 == 0) {
        return k + 1;
    } else {
        return k + 2;
    }
}

int main() {
    int x, y;
    printf("Введіть значення x та y: ");
    scanf("%d %d", &x, &y);
    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}
