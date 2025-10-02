#ifndef __LED_HPP__
#define __LED_HPP__

#include <cstdint>
#include <print>
#include <string_view>
/**
 * @brief : Led Class example
 */
class Led {
  public:
    enum class Couleur_t { RED, YELLOW, GREEN, BLUE };
    enum class Etat_t { ON, OFF };

  private:
    const Couleur_t _Couleur{Couleur_t::GREEN};
    Etat_t _Etat{Etat_t::OFF};

  public:
    Led() = default;
    Led(Couleur_t Couleur) : _Couleur{Couleur}, _Etat{Etat_t::OFF} {};
    Led(Couleur_t Couleur, Etat_t Etat) : _Couleur{Couleur}, _Etat{Etat} {};
    virtual ~Led() = default;

    [[nodiscard]] Couleur_t getCouleur() const noexcept { return this->_Couleur; };
    [[nodiscard]] Etat_t getEtat() const noexcept { return this->_Etat; };
    void setEtat(Etat_t Etat) noexcept { this->_Etat = Etat; };

    void setOn() noexcept { this->setEtat(Etat_t::ON); };
    void setOff() noexcept { this->setEtat(Etat_t::OFF); };
    void toggle() noexcept;
}; /* Led  */

#endif /*  __LED_HPP__ */
