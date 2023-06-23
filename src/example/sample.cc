#include "example/sample.h"

namespace Example {

static void method4(void) {
  int a = 0;
  for (int i = 0; i < 1000; i++) {
    a *= 2;
  }
}

void method1(void) {
  int a = 0;
  for (int i = 0; i < 1000; i++) {
    a *= 2;
  }
  method4();
}

void method2(void) {
  int a = 0;
  for (int i = 0; i < 1000; i++) {
    a *= 2;
  }
  method4();
}

} // namespace Example
