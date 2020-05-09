#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//if s2 has no star chars
int nmatch2(char *s1, char *s2) {
  int i = 0;
  int counter = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] == s2[i]) {
      counter++;
    }
    i++;
  }
  return counter;
}

//when s1 is 0 and s2 is only a star char
int nmatch3(char *s1, char *s2) {
  if (*s1 == 0 && *s2 == 0) {
    return 1;
  }
  if (*s1 == 0 && strlen(s2) == 1 && *s2 == '*') {
  return 1;
  }
  return 0;
}

//if s2 contains 2 or more star chars
int nmatch4(char *s1, char *s2) {
  int i = 0;
  int counter = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s2[i] == '*' && (s2[i + 1] || s2[i - 1]) == (s1[i + 1] || s1[i - 1])) {
      counter++;
    }
    i++;
  }
  return counter;
}

//if s2 contains 1 star   
int nmatch5(char *s1, char *s2) {
  int i = 0;
  int counter = 0;
  int len1 = strlen(s1);
  while (s1[i] != '\0') {
    if (s1[i] == ' ') {
      counter++;
    }
    i++;
  }
  if (len1 > counter && strlen(s2) == 1 && *s2 == '*') {
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc == 3) {
    int count = nmatch2(argv[1], argv[2]) + nmatch3(argv[1], argv[2]) + nmatch4(argv[1], argv[2]) + nmatch5(argv[1], argv[2]);
    printf("%d\n", count);
  }
  return 0;
}
