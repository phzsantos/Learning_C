#include <stdio.h>

struct Ponto
{
    int x, y;
};

int dentro_ret(struct Ponto* v1, struct Ponto* v2, struct Ponto* p)
{
    if (p->x >= v1->x && p->y >= v1->y && p->x <= v2->x && p->y <= v2->y)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int resultado;
    struct Ponto v1, v2, p;

    v1.x = 2;
    v1.y = 2;
    v2.x = 4;
    v2.y = 4;
    p.x = 2;
    p.y = 2;

    resultado = 0;
    resultado = dentro_ret(&v1, &v2, &p);

    if (resultado)
    {
        printf("Dentro\n");
    }
    else
    {
        printf("Fora\n");
    }

    return 0;
}