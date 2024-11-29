#include <iostream>
// #include <ctime>
// #include <random>
#include <string>





int main () {
    std::string Input_unit;
    double Input_value;
    bool Input = false;


    while (!Input) {
        std::cout << "Kilometer(K) or Miles(M) ? " << std::endl;
        std::cin >> Input_unit;

        if (Input_unit == "K" || Input_unit == "k") {
            std::cout << "Please enter your Number " << Input_unit << std::endl;
            std::cin >> Input_value;

            double Calculation_K = Input_value / 1.609;
            std::cout << "Kilometers calculated in Miles = " << Calculation_K << std::endl;
            Input = true;   // disables the loop

        } else if (Input_unit == "M" || Input_unit == "m") {
            std::cout << "Please enter your Number " << Input_unit << std::endl;
            std::cin >> Input_value;

            double Calculation_M = Input_value * 1.609;
            std::cout << "Miles calculated in Kilometers = " << Calculation_M << std::endl;
            Input = true;   // disables the loop

        } else {
            std::cout << "Please enter a correct Letter (K or M) " << std::endl;
            std::cout << Input_unit << " isn't a valid Letter" << std::endl;
            }
    }
}

