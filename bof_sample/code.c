#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
  char word[5];
  strcpy(word, argv[1]);

  printf("%s\n", word);

  return 0;
}

