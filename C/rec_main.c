#include <stdio.h>

int main(int argc, char **argv) {
  static int count = 0;

  if (argc > 0) {
    printf("%d-th argument: %s\n", count++, argv[0]);
    main(argc - 1, argv + 1);
  }

  return 0;
}
