/*
Katherine Fontan
2290561
Assignment 1- Fire Capacity

Program determines whether a meeting room is in violation of fire law regulations
regarding the maximum room capacity
*/

#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
  int roomCapacity, numberPeople, difference, peopleRemoved;

  cout << "What is the maximum room capacity? " << endl;
  cin >> roomCapacity;

  cout << "How many people will attend the meeting? " << endl;
  cin >> numberPeople;

  difference = roomCapacity - numberPeople; //calculate the difference
  //if the number of people is less than or equal to the max room Capacity
    // announce that it is legal to hold the meeting
    //and how many additional people may legally attend
    if (numberPeople <= roomCapacity)
    {
      cout << "You can hold the meeting with the amount of people attending!" << endl;

      cout << difference << " additional people may attend the meeting." << endl;
    }
    else
    {
      peopleRemoved = difference * -1;
      cout << "Sorry! The meeting cannot be held as plannes due to fire regulations." << endl;
      cout << "Consider excluding " << peopleRemoved << " people in order to meet the fire regulations." << endl;
    }
  //if the number of people exceed the maximum room capacity
    //announce that the meeting cannot be held as planned due to fire regulations
    //tells how many people must be excluded in orded to meet the fire regulations

}
