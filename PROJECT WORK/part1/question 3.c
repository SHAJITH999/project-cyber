#include <stdio.h>
int main() {
int a = 10 && 8;
int b = 0 && 8;
int c = 0 && 0;
int d = 8 && 0;
printf("10 && 8: %d\n", a);
printf("0 && 8: %d\n", b);
printf("0 && 0: %d\n", c);
printf("8 && 0: %d\n", d);
return 0;
}
