#include <iostream>
#include "Point.h"
using namespace std;

int main(){
  double x = 0;
  double y = 0;
  Point p = Point(x, y);
  printf("Before Move x: %f, y: %f\n", p.getx(), p.gety());
  p.move(1, 1);

  printf("After Move x: %f, y: %f\n", p.getx(), p.gety());

  return 0;
}