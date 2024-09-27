#include <stdio.h>
#include <stdarg.h>

void va_arg_test(int first_arg, ...) {
  printf("1st = %d\n", first_arg);

  va_list argptr;
  va_start(argptr, first_arg);

  char *second_arg;
  second_arg = va_arg(argptr, char*);
  printf("2nd = %s\n", second_arg);

  long long int third_arg;
  third_arg = va_arg(argptr, long long int);
  printf("3rd = %lld\n", third_arg);

  va_end(argptr);
}

int main(void) {
  va_arg_test(1, "Hello!", 1LL << 50);
  return 0;
}
