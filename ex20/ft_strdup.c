#include <stdlib.h>

int ft_strlen(char *str)
{
  int n;

  n = 0;
  while (str[n])
    n = n + 1;
  return (n);
}

char *ft_strdup(char *src)
{
  char *str;
  int n;

  n = -1;
  if ((str = malloc(ft_strlen(src) + 1)) == NULL)
    return (NULL);
  while (src[++n])
    str[n] = src[n];
  str[n] = '\0';
  return (str);
}
