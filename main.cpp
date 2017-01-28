// Orion Davis 3003072 ord4@zips.uakron.edu
// The University of Akron, Computer Science I, Prof. Will
// Project 2 Wolves and Moose Population

// INCLUDED FILES
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "constants.hpp"
#include "maximum.hpp"
#include "minimum.hpp"
#include "population.hpp"


// FUNCTIONS
void population(int[], int[]);
void maximum(int[], int&);
void minimum(int[], int&);

int main(int argc, char *argv[]){
   // Call to use the constants in the included hpp file
   //using namespace constants;

   // Set the array sizes
   int wolves[101], moose[101];

   // Convert the arguments into integers to be used as the initial population
   wolves[0] = atoi(argv[1]);
   moose[0] = atoi(argv[2]);

   if (argc < 3){
      std::cerr << "Not enough arguments";
   }
   else{
      // Declare variables and initialize them to 0
      int maxWolfPop = 0, maxMoosePop = 0, minWolfPop = 0, minMoosePop = 0;

      // Create the file object to be written to
      std::ofstream outFile("Report.txt");

      // Call the population function to calculate the population for wolves
      // and moose for the years 1 to 100 and put the values in the arrays
      population(wolves, moose);

      // Determine max and min populations and set the variables to the years
      // in which the max/min occurs
      maximum(wolves, maxWolfPop);
      minimum(wolves, minWolfPop);
      maximum(moose, maxMoosePop);
      minimum(moose, minMoosePop);

      // Format and write the report to the text file
      //writeReport(outFile, wolves, moose, maxWolfPop, minWolfPop, maxMoosePop, minMoosePop);

      outFile.close();
   }
   return 0;
}
