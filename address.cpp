// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program formats your address appropriately

#include <iostream>


/* !IMPORTANT! I used std::sting in front of the name of this
  function so that the return would work */
std::string formatter(std::string address, std::string aptNumber,
      std::string streetNumber, std::string streetName, std::string city,
      std::string province, std::string postalCode) {
    // This function formats your address appropriately

    std::string formatedAddress;

    if (aptNumber != "None") {
        formatedAddress = (address + "\n" + aptNumber + "-" + streetNumber +
              " " + streetName + "\n" + city + " " + province +
              " " + postalCode);
    } else {
        formatedAddress = (address + "\n" + streetNumber + " " +
              streetName + "\n" + city + " " + province + " " + postalCode);
    }

    return formatedAddress;
}


int main() {
    // This function formats your address appropriately

    std::string addressInput;
    std::string apartmentCheckInput;
    std::string aptNumberInput;
    std::string streetNumberInput;
    std::string streetNameInput;
    std::string cityInput;
    std::string provinceInput;
    std::string postalCodeInput;
    std::string finalProduct;

    std::cout << "" << std::endl;
    std::cout << "Please enter your address information\n" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Address: ";
    std::cin >> addressInput;
    std::cout << "Do you live in a unit, suite"
          " or apartment (Y/N)?: ";
    std::cin >> apartmentCheckInput;

    if (apartmentCheckInput == "Y" || apartmentCheckInput == "YES") {
        std::cout << "Apt. number: ";
        std::cin >> aptNumberInput;
    } else {
        aptNumberInput = "None";
    }

    std::cout << "Street number: ";
    std::cin >> streetNumberInput;
    std::cout << "Street name: ";
    std::cin >> streetNameInput;
    std::cout << "City: ";
    std::cin >> cityInput;
    std::cout << "Province (abbreviated): ";
    std::cin >> provinceInput;
    std::cout << "Postal code: ";
    std::cin >> postalCodeInput;
    std::cout << "" << std::endl;

    finalProduct = formatter(addressInput, aptNumberInput, streetNumberInput,
          streetNameInput, cityInput, provinceInput, postalCodeInput);

    std::cout << finalProduct << std::endl;
}

/* fun fact: every time you put a space in when you are
inputting information it uses whatever is after the
space as the second input (if there is no second input then
what is after the space will simply be ignored) */
