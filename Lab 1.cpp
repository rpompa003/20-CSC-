// made by rafael pompa
// created on 10/29
// program is a guessing the number that the comuter stores

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void intro(){//game introduction
cout<<"You have to guess the computer which is between 1 to 10."<<endl;
cout<<"Depending oun your gess you answer could be too low or too high"<<endl;
cout<<" "<<endl;
}

int main(){
  //setting up the code
  int max = 10;
  int userGuess = 1;
  int computerGuess = 0;
   
  intro(); //function call
  srand(time(0));
  
  //this next line creates a random number from 1 to 10 that the computer chooses
  computerGuess = rand()%max + 1;

  //ask the user to enter a guess for the computer number
  cout<<"Please choose a number you think the computer chose between 1 and "<< max<<": ";
  cin>>userGuess;
  
  cout<<endl;
  
  //create a loop that compares the computer Guess to the user Guess 
  while (computerGuess != userGuess) {

  //tell the user that the guessed incorrect
  cout<<"You have guessed incorrectly"<<endl;

  if (userGuess > computerGuess) {
  cout << "Your guess is too high." << endl;
  } else {
  cout << "Your guess is too low." << endl;
  }

  //ask the user to enter a new guess for the computer number
  cout<<"Please enter another guess ";
  cin>>userGuess;

  cout<<"the computer guess was "<<computerGuess<<endl;
  //print out that the user got the answer correctly and how many guesses it took (the count)
  cout<<"It took you "<<count<<" guesses to get the computer's number";
  }
}
