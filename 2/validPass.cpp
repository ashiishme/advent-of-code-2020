#include <bits/stdc++.h>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
  
  fstream file;
  file.open("input.txt");
  string minMax, validator, pass;
  int validPass = 0;
  int validPass2 = 0;
  while(file >> minMax >> validator >> pass) {
    int numOfPass = 0;
    int numOfPass2 = 0;
    int min = stoi(minMax.substr(0, minMax.find('-')));
    int max = stoi(minMax.substr(minMax.find('-') + 1));
    int len = pass.length();
    
    while(len--) {
      // part 1
      if(validator[0] == pass[len]) {
        numOfPass++;
      }
      
    }
    // part 1
    if(numOfPass >= min && numOfPass <= max) {
        validPass++;
    }
    
    // part 2
    if(validator[0] == pass.at(min - 1)) {
        numOfPass2++;
    }
    
    if(validator[0] == pass.at(max - 1)) {
        numOfPass2++;
    }

    if(numOfPass2 == 1) validPass2++;
  }
  
  file.close();
  cout << validPass << endl;
  cout << validPass2 << endl;
}
