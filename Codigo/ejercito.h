#ifndef EJERCITO_H
#define EJERCITO_H

class ejercito {
  public:
    // Getter for 'tipo'
    char getTipo() const {
        return tipo[0];
    }

    // Setter for 'tipo'
    void setTipo(char nuevoTipo) {
        tipo[0] = nuevoTipo;
    }

    // Getter for 'cant'
    int getCant() const {
        return cant;
    }

    // Setter for 'cant'
    void setCant(int nuevaCant) {
        cant = nuevaCant;
    }

  private:
    char tipo[1];
    int cant;
};

#endif
