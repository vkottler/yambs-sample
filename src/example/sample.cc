#include "example/sample.h"

/* third-party */
#include "yambs-sample2/example/sample.h"

namespace Example
{

static void method4(void)
{
    int a = 0;
    for (int i = 0; i < 1000; i++)
    {
        a *= 2;
    }

    (void)a;
}

void method1(void)
{
    int a = 0;
    for (int i = 0; i < 1000; i++)
    {
        a *= 2;
    }
    method4();
    (void)a;

    Example2::method1();
}

void method2(void)
{
    int a = 0;
    for (int i = 0; i < 1000; i++)
    {
        a *= 2;
    }
    method4();
    (void)a;

    Example2::method2();
}

} // namespace Example
