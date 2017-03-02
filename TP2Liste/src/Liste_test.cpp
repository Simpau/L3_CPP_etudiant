#include "Liste.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupListe) { };
TEST(GroupListe, test_Liste_1) { // premier test unitaire
  Noeud *node;
  node = new Noeud{1,node};
  CHECK_EQUAL(1, node->valeur);
}
// TEST(GroupDoubler, test_ajouter_devant_2){ // deuxième test unitaire
//   int result = doubler(0);
//   CHECK_EQUAL(0, result);
// }
