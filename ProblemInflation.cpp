/*
Katherine Fontan
2290561
Assignment 1- Inflation

Write a program to gauge the expected cost of an item in a specified number of years.
*/

#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
  int years;
  double inflation, cost;

  cout << "Enter cost of item: " <<endl;
  cin >> cost;

  cout << "Number of years until the item is purchased: ";
  cin >> years;

  cout << "What is the inflation rate (as a percent)? ";
  cin >> inflation;
  inflation = inflation * 0.01; // turn percent into a decimal

  //for loop to calculate Inflation
  for (int i = 0; i < years; ++i)
  {
    cost = cost + (cost * inflation);
  }

  cout << "The estimated cost after " << years << " years is $" << cost << endl;


}
