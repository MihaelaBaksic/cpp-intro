#include<iostream>

enum Color {RED, GREEN, BLUE}; // red = 0, green = 1, blue = 2

enum Card {RED_CARD, GREEN_CARD}; // red_card = 0, green_card = 1

using namespace std;

int main()
{
    Color color = Color::RED;

    int red = Card::RED_CARD;

    cout << (color == Card::RED_CARD) << endl; // This is bad, it is a source of errors, but compiler only gives a warning

    cout << (color == red) << endl; // This is bad, we don't want this behaviour


}