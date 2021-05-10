// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Layla Michel
// Created on: May 10, 2021
// This program asks the user to input a number between 0 and 9 and
// displays a message depending on if the guess is correct or wrong

#include <iostream>

int main() {
    // declare constants
    const int CORRECT_GUESS = 2;

    // declare variable
    int number;

    // get the user guess
    std::cout << "Guess what number I am thinking of between 0 and 9: ";
    std::cin >> number;

    // check if guess is correct and display message
    if (number == CORRECT_GUESS) {
        std::cout << "You guessed correctly!";
    }

    // check if guess is wrong and display message
    if (number != CORRECT_GUESS) {
        std::cout << "You guessed wrong";
    }
}
