#include <stdio.h>

void paniejanie(void);
void ranowstan(void);

int main(void)
{
  paniejanie();
  paniejanie();
  ranowstan();

  return 0;
}


void paniejanie(void)
{
  printf("Panie Janie!\n");
}

void ranowstan(void)
{
  printf("Rano wstan!\n");
}
