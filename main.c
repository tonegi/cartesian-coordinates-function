#include <stdio.h>
#include <math.h>

double dist(double x, double y);

int main(void) {
  double x = 0,y = 0;
  printf("Enter the value of X: ");
    scanf("%lf", &x);
  printf("Enter the value of Y: ");
    scanf("%lf", &y);
  printf("--------------------------------------------\n");
  printf("The distance between the two points is: %g", dist(x, y)); 
  return 0;
}

double dist(double x, double y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}
