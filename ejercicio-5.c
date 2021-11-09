#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cuadratica(double a, double b, double c) {
  double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

  return r1;

}

int main(int argc, char const *argv[]) {

printf("%f\n", cuadratica(1, 2, 3) );
}
