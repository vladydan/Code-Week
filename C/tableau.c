#include "my_putstr.c"
int main()
{
int Tableau[4][4] = {{1, 1, 1, 1},
                     {1, 1, 1, 1},
		     {1, 1, 1, 1},
                     {1, 1, 1, 1}};
}

void  my_putstr (char *str)
{
  int n = 0;

  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
}

void TableauAfficher (char *c) {
  my_putstr(int Tableau);

}

