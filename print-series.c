WAP to print the series as 1 1 2 3 5 8 13 ..........n, where n is given by user.
#include <stdio.h>
int main()
{
  int i, n;
  int t1 = 1, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i)
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}
