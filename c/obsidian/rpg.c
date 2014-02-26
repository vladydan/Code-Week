#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"
#include <time.h>

int      main(void)
{
  int   i, j, a, b, min, max;
  char  **array;

  array = (char**)malloc(9 * sizeof(char*));
  i = 0;
  while (i < 9)
    {
      array[i] = (char*)malloc(sizeof(char) * 9);
      i++;
    }
  
  i = 0;
  j = 0;

  randomArray(max, min, array);
  printArray(max, min, array);
  free(array[i]);
  free(array[j]);
  return (0);
}
