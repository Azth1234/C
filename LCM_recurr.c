#include <stdio.h>

int LCM(int a, int b, int current);
int max(int a, int b);

int main() {
    int a, b;
    printf("enter the 2 numbers: ");
    scanf("%d %d", &a, &b);

    int start = max(a, b);
    int lcm = LCM(a, b, start);

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
int LCM(int a, int b, int current) {
    if (current % a == 0 && current % b == 0){
        return current;
    }
    else{
        return LCM(a, b, current + 1);
    }
}
