/******************************************************************************
 * Student Name: Bradley Love
 * Project 03
 * File Name: BruteForce.cpp
 * This class is responsible for defining methods for its Brute Force Algorithm
 *******************************************************************************/

#include<BruteForce.hpp>
#include<iostream>
#include<fstream>

using namespace std;

/*
* Default constructor
*/
BruteForce::BruteForce(){
    cityCost = 0;
    tourCost = 0;
    timeTaken = 0;
    numOfCities = 0;

}

/*
*Overloaded constructor
*/
BruteForce::BruteForce(long int cityCost, long int tourCost, double timeTaken, int numOfCities){
    this->cityCost = cityCost;
    this->tourCost = tourCost;
    this->timeTaken = timeTaken;
    this->numOfCities = numOfCities;

}

/*
*Destructor
*/
BruteForce::~BruteForce(){
    //TODO: delete later
    cout << "Destructor Called!" << endl;
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
                    inFile >> adjMatrix[i][j];
                    cout << adjMatrix[i][j];
                }
            }
        }
    }

