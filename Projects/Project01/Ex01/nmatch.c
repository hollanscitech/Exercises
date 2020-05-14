#include <stdio.h>

int nmatch(char *s1, char *s2) {
  //deals with "example" "" || "" ""
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
  //deals with s1 being empty && *s2 not being a star && s2 not being empty
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

void test(void) {
  if (nmatch("hello", "hello") == 0) {
    printf("0 Match (A)\n");
  }
  if (nmatch("hello", "h") == 0) {
    printf("0 Match (B)\n");
  }
  if (nmatch("hello", "hell") == 0) {
    printf("0 Match (C)\n");
  }
  if (nmatch("", " ") == 0) {
    printf("0 Match (D)\n");
  }
  if (nmatch("", "") == 0) {
    printf("0 Match (E)\n");
  }
  if (nmatch(" ", "*") == 0) {
    printf("0 Match (F)\n");
  }
  if (nmatch("hello", "*") == 0) {
    printf("0 Match (G)\n");
  }
  if (nmatch("hello", "h") == 0) {
    printf("0 Match (H)\n");
  }
  if (nmatch("hello", "he") == 0) {
    printf("0 Match (I)\n");
  }
  if (nmatch("hello", "h*") == 0) {
    printf("0 Match (J)\n");
  }
  if (nmatch("hello", "hlo") == 0) {
    printf("0 Match (K)\n");
  }
  if (nmatch("hello", "hell*") == 0) {
    printf("0 Match (L)\n");
  }
  if (nmatch("hello", "hello*") == 0) {
    printf("0 Match (M)\n");
  }
  if (nmatch("hello", "he*") == 0) {
    printf("0 Match (N)\n");
  }
  if (nmatch("hello", "lo") == 0) {
    printf("0 Match (O)\n");
  }
  if (nmatch("abcbd", "*b*") == 0) {
    printf("0 Match (P)\n");
  }
  if (nmatch("abc", "a**") == 0) {
    printf("0 Match (Q)\n");
  }
  if (nmatch("abc", "abc") == 0) {
    printf("0 Match (R)\n");
  }
  if (nmatch("abc", "ab*") == 0) {
    printf("0 Match (S)\n");
  }
  if (nmatch("abc", "abc*") == 0) {
    printf("0 Match (T)\n");
  }
  if (nmatch("abc", "*") == 0) {
    printf("0 Match (U)\n");
  }
  if (nmatch("abc", "**") == 0) {
    printf("0 Match (V)\n");
  }
  if (nmatch("abc", "***") == 0) {
    printf("0 Match (W)\n");
  }
  if (nmatch("abc", "**a") == 0) {
    printf("0 Match (X)\n");
  }
  if (nmatch("abc", "*a*") == 0) {
    printf("0 Match (Y)\n");
  }
  if (nmatch("abc", "cba") == 0) {
    printf("0 Match (Z)\n");
  }
}

int main(int argc, char *argv[]) {
  test();
  if (argc == 3) {
    char *s1 = argv[1];
    char *s2 = argv[2];
    int output = nmatch(s1, s2);
    printf("%d\n", output);
  }
}
