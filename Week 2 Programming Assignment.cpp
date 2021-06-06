// Week 2 Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double CHEESE_MASS = 2.76;
const double CHEESE_COST = 4.12;
const double CHEESE_PROFIT = 1.45;

int main()
{
    //Declaring Variables
    int cheese_produced;
    int containers;
    string message1;
    string message2;


    //Outputs Program Title With Manipulators
    cout << setw(80) << setfill('*') << "*" << endl;
    cout << setw(60) << setfill('*') << "Welcome to my Cheesey Program" << setw(20) << right << "*" << endl;
    cout << setw(80) << setfill('*') << "*" << endl;
    cout << setfill(' ');

    //Outputs Program Title
    //cout << "*******************************************************************************" << endl;
    //cout << "***********************Cheese Cost And Profit Calculator***********************" << endl;
    //cout << "*******************************************************************************" << endl << endl;

    //Asks User To Enter Amount Of Cheese Produced
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> cheese_produced;

    // Calculates Number Of Containers And Outputs Data
    containers = static_cast<int>(cheese_produced / CHEESE_MASS + 0.5); //0.5 rounds the number up
    cout << setw(50) << left << "The number of containers to hold the cheese is:" << setw(34) << right << containers << endl;
    
    //Calculates Cost Of Producing Containers Of Cheese And Outputs Data
    message1 = "The cost of producing " + to_string(containers) + " container(s) of cheese is: $"; //message for the cost of producing containers
    cout << fixed << setprecision(2) << setw(57) << left << message1 << setw(27) << right << containers * CHEESE_COST << endl;

    //Calculates The Profit Of Producing Containers Of Cheese And Outputs Data
    message2 = "The profit from producing " + to_string(containers) + " containers(s) of cheese is: $"; //message for the profit from the containers
    cout << fixed << setprecision(2) << setw(62) << left << message2 << setw(22) << right << containers * CHEESE_PROFIT << endl;

}