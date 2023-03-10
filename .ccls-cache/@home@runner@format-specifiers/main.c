#include <stdio.h>
#define PI 3.14

int main(void) {
  printf("Learning about format specifiers\n");

float a= 7.123456;
  printf("%7.4f\n",a); //7 CHAR SPACE AND 4 DECIMAL POINTS
  printf("it %18.2f jp\n",a);
  printf("it %-18.2f jp\n",a);

  /* c for char, d for int, f for floating pt no, l for long, int lf for double, LF for long double */
  //const can be declare either directly or using (hash defined preprocessor)

  const con= 10;
  printf("%f \n",PI);

  float bb= 1.34455;
  printf("%f \n",bb);
  printf("%d",bb);

  
  return 0;
}