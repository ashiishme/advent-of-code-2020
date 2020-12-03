#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int trees(const vector<string> &vect, int a, int b) {
    int trees = 0;
    int len = vect[0].length();
    int x = a, y = b;
    while(x < vect.size()) {
        if(vect[x][y] == '#') {
            trees++;
        }
        x += a;
        y = (y + b) % len;
    }
    return trees;
}

int main() {
    fstream file;
    file.open("input.txt");
    string str;
    vector<string> vect;
    while(file >> str) {
        vect.push_back(str);
    }

    vector<pair<int, int>> slopes = {{1,1}, {1, 3}, {1, 5}, {1, 7}, {2, 1}};
    int len = slopes.size();
    unsigned int multipleOfTrees = 1;
    while(len--) {
        multipleOfTrees *= trees(vect, slopes[len].first, slopes[len].second);
    }
    
    cout << trees(vect, 1, 3) << endl;
    cout << multipleOfTrees << endl;
}