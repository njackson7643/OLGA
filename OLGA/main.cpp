/*
 * main.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: Nick
 */
/* -----------------------------------------------------
OLGA - Optoelectronics Laboratory with Graph Analysis
Nick Jackson jackson.nick.e@gmail.com

See the README file in the top-level OLGA directory
--------------------------------------------------------*/
#include <fstream>
#include <iostream>
#include "parse.h"
#include "input.h"
using namespace std;

//Take command line arguments
int main()
{
//Instantiate myparse object using parse class
Parse myparse;
myparse.SetInp("control.inp");
myparse.GetParam("control.inp");
string output = myparse.m_scale;
string output2 = myparse.GetInpf();
cout << output2;
//Initialize input object with parameters from control.inp file

//string output = myinput.GetInpf();
//cout << output;
//Do data parsing on trajectory file
//Perform structural analysis on data file
}



