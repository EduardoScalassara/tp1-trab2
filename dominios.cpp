#include "dominios.hpp"

bool Dominio<T>::setValor(T) {
  if (!validar(valor))
    return false;
  this->valor = valor;
  return true;
}


