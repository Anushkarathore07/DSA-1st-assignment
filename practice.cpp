#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generateRandomAlphanumericString(int minLength, int maxLength) {
    string Characters("0123456789ABCDEF");

    int length = rand() % (maxLength - minLength + 1) + minLength;
    string randomString;

    string random_String;
  for (int i = 0; i < length; i++) {
    random_String += Characters[rand() % Characters.length()];
  }
  return random_String;
}

int main() {
srand(time(nullptr));

int minLength = 3;
 int maxLength = 10;

 string randomString = generateRandomAlphanumericString(minLength, maxLength);

    cout << "Random Alphanumeric String: " << randomString << endl;

    return 0;
}
