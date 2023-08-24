#ifndef EJERCITO_H
#define EJERCITO_H

class ejercito {
  public:
    // Getter for 'tipo'
    char getTipo();

    // Setter for 'tipo'
    void setTipo(char nuevoTipo);

    int getCant();

    // Setter for 'cant'
    void setCant(int nuevaCant);


  private:
    char tipo;
    int cant;
};

#endif
