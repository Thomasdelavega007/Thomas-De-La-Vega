
/*
 *File: Main.cpp
 * Author: Thomas De La Vega
 * Created: 01/02/2023
 * Purpose: Write Hello World
 */

//System Libraries 
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries 

//Global Constants - Math, Physics, Chem,Conversions

//Function Prototypes 

//Program Execution begins here
int main(int argc, char** argv) {
    //Set a random seed
    
    // Declare all variables
    float Purch,StaTx,CounTx,TtSlsTx;
    //Initialize all variables
    Purch=95;
            StaTx=0.04;
            CounTx=0.02;
    //Process or Map solution
            TtSlsTx=Purch*StaTx+Purch*CounTx;
    //Display the output
            cout<<"Total Sales Tax = $"<<TtSlsTx<<endl;
    //Exit the program
    return 0;
}

