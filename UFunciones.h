//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_02_SWAP_UFUNCIONES_H
#define INC_02_SWAP_UFUNCIONES_H

#include <iostream>
using namespace std;

template <typename Tipo>
void intercambio(Tipo &c1,Tipo &c2)
{
  Tipo aux;

  aux = c1;
  c1 = c2;
  c2 = aux;
}

#endif //INC_02_SWAP_UFUNCIONES_H
