#include <stdio.h>

long silnia(long n){
  long ret = 1;
  while(n > 1){
    ret *= n;
    --n;
  }

  return ret;
}

int main(int argc, char const *argv[])
{
  printf("%ld! = %ld\n", 5, silnia(5));
  printf("%ld! = %ld\n", 8, silnia(8));
  printf("%ld! = %ld\n", 11, silnia(11));

  return 0;
}
