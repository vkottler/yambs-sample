/* toolchain */
#include <iostream>

/* internal */
#include "example/sample.h"

int test1(int a, int b)
{
    return a + b;
}

// void trickery(char *ptr) { free(ptr); }

int main(void)
{
    std::cout << test1(1, 2) << std::endl;

    Example::method1();
    Example::method3();

    float a = 0.0f;
    for (int i = 0; i < 1000; i++)
    {
        a *= 2.0f;
        a /= 2.0f;
    }

    std::cout << a << std::endl;

    const int len = 10;
    char *x = (char *)malloc(len * sizeof(char *));
    for (int i = 0; i < len; i++)
    {
        x[i] = 'x';
    }
    // trickery(x);
    std::cout << x[5] << std::endl;
    free(x);

    return 0;
}
