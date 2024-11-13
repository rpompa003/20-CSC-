//made by rafael pompa
//date 10/24
//this program will be used for making a nim game

#include <iostream>
#include <cmath>
using namespace std;

void Nim_game(){//function about the rules
cout<< "Nim is a mathematical game of strategy in which two players take turns removing objects from 4 different piles." <<endl;
cout<< "On each turn, a player can remove any number of objects but only from one pile." <<endl;
cout<< "The goal of this game is to avoid being the player forced to take the last object." <<endl;
cout<< "This his how the piles are all set up."<<endl;
cout<<" "<<endl;
}

void Game_art(){// how the game looks
cout<< "pile 1:       I       "<<endl;
cout<< "pile 2:     I I I     "<<endl;
cout<< "pile 3:   I I I I I   "<<endl;
cout<< "pile 4: I I I I I I I "<<endl;
cout<<" "<<endl;
}

//setting up the code
int main(){
int player =1;
int piles =0;
int amount_taken =0;
int totalAmount =16; // Total number of items across all piles
int valuearray[5]; // Array to store the number of items in each pile

// Initialize pile values (representing items in each pile)
for (int i = 1; i < 5; ++i) {
  valuearray[i] = 2 * i - 1; // Formula to generate 1, 3, 5, 7, ...
}

// telling the game rules
Nim_game();
// how the game looks
Game_art();

// Main game loop that continues until all items are taken
while (totalAmount > 0) {
cout<< "it is player "<<player<< " turn now."<<endl;

// Ask player to choose a pile
cout << "Choose a pile you would like to choose from (1-4): ";
cin>>piles;
cout<<" "<<endl;

// Checking if the chosen pile is valid
while (piles < 1 || piles > 4 || valuearray[piles] == 0) {
cout << "Invalid pile selection. Please choose a different pile (1-4): ";
cin >> piles;
cout << " " << endl;
}

// Display the number of items left in the chosen pile
cout << "There are " << valuearray[piles] << " items left in pile " << piles << "." << endl;

// Ask player how many items they want to take from the chosen pile
cout << "How many items do you want to take: ";
cin >> amount_taken;

// if amount taken is over what left
while (amount_taken <= 0 || amount_taken > valuearray[piles]) {
cout << "Invalid amount. Please enter an amount between 1 and " << valuearray[piles] << ": ";
cin >> amount_taken;
}

// Update the chosen pile and the total amount
valuearray[piles] -= amount_taken;
    totalAmount -= amount_taken;

// Display updated item counts in the chosen pile and overall
cout << "There are " << valuearray[piles] << " items left in pile " << piles << "." << endl;
cout << "And there are " << totalAmount << " items left in total." << endl;
cout << " " << endl;

// Check if the game is over
if (totalAmount == 0) {
cout << "All the piles are empty and the game is now over." << endl;
}
// switching to other player
else if(player ==1){
player =2;
}
else
player =1;
}
cout << "Player " << player << " loses the game!" << endl;
}