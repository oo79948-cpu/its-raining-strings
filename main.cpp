#include <iostream>

#include "src/raining.hpp"

using namespace std;

vector<string>& addSortPrintStorage(string name) {
  addToStorage(name);
  vector<string>& myStorage = sortStorage();
  if (myStorage.size() == 1) {
    cout << "\nYour business is: \n" << endl;
  } else {
    cout << "\nYour businesses are: \n" << endl;
  }
  print();
  return myStorage;
}

void toLowerCase(string &input) {
  transform(input.begin(), input.end(), input.begin(), ::tolower);
}

int main() {
  string name;
  string answer;

  vector<string> continueAnswers { "y", "yes" };

  cout << "\nWelcome to the Cool Business Sorting Program!™" << endl;
  bool continueAsking = true;
  do {
    cout << "\nPlease enter the name of a business: ";
    getline(cin, name);
    addSortPrintStorage(name);
    cout << "\nAnother business?: ";
    getline(cin, answer);
    toLowerCase(answer);
    auto it = find(continueAnswers.begin(), continueAnswers.end(), answer);
    continueAsking = it != continueAnswers.end();
  } while (continueAsking);
  cout << "\nThank you for using the Cool Business Sorting Program!™";
}
