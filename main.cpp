#include<iostream>
#include<vector>

using namespace std ;


int main() {
    cout << "Enter your Name: ";
    string player_name;
    getline(cin, player_name);
    cout << "Great Start " + player_name << endl;
    return 0;
}
