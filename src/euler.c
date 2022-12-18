#include <stdlib.h>
#include <stdio.h>
#include "euler.h"

int nombre_eulerien_rec(int* perm, int n, int k, int *choix, int nb_choix, int pos);

// Indique si une permutation est valide
int permutation_valide(int *perm, int n, int k){
  int i, plus_grand = 0;

  // Parcours du tableau
  for(i = 1; i < n; i++){
    plus_grand += (perm[i] > perm[i-1]);
  }

  return (plus_grand == k);
}

// Renvoie le nombre de permutations
int nombre_eulerien(int n, int k){
  int i, perm[n], choix[n];

  for(i = 0; i < n; i++){
    choix[i] = 1;
  }

  return nombre_eulerien_rec(perm, n, k, choix, n, 0);
}

// Compte le nombre de permutaion valide par backtracking
int nombre_eulerien_rec(int* perm, int n, int k, int *choix, int nb_choix, int pos){
  int i, nb_perm = 0;

  // Permutation pleine, on vérifie
  if(nb_choix == 0){
    return permutation_valide(perm, n, k);
  }

  for(i = 0; i < n; i++){
    if(choix[i]){
      choix[i] = 0;
      perm[pos] = i;
      nb_perm += nombre_eulerien_rec(perm, n, k, choix, nb_choix-1, pos+1);
      choix[i] = 1;
    }
  }

  return nb_perm;
}
