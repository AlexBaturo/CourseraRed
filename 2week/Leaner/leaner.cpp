#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <sstream>
//#include "profiler.h"

using namespace std;

class Learner {
 private:
  set<string> dict;

 public:
  int Learn(const vector<string>& words) {
   // LOG_DURATION ("Learn");
    int newWords = 0;
    for (const auto& word : words)
    {
        if( dict.find(word) == dict.end()){
            dict.insert(word);
            newWords++;
        }
    }

    return newWords;
  }

  vector<string> KnownWords() {
   // LOG_DURATION ("del");
    return {dict.begin(), dict.end()};
  }
};


int main() {
  Learner learner;
  string line;
 // LOG_DURATION ("main_learn");
  while (getline(cin, line)) {
    vector<string> words;
    stringstream ss(line);
    string word;
    while (ss >> word) {
      words.push_back(word);
    }
    cout << learner.Learn(words) << "\n";
  }
  cout << "=== known words ===\n";
  for (auto word : learner.KnownWords()) {
    cout << word << "\n";
  }
}

