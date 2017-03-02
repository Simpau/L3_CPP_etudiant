#include "Point.hpp"
#include "Couleur.hpp"
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include <iostream>

int main(){
  Couleur c;
  c._r = 1;
  c._g = 0;
  c._b = 0;

  Point p0;
  p0._x = 0;
  p0._y = 0;

  Point p1;
  p1._x = 100;
  p1._y = 200;
  

  Ligne l(c,p0,p1);
  PolygoneRegulier p(c,p1,50,5);
  l.afficher();
  p.afficher();
  return 0;
  
}
