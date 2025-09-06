#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char * string_t;

int countString(char *string)
{
  int num=0;
  while (string[num++] != 0);
  return num-1;
}


string_t getLine()
{
  string_t string;
  char buffer[256];
  fgets(buffer, 256, stdin);
  buffer[strcspn(buffer, "\n")] = 0;
  int len = countString(buffer);
  char temp_str[len+1];
  for (int i=0; i<len; i++)
  {
    temp_str[i] = buffer[i];
  }
  temp_str[len] = 0;
  string = malloc(sizeof(temp_str));
  strcpy(string, temp_str);
  return string;
}

int main(){
  string_t input;

  input = getLine();
  printf("%s\n", input);
  return 0;
}
