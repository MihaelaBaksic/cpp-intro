#include<iostream>

enum class Color {RED, GREEN, BLUE}; // red = 0, green = 1, blue = 2

enum class Card {RED_CARD, GREEN_CARD}; // red_card = 0, green_card = 1

using namespace std;


int main()
{

    //int red = Color::RED; // Error, no explicit conversion to int
    //cout << (red == Color::RED) << endl; // Error

    //cout << (Color::RED == Card::RED_CARD) << endl; // Error

    cout << (Color::RED == Color::BLUE) << endl; // can be compared

}