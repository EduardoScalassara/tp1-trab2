#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

template <typename T> 
class Dominio {
  private:
    T valor;
    virtual bool validar(T) = 0;  
  public:
    bool setValor(T);
    T getValor() const {
        return valor;
    }
};

template <typename T> 
class DominioA1:public Dominio<T> {
    private:
        bool validar(T);
};

template <typename T> 
class DominioB1:public Dominio<T> {
    private:
        bool validar(T);
};

template <typename T> 
class DominioA2:public Dominio<T> {
    private:
        bool validar(T);
};

template <typename T> 
class DominioB2:public Dominio<T> {
   private:
        bool validar(T);
};

#endif // DOMINIOS_HPP_INCLUDED
