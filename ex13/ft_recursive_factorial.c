int ft_factorial(int n, int res, int nb)
{
  if (n < nb)
    return (ft_factorial(n + 1, res * (n + 1), nb));
  return (res);
}

int ft_recursive_factorial(int nb)
{
  if (nb < 0)
    return (0);
  return (ft_factorial(0, 1, nb));
}

#include <stdio.h>

int main()
{
  int nb = ft_recursive_factorial(5);
  printf("%d\n", nb);
}
