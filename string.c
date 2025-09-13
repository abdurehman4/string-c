#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *string_t;

int countString(string_t string) {
  int num = 0;
  while (string[num++] != 0)
    ;
  return num - 1;
}

string_t getLine() {
  string_t string;
  char buffer[256];
  fgets(buffer, 256, stdin);
  buffer[strcspn(buffer, "\n")] = 0;
  int len = countString(buffer);
  char temp_str[len + 1];
  for (int i = 0; i < len; i++) {
    temp_str[i] = buffer[i];
  }
  temp_str[len] = 0;
  string = malloc(sizeof(temp_str));
  strcpy(string, temp_str);
  return string;
}

string_t concat(string_t str1, string_t str2) {
  string_t combined_str;
  combined_str = (string_t)malloc(sizeof(str1));
  strcpy(combined_str, str1);
  strncat(combined_str, str2, strlen(str2));
  return combined_str;
}

void setCharAt(int position, string_t *string, char final_char) {
  string_t temp_str;
  temp_str = (string_t)malloc(sizeof(*string));
  strcpy(temp_str, *string);
  temp_str[position] = final_char;
  *string = temp_str;
}

int main() {
  string_t greeting = "Bello";
  setCharAt(0, &greeting, 'H');
  printf("Original : %s\n", greeting);

  free(greeting);
  return 0;
}
