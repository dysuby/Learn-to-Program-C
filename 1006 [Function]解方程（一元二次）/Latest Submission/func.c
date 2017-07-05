 #include <math.h>
int getRoots(double a, double b, double c, double *pRootOne, double *pRootTwo) {
  double delta;
  delta = b * b - 4 * a * c;
  if (delta < 0) {
    return 0;
  } else {
    *pRootOne = (-b + sqrt(delta)) / (2 * a);
    *pRootTwo = (-b - sqrt(delta)) / (2 * a);
    return 1;
  }
}