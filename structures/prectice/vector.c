#include <stdio.h>

struct vactor
{
    int x;
    int y;
};

void vactorFunc(struct vactor v1, struct vactor v2, struct vactor sum);

int main()
{
    struct vactor v1 = {7, 10};
    struct vactor v2 = {5, 7};
    struct vactor sum = {0};

    vactorFunc(v1, v2, sum);

    return 0;
}

void vactorFunc(struct vactor v1, struct vactor v2, struct vactor sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);
}
