#include <vector>
#include "../includes/utils.h"
#include "../includes/fileio.h"
#include "../includes/constants.h"

using namespace std;
int main() {
		vector<process> myProcesses;
	

		//assumme failure
		int iRet = FAIL;
	

		//get raw data
		iRet = loadData(SOURCE_FILE, myProcesses);
		if (iRet != SUCCESS)
			return iRet;
	

		iRet = handleMissingData(myProcesses);
		if (iRet != SUCCESS)
			return iRet;
	

		//sort the data
		sortData(SORT_ORDER::START_TIME,myProcesses);
	

		//how many entries in vector
		iRet = getSize(myProcesses);
		if (iRet < EMPTY)
			return iRet;
	

		process p = getNext(myProcesses);
		if (p.cpu_time == UNINITIALIZED)
			return
	

		//save processed data
		iRet = saveData(RESULTS_FILE, myProcesses);
		return iRet;
	}

