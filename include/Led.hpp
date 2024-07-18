#ifndef __LED_HPP__
#define __LED_HPP__

#include <print>
#include <cstdint>
#include <string_view>

class Led{
    public:
        enum class Couleur_t:uint8_t {  RED, 
                                        ORANGE,
                                        YELLOW,
                                        GREEN,
                                        BLUE,
                                        WHITE 
        };

        enum class Etat_t:uint8_t{OFF, ON};
                
    private:
        Couleur_t   Color{Couleur_t::RED};
        Etat_t      State{Etat_t::OFF};

        void        setState(Etat_t Etat) noexcept {this->State = Etat;};

    public:
    
        [[nodiscard]]   Couleur_t   getColor() const noexcept   {return this->Color;};
        void    setColor(Couleur_t Color) noexcept {this->Color = Color;};

        [[nodiscard]]   Etat_t getState() const noexcept {return this->State;};

        void    setON() noexcept {this->setState(Etat_t::ON);};
        void    setOFF() noexcept {this->setState(Etat_t::OFF);};
        void    toggle() noexcept;

        [[nodiscard]]   std::string_view    to_string() const noexcept;
    
};  /* Led  */


#endif  /*  __LED_HPP__ */

