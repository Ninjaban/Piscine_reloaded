#include <stdlib.h>

int *ft_range(int min, int max)
{
  int *tab;
  int n;

  n = 0;
  if (min >= max)
    return (NULL);
  if ((tab = malloc(sizeof(int) * (max - min))) == NULL)
    return (NULL);
  while (min < max)
    tab[n++] = min++;
  return (tab);
}
