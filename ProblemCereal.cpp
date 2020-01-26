
/*
Katherine Fontan
2290561
Assignment 1- Cereal

This is a program that will read the weight of a package of breakfast cereal
in ounces and output the eight in metric tons as well as the number of boxes
needed to yield one metric ton of cereal.
*/


#include <iostream>
using namespace std;

 int main (int argc, char **argv)
 {
   double packageWeight; //weight of a cereal package in ounces
   double weightMetricTons; // weight of input in metric tons
   double metricTon; // 1 metric ton in ounces
   int numberOfBoxes;

   metricTon = 35273.92; //assign value to variable

   //get weight of package from user input
   cout << "What is the weight of your cereal box? " << endl;
   cin >> packageWeight;

   //calculate the weight in metric tons and number of number of boxes needed
   weightMetricTons = (packageWeight/metricTon);
   cout << "The weight of the cereal box in metric tons is: " << weightMetricTons << " mt" << endl;

   // calculate how many boxes it takes to yield 1 metric ton.

   numberOfBoxes = (1/weightMetricTons);
   cout << "You need " << numberOfBoxes << " boxes of cereal to yield a metric ton of cereal." << endl;
   return 0;


 }
