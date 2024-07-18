#include "Led.hpp"

#include <print>

int main(){

    std::println("-- Test Led --");

    Led  myLed{};

    myLed.getColor();

    return 0;
}


