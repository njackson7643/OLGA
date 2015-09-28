/*
 * io.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: Nick
 */
#include <iostream>
#include <fstream>
#include "input.h"
using namespace std;

//Input constructor
Input::Input(string inpf)
{
	SetInp(inpf);
}

//Function that sets input variables to those read from .inp file
void Input::SetInp(string inpf)
{
	string line;
	m_inpf = inpf;
	ifstream myfile (inpf);
	//If this file is open and working
	if (myfile.is_open())
	{
		//set delimiter for parsing input file string
		string delimiter = " ";
		while (getline (myfile,line) )
		{
			//find marker value in string to split from
			int marker = line.find(delimiter);
			string token1 = line.substr(0, marker);
			string token2 = line.substr(marker);
			//Set name of data file to be analyzed
			if (token1 == "data_file")
			{
				m_dataf = token2;
			}
			//Set name of trajectory file to be analyzed
			else if(token1 == "traj_file")
			{
				m_trajf = token2;
			}
;		}
		myfile.close();
	}
	else cout << "Unable to open file";
}


