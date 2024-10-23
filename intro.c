#include <stdio.h>

int main(void)
{
    int i = 1;

    for (; i <= 100;) {
        printf("%d, ", i);
        i++;
    }
}