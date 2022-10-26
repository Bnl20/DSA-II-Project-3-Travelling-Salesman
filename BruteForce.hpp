/******************************************************************************
 * Student Name: Bradley Love
 * Project 03
 * File Name: BruteForce.hpp
 * This class is responsible for declaring methods for its Brute Force Algorithm
 *******************************************************************************/

#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

 class BruteForce{
    private:
      /*
      * the cost of going from one city to another
      */
      long int cityCost;

      /*
      * the cost of an entire tour of N cities
      */
      long int tourCost;

      /*
      * time taken to run the algorithm in seconds
      */
      double timeTaken;

      /*
      * number of cities to run
      */
      int numOfCities;

      /*
      *number of tours in a given generation
      */
      int numTours;

      /*
      *represents how many generations will be run
      */
      int numGenerations;

      /*
      * represents the number of generations that should be comprised of mutated tours
      */
      double percentMutated;

      /*
      * Adjacency Matrix (S in project description)
      */
      double adjMatrix[20][20];


    public:
      /*
      * Default constructor
      */
      BruteForce();

      /*
      *Overloaded constructor
      */
      BruteForce(long int cityCost, long int tourCost, double timeTaken, int numTours, int numOfCities, int numGenerations, double percentMutated);

      /*
      *Destructor
      */
      ~BruteForce();

      /*
      *Reads in input file
      */
      void ReadInfile();

      /*
      *Calculates tour cost
      */
      long int CalcTourCost(int cityCost);

      /*
      *Sets the value of cityCost
      */
      void SetCityCost(long int cityCost);

      /*
      * gets the value of cityCost
      */
      long int GetCityCost();

      /*
      *Sets the value of tourCost
      */
      void SetTourCost(long int tourCost);

      /*
      * gets the value of tourCost
      */
      long int GetTourCost();

      /*
      *Sets the value of numOfCities
      */
      void SetNumOfCities(int numOfCities);

      /*
      * gets the value of numOfCities
      */
      int GetNumOfCities();

      /*
      sets the number of tourss in a given generation
      */
      void SetNumTours(int numTours);

      /*
      *Gets the number of tours in a given generation
      */
      int GetNumTours();

      /*
      *Sets the number of generations that will be run
      */
      void SetNumOfGens(int numGenerations);

      /*
      *Gets the number of generations that will be run
      */
      int GetNumOfGens();

      /*
      *Sets the percent of generation(s) that should be comprised of mutated tours
      */
      void SetPercentMutated(double percentMutated);

      /*
      Gets the percent of generation(s) that should be comprised of mutated tours
      */
      double GetPercentMutated();

      /*
      *prints the adjacency matrix
      */
      void Print();

      /*
      Permutes the adjacency matrix
      */
      void Permute(int permsThisCall);
};
#endif