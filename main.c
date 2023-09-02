#include <stdio.h>
#include <stdlib.h>

#include "a.h"
#include "b.h"

int main(void)
{
    apple *a = (apple *) malloc(sizeof(apple));
    banana *b = (banana *) malloc(sizeof(banana));

    a->x = 1;
    a->banana = b;

    b->y = 'Q';
    b->apple = a;

    printf("a address: %p\n", a);
    printf("b address: %p\n", b);

    printf("------\n");

    printf("a->x: %d\n", a->x);
    printf("a->banana: %p\n", (a->banana));
    printf("b->y: %c\n", b->y);
    printf("b->apple: %p\n", (b->apple));

    free(a);
    free(b);

    return 0;
}
