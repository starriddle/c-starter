#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n");
    printf("字节数\t:类型\n");
    printf("\n");
    printf("%ld\t:char\n", sizeof(char));
    printf("%ld\t:short\n", sizeof(short));
    printf("%ld\t:int\n", sizeof(int));
    printf("%ld\t:long (int)\n", sizeof(long));
    printf("%ld\t:long long (int)\n", sizeof(long long));
    printf("\n");
    printf("%ld\t:float\n", sizeof(float));
    printf("%ld\t:double\n", sizeof(double));
    printf("%ld\t:long double\n", sizeof(long double));
    printf("\n");

    return 0;
}
