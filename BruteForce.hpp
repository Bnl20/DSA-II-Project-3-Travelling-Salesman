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
       * Adjacency Matrix (S in project description)
       */
      int adjMatrix[20][20];


    public:
        /*
        * Default constructor
        */
        BruteForce();

        /*
        *Overloaded constructor
        */
        BruteForce(long int cityCost, long int tourCost, double timeTaken, int numOfCities);

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
       void SetTourCostt(long int tourCost);

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

};
#endif