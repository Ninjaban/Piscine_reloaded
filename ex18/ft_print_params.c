void ft_putchar(char c);

void ft_putstr(char *str)
{
  int n;

  n = 0;
  while (str[n])
    ft_putchar(str[n++]);
}

int main(int ac, char **av)
{
  int n;

  n = 1;
  while (n < ac)
    {
      ft_putstr(av[n++]);
      ft_putchar('\n');
    }
  return (0);
}
