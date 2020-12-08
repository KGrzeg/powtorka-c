#include <math.h>
#include <stdio.h>

struct Wynik {
  double sin;
  double cos;
  double tg;
};

struct Wynik angles(double angle){
  angle = (angle / 180) * M_PI; //zamiana stopni na radiany

  struct Wynik ret;
  ret.sin = sin(angle);
  ret.cos = cos(angle);
  ret.tg = tan(angle);

  return ret;  
};

int main(int argc, char const *argv[])
{
  const float angle = 30;
  struct Wynik funkcje = angles(angle);

  printf("kat: %lf\nsin: %lf\n cos: %lf\n tg: %lf\n", angle, funkcje.sin, funkcje.cos, funkcje.tg);

  return 0;
}
