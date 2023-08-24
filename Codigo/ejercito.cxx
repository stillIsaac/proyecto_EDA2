#include <iostream>
#include "ejercito.h"


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
