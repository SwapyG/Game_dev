#include<iostream>
#include<vector>

using namespace std ;


int main() {
    cout << "Enter your name: ";
    string player_name;
    getline(cin, player_name);
    cout << "Welcome " + player_name + " to the world of Pokémon! I am Professor Oak.\n";


    vector<string> pokemonList = {"Bulbasaur", "Charmander", "Squirtle"};
    vector<string> pokemonMessages = {
        "A wise choice.", // For Bulbasaur
        "A fiery choice.", // For Charmander
        "A cool choice." // For Squirtle
    };
    string confirm;
    int choice;
    do {
        // Step 1: Show options
        cout << "You can choose one of the following Pokémon:\n";
        for (size_t i = 0; i < pokemonList.size(); ++i) {
            cout << i + 1 << ". " << pokemonList[i] << endl;
        }

        // Step 2: Get user choice
        cin >> choice;

        // Step 3: Validate choice
        if (choice < 1 || choice > static_cast<int>(pokemonList.size())) {
            cout << "Eh! Invalid Choice. Please try again.\n";
            continue;
        }

        // Step 4: Fetch name and custom message
        string selected = pokemonList[choice - 1];
        string message = pokemonMessages[choice - 1];

        cout << "You chose " << selected << "! " << message << endl;

        // Step 5: Ask for confirmation
        cout << "Do you confirm your choice? (yes/no): ";
        cin >> confirm;
    } while (confirm != "yes");

    cout << "Ah, an excellent choice!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let’s see if you’ve got what it takes to keep going!\n";
    return 0;
}
