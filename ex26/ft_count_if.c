#include <stdlib.h>

int ft_count_if(char **tab, int (*f)(char *))
{
  int n;
  int total;

  n = 0;
  total = 0;
  if (tab == NULL)
    return (0);
  while (tab[n] != NULL)
    if (f(tab[n++]) == 1)
      total = total + 1;
  return (total);
}
