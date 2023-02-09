#include <iostream>

using namespace std;

int main() {
  bool isCold;
  bool isFreezing;
  bool isSnowing;

  // get temp
  cout << "Is it cold outside? (0 for true / 1 for false)";
  cin >> isCold;

  // if freezing
  if (isCold == false) {
    cout << "Is it below freezing? (1 for true / 0 for false)";
    cin >> isFreezing;
    if (isFreezing) {

      // determine if snowing
      cout << "Is it isSnowing outside? (0 for true / 1 for false)";
      cin >> isSnowing;
    }
  }

  // just testing if var get input
  cout << isCold << endl;
  cout << isSnowing << endl;
}
