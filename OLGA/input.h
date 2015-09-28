/*
 * io.h
 *
 *  Created on: Sep 25, 2015
 *      Author: Nick
 */
#ifndef INPUT_H_
#define INPUT_H_
#include <map>
using namespace std;

class Input
{
private:
	string m_wrkdir; //directory that control .inp file can be found in
	string m_inpf; //name of control .inp file to parse for instructions
	string m_dataf; //name of the LAMMPS-style .data file
	string m_trajf; //name of the LAMMPS-style .dump file

public:
	Input() {} //private default constructor
	Input(string inpf); //construct with specific inpf parameter

	void SetInp(string inpf);

	string GetWrkDir() { return m_wrkdir; }
	string GetInpf() { return m_inpf; }
	string GetDataf() { return m_dataf; }
	string GetTrajf() { return m_trajf; }
};

#endif /* INPUT_H_ */
