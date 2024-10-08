#include <stdio.h>

int main(void) {
  unsigned long a = 1L; // 8 байт
  long long b = -1LL;   // 8 байт
  if (a > b) {          // Сравнение производится в unsigned long long!
    printf("1 > -1\n");
  } else {
    printf("1 <= -1\n");
  }
  return 0;
}

// test.c: In function 'main':
// test.c:6:9: warning: comparison of integer expressions of different signedness: 'long unsigned int' and 'long long int' [-Wsign-compare]
//     6 |   if (a > b) {          // Оба аргумента конвертируются в unsigned long long!
//       |         ^
// ./a.out
// 1 <= -1
