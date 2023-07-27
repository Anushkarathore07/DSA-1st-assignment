#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
  // Generating a random number between 0 and 16.
  int random_number = rand() % 16;

  // Then converting the random number to a character.
  char random_character = '0' + random_number;

  // Now printing the random character.
  cout << "The Randomly Generated Character is " << random_character << endl;
  
  return 0;
}