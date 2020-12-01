#include <bits/stdc++.h>
#include <fstream>

using namespace std;

vector<int> getInput(string file) {
  fstream expenseReportInput;
  expenseReportInput.open(file);
  int expenseItem;
  vector<int> expenses;
  while(expenseReportInput >> expenseItem) {
    expenses.push_back(expenseItem);
  }
  expenseReportInput.close();
  return expenses;
}

int main(void) {
  vector<int> expenses = getInput("input.txt");
  for(int i = 0; i < expenses.size(); i++) {
    for(int j = i; i < expenses.size(); i++) {
      if(expenses[i] + expenses[j] == 2020) {
          cout << expenses[i] * expenses[j] << endl;
      }
    }
  }
}

