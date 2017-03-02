 #ifndef LISTE_HPP_
 #define LISTE_HPP_
struct Noeud{
  int valeur;
  Noeud *suivant;
};

struct Liste{
  Noeud *tete;

  Liste(){
    tete = nullptr;
  }

  void ajouterDevant(int valeur){
    tete = new Noeud{valeur, tete};
  }

  // int getTaille(){
  //   int taille=0;
  //   while (tete != NULL){
  //     taille ++;
  //     tete = tete->suivant;
  //   }
  //   return taille;
  // }

  // int getElement(int indice){return 0;}
  
};
 #endif
