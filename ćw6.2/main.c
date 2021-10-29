#include <stdio.h>

void okrzyk(void);
int main(void)
{
  okrzyk();
  okrzyk();
  okrzyk();
  printf("\n");
  okrzyk();
  okrzyk();
  printf("\n");
  okrzyk();
  printf("\n");

  return 0;
}

void okrzyk(void)
{
  printf("Usmiech!");
}
