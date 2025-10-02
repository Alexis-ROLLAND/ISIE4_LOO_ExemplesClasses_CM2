#include "Led.hpp"

#include <print>

int main() {

    std::println("/- Test Led -\\");

    Led MaLedRouge{Led::Couleur_t::RED};
    Led MaLed = MaLedRouge;

    const Led MaLedJauneToujoursAllumee{Led::Couleur_t::YELLOW, Led::Etat_t::ON};

    std::println("Couleur : {}", static_cast<int>(MaLed.getCouleur()));

    return 0;
}
