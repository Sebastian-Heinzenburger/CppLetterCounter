#include <stdio.h>
#define CHAR_START ' '
#define CHAR_END '~'

unsigned int chars[CHAR_END - CHAR_START];
char *input;

int main(int argc, char **argv) {

  if (argc > 1)
    input = argv[1];
  else
    scanf("%ms", &input);

  for (char *c = input; *c != '\0' && *c != '\n'; c++) {
    chars[*c - CHAR_START]++;
  }

  for (char c = CHAR_START; c < CHAR_END; c++) {
    if (chars[c - CHAR_START] != 0)
      printf("%c: %d\n", c, chars[c - CHAR_START]);
  }
}
