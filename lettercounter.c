#include <stdio.h>

// range of ASCII characters our program recognizes
#define CHAR_START ' '
#define CHAR_END '~'

unsigned int chars[CHAR_END - CHAR_START];
char *input;

int main(int argc, char **argv) {
  // the program can read data as commandline arguments as well as from stdin
  if (argc > 1)
    input = argv[1];
  else
    scanf("%m[^\n]s", &input);

  // increments the value in chars[] at the character index
  for (char *c = input; *c != '\0' && *c != '\n'; c++) {
    chars[*c - CHAR_START]++;
  }

  // prints the count of each character that was encountered
  for (char c = CHAR_START; c < CHAR_END; c++) {
    if (chars[c - CHAR_START] != 0)
      printf("%c [0x%X]: %d\n", c, c, chars[c - CHAR_START]);
  }
}
