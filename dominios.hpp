#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

template <typename T> 
class Dominio {
  private:
    T valor;
    virtual bool validar(T) = 0;  
  public:
    bool setValor(T);
    T getValor() const;
};

inline T Dominio<T>::getValor() const {
  return valor;
}

#endif // DOMINIOS_HPP_INCLUDED
    
    
