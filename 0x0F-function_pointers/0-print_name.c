#include <stdio.h>

char *fxname(void *fx) {
  if (fx == fprintf) return "fprintf";
  if (fx == gets) return "gets";
  if (fx == scanf) return "scanf";
  return "(unknown)";
}

int main(void) {
  void (*fx)(void);
  fx = gets; printf("name: %s\n", fxname(fx));
  fx = putchar; printf("name: %s\n", fxname(fx));
  return 0;
}
