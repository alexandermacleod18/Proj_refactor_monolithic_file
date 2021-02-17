#ifndef UTILITIES_H_
#define UTILITIES_H_
using namespace std;
#include <vector>
#include "constants.h"
	//attempt to open file 'filename' and read in all data
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int loadData(const std::string filename, vector<process> &myProcesses);

	//attempt to create or open file 'filename' to write all data to
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int saveData(const std::string filename, vector<process> &myProcesses);

	//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
	//returns nothing
	void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

	//gets the next process from the vector, then removes it from the vector
	//returns removed process
	process getNext(vector<process> &myProcesses);

	//returns the number of entries in the vector
	int getSize(vector<process> &myProcesses);

	//attempt to correct missing data
	//if cannot correct, then drop row
	//return number of rows in myProcesses
	int handleMissingData(vector<process> &myProcesses);

#endif /* UTILS_H_ */
