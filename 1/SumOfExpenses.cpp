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

int sumOfTwo(vector<int> expenses) {
  int total;
  for(int i = 0; i < expenses.size(); i++) {
    for(int j = i; j < expenses.size(); j++) {
      if(expenses[i] + expenses[j] == 2020) {
          total = expenses[i] * expenses[j];
      }
    }
  }
  return total;
}

int sumOfThree(vector<int> expenses) {
  int total;
  for(int i = 0; i < expenses.size(); i++) {
    for(int j = i; j < expenses.size(); j++) {
      for(int k = i; k < expenses.size(); k++) {
        if(expenses[i] + expenses[j] + expenses[k] == 2020) {
          total = expenses[i] * expenses[j] * expenses[k];
        }
      }
    }
  }
  return total;
}

int main(void) {
  vector<int> expenses = getInput("input.txt");
  cout << sumOfTwo(expenses) << endl;
  cout << sumOfThree(expenses) << endl;
}