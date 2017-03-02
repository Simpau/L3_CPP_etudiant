#include "PolygoneRegulier.hpp"
#include <iostream>
#include <cmath>

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur,
				   const Point & centre,
				   int rayon, int nbCotes):
  FigureGeometrique(couleur), _nbPoints(nbCotes){
  double teta;
  _points = new Point[_nbPoints];
  for (int i = 0 ; i <nbCotes ; i++){
    teta = double(i)*((2.0*M_PI)/double(nbCotes));
    _points[i]._x = centre._x+rayon*cos(teta);
    _points[i]._y = centre._y+rayon*sin(teta);
  }

}

void PolygoneRegulier::afficher() const{
  std::cout << "PolynomeRegulier "<<  _couleur._r << "_" << _couleur._g << "_"
	    << _couleur._b << " " <<std::endl;
  for(int i = 0 ; i<_nbPoints ; i++){
      std::cout<< _points[i]._x << "_" << _points[i]._y << " " <<std::endl;
    }
  
}

