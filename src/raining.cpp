#include <algorithm>
#include <cstring>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;
vector<string> storage;

vector<string>::iterator it;

vector<string>& print() {
   for (auto it = storage.begin(); it != storage.end(); it++) {
      cout << "\t" << *it << endl;
   }
   return storage;
}

vector<string>& sortStorage() {
   sort(storage.begin(), storage.end(), [](string a, string b) {
      return a<b;
   });
   return storage;
}

vector<string>& addToStorage(string name) {
   storage.push_back(name);
   return storage;
}
