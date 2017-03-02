#include "Couleur.hpp"
#ifndef FIGUREGEOMETRIQUE_HPP_
#define FIGUREGEOMETRIQUE_HPP_

class FigureGeometrique{
 protected:
  Couleur _couleur;

 public:
  FigureGeometrique(const Couleur & couleur);
  const Couleur & getCouleur() const;
  
};

#endif
