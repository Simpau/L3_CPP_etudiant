#include "Location.hpp"
#include "Client.hpp"
#include "Produit.hpp"
#include <iostream>

int main(){
  Location l(0,2);
  l.afficherLocation();

  Client c(0,"toto");
  c.afficherClient();

  Produit p(0,"raquette");
  p.afficherProduit();

  return 0;
}
