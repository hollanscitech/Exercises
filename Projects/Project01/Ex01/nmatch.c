#include <stdio.h>
#include <string.h>

//if s2 has no star chars
int nmatch1(char *s1, char *s2) {
  int i = 0;
  int x = 0;
  int counter = 0;
  while (s2[x] != '\0') {
    i = 0;
    while (s1[i] != '\0') {
      if (s2[x] == s1[i]) {
	counter++;
	x++;
      }
      i++;
    }
    x++;
  }
  return counter;
}
 
//when s1 is 0 and s2 is only a star char
int nmatch2(char *s1, char *s2) {
  if (*s1 == 0 && *s2 == 0) {
    return 1;
  }
  if (*s1 == 0 && strlen(s2) == 1 && *s2 == '*') {
  return 1;
  }
  return 0;
}

//if s2 contains 2 or more star chars
int nmatch3(char *s1, char *s2) {
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
int nmatch4(char *s1, char *s2) {
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

void test(void) {
  if (nmatch1("", " ") + nmatch2("", " ") + nmatch3("", " ") + nmatch4("", " ") == 0) {
    printf("No Match (A)");
  }
  if (nmatch1("", "") + nmatch2("", "") + nmatch3("", "") + nmatch4("", "") == 0) {
    printf("No Match (B)");
  }
  if (nmatch1(" ", "*") + nmatch2(" ", "*") + nmatch3(" ", "*") + nmatch4(" ", "*") == 0) {
    printf("No Match (C)");
  }
  if (nmatch1("hello", "*") + nmatch2("hello", "*") + nmatch3("hello", "*") + nmatch4("hello", "*") == 0) {
    printf("No Match (D)");
  }
  if (nmatch1("hello", "h") + nmatch2("hello", "h") + nmatch3("hello", "h") + nmatch4("hello", "h") == 0) {
    printf("No Match (E)");
  }
  if (nmatch1("hello", "ho") + nmatch2("hello", "ho") + nmatch3("hello", "ho") + nmatch4("hello", "ho") == 0) {
    printf("No Match (F)");
  }
  if (nmatch1("hello", "h*") + nmatch2("hello", "h*") + nmatch3("hello", "h*") + nmatch4("hello", "h*") == 0) {
    printf("No Match (G)");
  }
  if (nmatch1("hello", "hlo") + nmatch2("hello", "hlo") + nmatch3("hello", "hlo") + nmatch4("hello", "hlo") == 0) {
    printf("No Match (H)");
  }
  if (nmatch1("hello", "hello") + nmatch2("hello", "hello") + nmatch3("hello", "hello") + nmatch4("hello", "hello") == 0) {
    printf("No Match (I)");
  }
  if (nmatch1("hello", "hell*") + nmatch2("hello", "hell*") + nmatch3("hello", "hell*") + nmatch4("hello", "hell*") == 0) {
    printf("No Match (J)");
  }
  if (nmatch1("hello", "hello*") + nmatch2("hello", "hello*") + nmatch3("hello", "hello*") + nmatch4("hello", "hello*") == 0) {
    printf("No Match (K)");
  }
  if (nmatch1("hello", "he*") + nmatch2("hello", "he*") + nmatch3("hello", "he*") + nmatch4("hello", "he*") == 0) {
    printf("No Match (L)");
  }
  if (nmatch1("hello", "lo") + nmatch2("hello", "lo") + nmatch3("hello", "lo") + nmatch4("hello", "lo") == 0) {
    printf("No Match (M)");
  }
}

int main(int argc, char *argv[]) {
  test();
  if (argc == 3) {
    int count1 = nmatch1(argv[1], argv[2]);
    int count2 = nmatch2(argv[1], argv[2]);
    int count3 = nmatch3(argv[1], argv[2]);
    int count4 = nmatch4(argv[1], argv[2]);
    int total = count1 + count2 + count3 + count4;
    printf("%d\n", total);
  }
  return 0;
}

/*int main(int argc, char *argv[]) {
  if (argc == 3) {
    int count = nmatch2(argv[1], argv[2]) + nmatch3(argv[1], argv[2]) + nmatch4(argv[1], argv[2]) + nmatch5(argv[1], argv[2]);
    printf("%d\n", count);
  }
  return 0;
  }*/
