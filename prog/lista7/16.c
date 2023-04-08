// 16) Escreva uma função que receba quatro parâmetros, o tamanho de passo, o intervalo
// mínimo, o intervalo máximo e o ponteiro para uma função que será integrada. Exemplo:
// a integral de x2 no intervalo de (0,5) é 41,67.
// Dica a integral contínua: ∫ 𝑓(𝑥)𝑑𝑥
// 𝑏
// 𝑎 pode ser aproximada pelo somatório ∑ 𝑓(𝑥)𝑑𝑥𝑏
// 𝑎 .
#include <stdio.h>
#include <stdlib.h>

double function(double);
double trapezoidal_rule(double a, double b, int n, double (*function)(double));

int main() {
  double a = 0.5; // lower limit of integration
  double b = 41.67; // upper limit of integration 
  int n = 100; // number of subintervals
  
  double integral = trapezoidal_rule(a, b, n, function); // integrate sin(x) using the trapezoidal rule
  printf("The integral of x² from %.2f to %.2f is: %.2f\n", a, b, integral);
  
  return 0;
}

double function(double x) {
  return x*x;
}

double trapezoidal_rule(double a, double b, int n, double (*function)(double)) {
  double h = (b - a) / n;
  double sum = (function(a) + function(b)) / 2.0;

  for (int i = 0; i < n; i++) {
      double x = a + i * h;
      sum += function(x);
  }
    
 return sum * h;
}
