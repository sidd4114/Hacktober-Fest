
#include <stdio.h>
void myFunction(float a);
int main() {
    myFunction(5.5);
    return 0;
}
void myFunction(float a) {
    printf("%f\n", a);
}