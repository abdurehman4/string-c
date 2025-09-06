#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char * string_t;

int countString(char *string)
{
  int num=0;
  char c;
  while (c = string[num++] != 0);
  return num-1;
}


void getLine(char* string)
{
  char buffer[256];
  fgets(buffer, 256, stdin);
  buffer[strcspn(buffer, "\n")] = 0;
  int len = countString(buffer);
  printf("Provided chars: %d\n", len); 

  char temp_str[len];
  for (int i=0; i<len; i++)
  {
    temp_str[i] = buffer[i];
    printf("%d : %c\n",i, temp_str[i]);
  }
  // temp_str[len+1] = 0;
  printf("%s\n", temp_str);
}

int main(){
  string_t sentence = "Hello World!"; // Direct Initialization
  string_t empty_init;
  empty_init = "Abdur Rehman Imran";

  string_t input;

  getLine(input);
  return 0;
}
