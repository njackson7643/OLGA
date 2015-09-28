/*
 * parse.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: Nick
 */
/*
 * io.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: Nick
 */
#include <iostream>
#include <fstream>
#include "parse.h"
#include "input.h"
using namespace std;

//Parse constructor
Parse::Parse(string inpf)
{
	//Get Parse params from input file
	GetParam(inpf);
	//Initialize map between atomic mass and atom name
	AtomMass[1.0]="H";
	AtomMass[4.0]="He";
	AtomMass[6.9]="Li";
	AtomMass[9.0]="Be";
	AtomMass[10.8]="B";
	AtomMass[12.0]="C";
	AtomMass[14.0]="N";
	AtomMass[16.0]="O";
	AtomMass[19.0]="F";
	AtomMass[20.2]="Ne";
	AtomMass[23.0]="Na";
	AtomMass[24.3]="Mg";
	AtomMass[27.0]="Al";
	AtomMass[28.1]="Si";
	AtomMass[31.0]="P";
	AtomMass[32.1]="S";
	AtomMass[35.5]="Cl";
}

//Function that sets parse variables to those read from .inp file
void Parse::GetParam(string inpf)
{
	string line;
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
			if (token1 == "unwrap_xyz")
			{
				m_unwrap = token2;
			}
			//Set name of trajectory file to be analyzed
			else if(token1 == "scale_xyz")
			{
				m_scale = token2;
			}
			//Determine whether side-chains should be cleaved or not
			else if(token1 == "cleaveSC")
			{
				m_cleaveSC = token2;
			}
			//Set snapshot in traj file to begin analysis
			else if(token1 == "parse_start")
			{
				m_parsestart = token2;
			}
			//Set snapshot sampling for trajectory interal
			else if(token1 == "parse_step")
			{
				m_parsestep = token2;
			}
			//Set the last snapshot to use for sampling in traj file
			else if(token1 == "parse_end")
			{
				m_parseend = token2;
			}
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}

void GetAtomData(string dataf)
{
	string start_mass_parse = "off";
	string start_atoms_parse = "off";
	string start_bonds_parse= "off";
	string line;
	ifstream myfile (dataf);
	while( getline (myfile,line))
	{
		stringstream linestream(line);
		string data;

	}
}




