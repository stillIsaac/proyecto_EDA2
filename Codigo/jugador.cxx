#include <iostream>
#include 

    // Getter for 'nombre'
    const std::string& getNombre() const {
        return nombre;
    }

    // Setter for 'nombre'
    void setNombre(const std::string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    // Getter for 'color'
    const std::string& getColor() const {
        return color;
    }

    // Setter for 'color'
    void setColor(const std::string& nuevoColor) {
        color = nuevoColor;
    }

    // Getter for 'tropas'
    const std::list<Ejercito>& getTropas() const {
        return tropas;
    }

    // Setter for 'tropas'
    void setTropas(const std::list<Ejercito>& nuevasTropas) {
        tropas = nuevasTropas;
    }

    // Getter for 't_territorio'
    const std::list<TarjetaTerritorio>& getTarjetasTerritorio() const {
        return t_territorio;
    }

    // Setter for 't_territorio'
    void setTarjetasTerritorio(const std::list<TarjetaTerritorio>& nuevasTarjetas) {
        t_territorio = nuevasTarjetas;
    }

    // Getter for 't_mision'
    const std::list<TarjetaMision>& getTarjetasMision() const {
        return t_mision;
    }

    // Setter for 't_mision'
    void setTarjetasMision(const std::list<TarjetaMision>& nuevasTarjetas) {
        t_mision = nuevasTarjetas;
    }

    // Getter for 't_comodin'
    const std::list<TarjetaComodin>& getTarjetasComodin() const {
        return t_comodin;
    }

    // Setter for 't_comodin'
    void setTarjetasComodin(const std::list<TarjetaComodin>& nuevasTarjetas) {
        t_comodin = nuevasTarjetas;
    }

    // Getter for 'territorios'
    const std::list<Territorio>& getTerritorios() const {
        return territorios;
    }

    // Setter for 'territorios'
    void setTerritorios(const std::list<Territorio>& nuevosTerritorios) {
        territorios = nuevosTerritorios;
    }

