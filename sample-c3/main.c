#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int sumary(int *ary, int arylen)
{
  int _sum = 0;
  for (int i = 0; i < arylen; i++)
  {
    _sum = _sum + ary[i];
    // printf("%d\n", ary[i]);
  }

  return _sum;
}

int main()
{
  printf("HELLO\n");
  printf("HELL\n");
  printf("H2ELL\n");
  printf("aa\n");

  bool aaa = true;
  char abc[16] = "abc";
  if (aaa)
  {
    printf("%s\n", abc);
  }

  char *abc2 = &abc;
  printf("%s\n", abc2);
  // printf("%s\n", &abc2);
  // printf("%s\n", *abc2);
  // printf("%s\n", &abc);
  

  int ary[5] = {1,1,2,2,3};
  int arylen = 5;
  int res = sumary(&ary, arylen);
  printf("%d\n", res);

  return 0;
}

