#include <iostream>
#include "dominios.hpp"

template <typename T>


bool Dominio<T>::setValor(T) {
  if (!validar(valor))
    return false;
  this->valor = valor;
  return true;
}

template <typename T>
bool DominioA1<T>::validar(T valor) {
    std::cout << "Local para codigo validacao DominioA1" << "\n";

    return true;
}

template <typename T>
bool DominioA2<T>::validar(T valor) {
    std::cout << "Local para codigo validacao DominioA2" << "\n";

    return true;
}

template <typename T>
bool DominioB1<T>::validar(T valor) {
    std::cout << "Local para codigo validacao DominioB1" << "\n";

    return true;
}

template <typename T>
bool DominioB2<T>::validar(T valor) {
    std::cout << "Local para codigo validacao DominioB2" << "\n";

    return true;
}

