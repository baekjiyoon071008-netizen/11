#include <stdio.h>

int main(void)
{
    char c[2];
    int i[2];
    double d[2];

    char *pc = c;
    int *pi = i;
    double *pd = d;

    printf("증가 전 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("증가 후 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    return 0;
}