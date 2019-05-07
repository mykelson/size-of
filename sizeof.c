#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    printf("bool size is %lu\n", sizeof(bool));
    printf("char size is %lu\n", sizeof(char));
    printf("double size is %lu\n", sizeof(double));
    printf("float size is %lu\n", sizeof(float));
    printf("int size is %lu\n", sizeof(int));
    printf("long long size is %lu\n", sizeof(long long));
    printf("string size is %lu\n", sizeof(char *));
}