// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, comparing the number and 0

#include <iostream>

int main() {
    // This function compares the number and 0
    int numberOfMonth;

    // input
    std::cout << "Enter the month number as a number between 1-12: ";
    std::cin >> numberOfMonth;

    // process & output
    std::cout << "" << std::endl;
    switch (numberOfMonth) {
        case '1':
            std::cout << "It is January." << std::endl;
            break;
        case '2':
            std::cout << "It is February." << std::endl;
            break;
        case '3':
            std::cout << "It is March." << std::endl;
            break;
        case '4':
            std::cout << "It is April." << std::endl;
            break;
        case '5':
            std::cout << "It is May." << std::endl;
            break;
        case '6':
            std::cout << "It is June." << std::endl;
            break;
        case '7':
            std::cout << "It is July." << std::endl;
            break;
        case '8':
            std::cout << "It is August." << std::endl;
            break;
        case '9':
            std::cout << "It is September." << std::endl;
            break;
        case 'A':
            std::cout << "It is October." << std::endl;
            break;
        case 'B':
            std::cout << "It is November" << std::endl;
            break;
        case 'C':
            std::cout << "It is December." << std::endl;
            break;
        default:
            std::cout << "This is not a number of months!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
