/******************************************************************************
 * Student Name: Bradley Love
 * Project 03
 * File Name: BruteForce.cpp
 * This class is responsible for defining methods for its Brute Force Algorithm
 *******************************************************************************/

#include "BruteForce.hpp"
#include<iostream>
#include <fstream>

using namespace std;

/*
* Default constructor
*/
BruteForce::BruteForce(){
    cityCost = 0;
    tourCost = 0;
    timeTaken = 0;
    numOfCities = 0;
    numTours = 0;
    numGenerations = 0;
    percentMutated = 0;

}

/*
*Overloaded constructor
*/
BruteForce::BruteForce(long int cityCost, long int tourCost, double timeTaken, int numTours, int numOfCities, int numGenerations, double percentMutated){
    this->cityCost = cityCost;
    this->tourCost = tourCost;
    this->timeTaken = timeTaken;
    this->numOfCities = numOfCities;
    this->numGenerations = numGenerations;
    this->numTours = numTours;
    this->percentMutated = percentMutated;

}

/*
*Destructor
*/
BruteForce::~BruteForce(){
    
 }

/*
*Reads in input file
*/
void BruteForce::ReadInfile(){
    ifstream inFile;
    string fileName = "distances.txt";
    
    inFile.open(fileName);
        for(int i = 0; i < 20; i++){
            for(int j = 0; j < 20; j++){
                if(i == j){
                    this->adjMatrix[i][j] = 0;
                }
                else{
                    inFile >> this->adjMatrix[i][j];
                }
            }
        }
    }

/*
*prints the adjacency matrix
*/
void BruteForce::Print(){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            cout << this->adjMatrix[i][j] << " ";
        }
    }
    cout << "\n\n";
}

/*
*permutes the adjacency matrix
*/
 void BruteForce::Permute(int permsThisCall) {
     int m, k, p , q, i;
     int NUM_ELEMENTS = permsThisCall;
     Print();
     
     for(i = 1; i < permsThisCall; i++){
       m = NUM_ELEMENTS-2;
       
       while(adjMatrix[m]>adjMatrix[m+1]){
          m = m - 1;
       }

       k = NUM_ELEMENTS-1;
       
       while(adjMatrix[m] > adjMatrix[k]){
          k = k - 1;
       }
       
       swap(m,k);
       p = m + 1;
       q = 20-1;
       
       while( p < q){
         swap(p,q);
         p++;
         q--;
       }
       
       Print();
     }
   } 

    /*
    *Sets the value of cityCost
    */
    void BruteForce::SetCityCost(long int cityCost){
        this->cityCost = cityCost;
    }

    /*
    * gets the value of cityCost
    */
    long int BruteForce::GetCityCost(){
        return cityCost;
    }

    /*
    *Sets the value of tourCost
    */
    void BruteForce::SetTourCost(long int tourCost){
        this->tourCost = tourCost;
    }

    /*
    *Sets the value of numOfCities
    */
    void BruteForce::SetNumOfCities(int numOfCities){
        this->numOfCities = numOfCities;
    }

    /*
    * gets the value of numOfCities
    */
    int BruteForce::GetNumOfCities(){
        return numOfCities;
    }

    /*
    sets the number of tourss in a given generation
    */
    void BruteForce::SetNumTours(int numTours){
        this->numTours = numTours;
    }

    /*
    *Gets the number of tours in a given generation
    */
    int BruteForce::GetNumTours(){
        return numTours;
    }

    /*
    *Sets the number of generations that will be run
    */
    void BruteForce::SetNumOfGens(int numGenerations){
        this->numGenerations = numGenerations;
    }

    /*
    *Gets the number of generations that will be run
    */
    int BruteForce::GetNumOfGens(){
        return numGenerations;
    }

    /*
    *Sets the percent of generation(s) that should be comprised of mutated tours
    */
    void BruteForce::SetPercentMutated(double percentMutated){
        this->percentMutated = percentMutated;
    }

    /*
    Gets the percent of generation(s) that should be comprised of mutated tours
    */
    double BruteForce::GetPercentMutated(){
        return percentMutated;
    }
