#ifendf JUGADOR_H
#define JUGADOR_H

#include <list>
#include <ejercito.h>
#include <tarjetas.h>

class Jugador {

  public:
    // Getter for 'nombre'
    const std::string& getNombre() const;
    
    // Setter for 'nombre'
    void setNombre(const std::string& nuevoNombre);
    
    // Getter for 'color'
    const std::string& getColor() const;
    
    // Setter for 'color'
    void setColor(const std::string& nuevoColor);
    
    // Getter for 'tropas'
    const std::list<Ejercito>& getTropas() const;
    
    // Setter for 'tropas'
    void setTropas(const std::list<Ejercito>& nuevasTropas);
    
    // Getter for 't_territorio'
    const std::list<TarjetaTerritorio>& getTarjetasTerritorio() const;
    
    // Setter for 't_territorio'
    void setTarjetasTerritorio(const std::list<TarjetaTerritorio>& nuevasTarjetas);
    
    // Getter for 't_mision'
    const std::list<TarjetaMision>& getTarjetasMision() const;
    
    // Setter for 't_mision'
    void setTarjetasMision(const std::list<TarjetaMision>& nuevasTarjetas);
    
    // Getter for 't_comodin'
    const std::list<TarjetaComodin>& getTarjetasComodin() const;
    
    // Setter for 't_comodin'
    void setTarjetasComodin(const std::list<TarjetaComodin>& nuevasTarjetas);
    
    // Getter for 'territorios'
    const std::list<Territorio>& getTerritorios() const;
    
    // Setter for 'territorios'
    void setTerritorios(const std::list<Territorio>& nuevosTerritorios);
    
    

  private:
    string nombre;
    string color;
    list <Ejercito> tropas;
    list <TarjetaTerritorio> t_territorio;
    list <TarjetaMision> t_mision;
    list <TarjetaComodin> t_comodin;
    list <Territorio> territorios;

  
    

#endif
