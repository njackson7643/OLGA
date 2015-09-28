#ifndef PARSE_H_
#define PARSE_H_
#include "input.h"
#include <map>

class Parse : public Input
{
public:
	string m_unwrap; //(y/n) unwrap lammps traj xyz coords?
	string m_scale; //(y/n) scale lammps traj xyz coords?
	string m_cleaveSC; //(y/n) cleave side-chains from xyz coords?
	string m_parsestart; //snapshot to begin parsing from
	string m_parsestep; //snapshot intervals to take in trajectory
	string m_parseend; //final snapshot to take in trajectory
	map<float,string> AtomMass; //map between atom name and mass
	int num_atom_type;
	int num_atoms;
	int num_bonds;

	//need to figure out what brett stores and declare it all up here

	Parse() {} //private default constructor
	Parse(string inpf); //construct with specific inpf parameter

	//Set parse parameters using .inp file
	void GetParam(string inpf);
	//Set atomic masses


	//Parse .data file and store all relevant values
	void GetAtomData(string dataf);
	//Parse trajectory into individual .dump snapshots
	//void ParseDriver(char m_parsestart, char m_parsestep, char m_parseend);

	string GetUnwrap() { return m_unwrap; }
	string GetScale() { return m_scale; }
	string GetCleaveSC() { return m_cleaveSC; }
	string GetParsestart() { return m_parsestart; }
	string GetParsestep() { return m_parsestep; }
	string GetParseend() { return m_parseend; }
};

#endif /* PARSE_H_ */

