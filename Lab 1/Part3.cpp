// Lab 1 - Part 3
// Exercise 3 on page 227
// wacky structuring

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <time.h>

using namespace std;

int main() {
    // Infinite loop reading from cin
    cout << "Greetings traveler. I am a proud purchaser of goods. A merchant, if you will. What do you have for me?" << endl;
    string word = "";
    bool running = true;

    while(running) {
        cin >> word;
        transform(word.begin(), word.end(), word.begin(), ::toupper);

        int option = 0;
        if (word == "GOLD") {
            option = 1;
        } else if (word == "SWORD") {
            option = 2;
        } else if (word == "TREASURE") {
            option = 3;
        } else if (word == "MAGIC") {
            option = 4;
        } else if (word == "DRAGON") {
            option = 5;
        } else if (word == "ART") {
            option = 6;
        } else if (word == "BUY") {
            option = 7;
        }


        switch (option)
        {
        case 1:
            cout << "I don't buy gold, I give it to you in exchange for treasure." << endl;
            break;
        case 2:
            cout << "I've no need for blades. Show me something else!" << endl;
            break;
        case 3:
            cout << "Now we're talking! I'll give you 12 gold for your treasure. Deal? Deal." << endl;
            running = false;
            break;
        case 4:
            cout << "I'm no magician. Show me something else!" << endl;
            break;
        case 5:
            cout << "A dragon! Where?! Wait a minute, there is no dragon... Ha! A fine gag! Now, show me something else!" << endl;
            break;
        case 6:
            cout << "A fine piece of work, this painting. But I don't buy art. Show me something else!" << endl;
            break;
        case 7:
            cout << "You think I sell things?! Where did you get that from! I buy little treasures from travelers like you. Now, show me something else!" << endl;
            break;
        default:
            cout << "I don't even know what that is! Show me something else." << endl;
            break;
        }
    }

    cout << "Have a good day traveler! Please come again when you find more treasure!" << endl;

    return 0;
}