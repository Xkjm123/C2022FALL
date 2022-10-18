//https://www.acwing.com/blog/content/26434/
#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float dt = b * b - 4 * a * c;
    if (dt < 0 || a == 0) {
        printf("Impossivel calcular");
    }
    else printf("R1 = %.5f\nR2 = %.5f\n", (-b + sqrt(dt)) / (2 * a), (-b - sqrt(dt)) / (2 * a));
    return 0;
}