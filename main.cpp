#include <iostream>
#include <string>
using namespace std;

// Define an enum for Pokèmon choices
enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    Pikachu
};

int main() {
    // Variables to store player name and chosen Pokèmon
    string player_name;
    PokemonChoice chosen_pokemon = Pikachu; // Default to an invalid choice

    // Introduction by the Professor
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
    cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    // Taking player name as input
    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name << "! What a fantastic name!\n";
    cout << "Professor Oak: You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

    // Presenting Pokèmon choices
    cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    // Map the integer choice to the corresponding enum value
    switch (choice) {
        case 1:
            chosen_pokemon = Charmander;
            break;
        case 2:
            chosen_pokemon = Bulbasaur;
            break;
        case 3:
            chosen_pokemon = Squirtle;
            break;
        default:
            chosen_pokemon = Pikachu;
            break;
    }

    // Respond based on the chosen Pokèmon
    switch (chosen_pokemon) {
        case Charmander:
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case Bulbasaur:
            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;
        case Squirtle:
            cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosen_pokemon = Pikachu; // Default to Charmander if invalid choice
            cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
            break;
    }

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == Charmander
                                      ? "Charmander"
                                      : chosen_pokemon == Bulbasaur
                                            ? "Bulbasaur"
                                            : chosen_pokemon == Squirtle
                                                  ? "Squirtle"
                                                  : "Pikachu")
            << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
