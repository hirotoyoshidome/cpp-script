#include <iostream>
#include<string>
#include <cstring>

#define N 256

std::string html = "";

std::string fileName = "./sample.md";
FILE* f = NULL;

/* read file. */
void init()
{
  f = fopen(fileName.data(), "r");
  if (f == NULL)
  {
    std::cout << "ERROR: can not read file." << std::endl;
    exit(1);
  }
}

/* convert string from char array. */
std::string convertToString(char* a, int size)
{
  int i;
  std::string s = "";
  for (i = 0; i < size; i++) {
    s = s + a[i];
  }
  return s;
}

/* main. */
int main()
{
  init();

  char str[N];
  while(fgets(str, N, f) != NULL) {
    // std::cout << strlen(str) << std::endl;
    int len = strlen(str);
    std::string s = convertToString(str, len - 1);
    // std::cout << s << std::endl;

    if (str[0] == '#' && str[1] == ' ')
    {
      // Header1
      html = html + "<h1>" + s.substr(2, len) + "</h1>\n";
      // printf("%s", str);
    }
    else if (str[0] == '#' && str[1] == '#' && str[2] == ' ')
    {
      // Header2
      html = html + "<h2>" + s.substr(3, len) + "</h2>\n";
      // printf("%s", str);
    }
    else if (str[0] == '#' && str[1] == '#' && str[2] == '#' && str[3] == ' ')
    {
      // Header3
      html = html + "<h3>" + s.substr(4, len) + "</h3>\n";
      // printf("%s", str);
    }
    else if (str[0] == '*' && str[1] == ' ')
    {
      // ul
      html = html + "<li>" + s.substr(2, len) + "</li>\n";
      // printf("%s", str);
    }
  }

  html = "<!DOCTYPE html>\n<html>\n<head></head>\n<body>\n" + html + "\n</body>\n</html>";

  std::cout << html << std::endl;
  return 0;
}
