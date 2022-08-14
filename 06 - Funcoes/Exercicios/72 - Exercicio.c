#include <stdio.h>

struct Vetor
{
    float x, y, z;
};

void soma(struct Vetor* v1, struct Vetor* v2, struct Vetor* res)
{
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;
}

int main()
{
    struct Vetor v1, v2, res;

    v1.x = 1;
    v1.y = 2;
    v1.z = 3;
    v2.x = 4;
    v2.y = 5;
    v2.z = 6;

    soma(&v1, &v2, &res);
    printf("Soma dos vetores y:%.2f, y:%.2f, z:%.2f\n", res.x, res.y, res.z);

    return 0;
}