#include <stdio.h>
int main() {
int a = 5 + 3 * 5 >= 25 % 2 <= 8;
int b = 5 - 3 * 2 >= 8 + 3 != 5;
int c = a==b;
printf("Result: %d\n", c);
return 0;
}
