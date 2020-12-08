#include <math.h>
#include <stdio.h>

//odkomentuj jedną opcję
#define INPUT_TYPE_DEGREE
// #define INPUT_TYPE_RADIANS

struct Wynik {
  double sin;
  double cos;
  double tg;
};

struct Wynik angles(double angle){
  #ifdef INPUT_TYPE_DEGREE
  angle = (angle / 180) * M_PI; //zamiana stopni na radiany
  #endif

  struct Wynik ret;
  ret.sin = sin(angle);
  ret.cos = cos(angle);
  ret.tg = tan(angle);

  return ret;  
};

int main(int argc, char const *argv[])
{
  #ifdef INPUT_TYPE_DEGREE
  const float angle = 30;
  #else
  const float angle = M_PI/6;
  #endif
  struct Wynik funkcje = angles(angle);

  printf("kat: %lf\nsin: %lf\n cos: %lf\n tg: %lf\n", angle, funkcje.sin, funkcje.cos, funkcje.tg);

  return 0;
}
