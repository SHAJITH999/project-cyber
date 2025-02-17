#include <stdio.h>
int main() {
int a = !(-8);
int b = !(100);
int c = !0;
int d = !0.0;
printf("! -8: %d\n", a);
printf("! 100: %d\n", b);
printf("! 0: %d\n", c);
printf("! 0.0: %d\n", d);
return 0;
}
