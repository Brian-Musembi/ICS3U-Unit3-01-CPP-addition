// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 29 April 2021
// This program adds two numbers together

#include <iostream>

int main() {
    // this function adds two numbers together
    float num1;
    float num2;
    float sum;

    // input
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;

    // process
    sum = num1 + num2;

    // output
    std::cout << "" << std::endl;
    sum = num1 + num2;
    std::cout << "The answer to " << num1 << " + " << num2 << " is " << sum;
    return 0;
}
