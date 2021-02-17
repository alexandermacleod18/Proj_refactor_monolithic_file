
#ifndef FILEIO_H_
#define FILEIO_H_
#include <vector>
#include "constants.h"
namespace AM{
	//attempt to open file 'filename' and read in all data
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int loadData(const std::string filename, vector<process> &myProcesses);
	

	//attempt to create or open file 'filename' to write all data to
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int saveData(const std::string filename, vector<process> &myProcesses);
}
#endif /* FILEIO_H_ */
