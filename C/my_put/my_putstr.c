void  my_putchar(char c)
{
  write(1, &c,  1);
}

void  my_putstr(char *str)
{
  int n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;  
    }
}
int main()
{
  char *str;
  
  str = "Hello World\n";
  my_putstr(str);
  return (0);
}
