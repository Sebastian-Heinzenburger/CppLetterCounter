#include <iostream>

int getCount(char* string, char _c) {
    char* t;
    int count = 0;
    for (t = string; (*t != '\0') && (*t != '\n'); t++) {
        if (*t == _c) { count++; }
    }
    return count;
}

bool contains(char* charArray, char* _c) {
    char* t;
    for (t = charArray; (*t != '\0') && (*t != '\n'); t++) {
        if (*t == *_c) {
            return true;
        }
    }
    return false;
}

int main(int argc, char* argv[])
{
    char alreadyCounted[100];
    char string[100];
    int countOffset = 0;

    if (argc > 1) {
        for (int i = 0; i < 100; i++) {
            string[i] = argv[1][i];
        }
    }
    else {
        printf("input string: ");
	fgets(string, 100, stdin);
    }

    char* t;
    for (t = string; (*t != '\0') && (*t != '\n'); t++) {
        if (!contains(alreadyCounted, t)) {
            printf("%c [0x%X]: %d\n", *t, *t, getCount(string, *t));
            alreadyCounted[countOffset] = *t;
            countOffset++;
        }
    }

    getchar();
}
