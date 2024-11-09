#include <stdio.h>

int main() {
    int t, b, p, f, h, c, res;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        printf("Enter bun - beef - chicken: ");
        scanf("%d %d %d", &b, &p, &f);
        printf("Enter per piece ham - chicken burger price: ");
        scanf("%d %d", &h, &c);
        int burger = b / 2;  // Maximum burgers we can make with available buns
        res = 0;
        if (burger > (p + f)) {
            // If we can make all available beef and chicken burgers
            res = (p * h) + (f * c);
        } else {
            if (h > c) {
                // Prioritize hamburgers if they have a higher price
                if (burger > p) {
                    res += p * h;
                    burger -= p;       // Remaining capacity for chicken burgers
                    res += burger * c; // Use remaining buns for chicken burgers
                } else {
                    res += burger * h; // All buns used for hamburgers
                }
            } else {
                // Prioritize chicken burgers if they have a higher price
                if (burger > f) {
                    res += f * c;
                    burger -= f;       // Remaining capacity for hamburgers
                    res += burger * h; // Use remaining buns for hamburgers
                } else {
                    res += burger * c; // All buns used for chicken burgers
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
