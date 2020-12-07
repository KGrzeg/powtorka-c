#include <stdio.h>

const double Ts = 0.1; //okres próbkowania
const double A = 2; //amplituda
#define samples 10 //ilość próbek

void integral(double* signal, double* ret){
  for (int i = 0; i < samples; i++)
    ret[i] = signal[i] * Ts;  
}

int main(int argc, char const *argv[])
{
  double stepSignal[samples] = {0,A,A,A,A,A,A,A,A,A};
  double inte[samples];

  integral(stepSignal, inte);

  printf("Ilosc probek: %d, Okres probkowania: %lf, Amplituda: %lf", samples, Ts, A);
  printf("Funkcja skokowa: [");
  for (int i = 0; i < samples; i++)
  {
    printf("%lf ", stepSignal[i]);
  }
  printf("]\n");
  

  printf("Calka: [");
  for (int i = 0; i < samples; i++)
  {
    printf("%lf ", inte[i]);
  }
  printf("]\n");

  return 0;
}
