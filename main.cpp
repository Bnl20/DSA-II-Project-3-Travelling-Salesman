/******************************************************************************
 * Student Name: Bradley Love
 * Project 03
 * File Name: BruteForce.hpp
 *Responsible for calling methods in our other classes to run the program
***************************************************************/

#include "BruteForce.hpp"
#include<iostream>
#include<fstream>

using namespace std;

int main () {
    
    BruteForce b1;
    int userCity;
    int userGens;
    int userTours;
    double userPercent;
   

    b1.ReadInfile();

    cout << "Please enter the number of cities to run." << endl;
    cin >> userCity;
    b1.SetNumOfCities(userCity);

    cout << "Please enter the number of tours in a given generation." << endl;
    cin >> userTours;
    b1.SetNumTours(userTours);

    cout << "Please enter how many generations will be run." << endl;
    cin >> userGens;
    b1.SetNumOfGens(userGens);

    cout << "Please enter what percent of a generation should be comprised of mutated tours." << endl;
    cin >> userPercent;
    b1.SetPercentMutated(userPercent);
    
}
