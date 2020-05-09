#include <stdio.h>

int nmatch(char *s1, char *s2) {
  if (*s2 == '\0') {
    if(*s1 != '\0') {
      return 0;
    }
    else {
      return 1;
    }
  }
  if (*s2 == '*') {
    char *rest = s1;
    int count = 0;
    while (*rest != '\0') {
      count = count + nmatch(rest, s2 + 1);
      rest++;
    }
    count = count + nmatch(rest, s2 + 1);
    return count;
  }
  if (*s1 == '\0') {
    return 0;
  }
  if (*s2 == *s1) {
    return nmatch(s1 + 1, s2 + 1);
  }
  else {
    return 0;
  }
}

int main(void) {
  char *s1 = "hello";
  char *s2 = "h";
  int output = nmatch(s1, s2);
  printf("%d\n", output);
}
