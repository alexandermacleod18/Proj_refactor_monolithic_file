CFLAGS = -Wall
CC = g++
fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h ../includes/utils.h
	$(CC) $(CFLAGS) -c ../fileio/fileio.cpp

#TODO link (-o) all object files into the executable myexe
main: fileio.o utils.o fileio.o proj_refactor_file.o
	$(CC) $(CFLAGS) -o myexe fileio.o utils.o proj_refactorfiles.o
	
#rebuild object file if fileio.cpp, or fileio.h or constants.h changes
#compile the .cpp file to an object file (-c)
	
#TODO 
utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
	$(CC) $(CFLAGS) -c ../utils/utils.cpp
	
#TODO
proj_refactor_file.o: ../src/proj_refactor_file.cpp ../includes/constants.h ../includes/utils.h ../includes/fileio.h	
	-o proj_refactor_file.cpp

#TODO type 'make clean' to remove myexe and all .o files	
clean:
	rm ../fileio/fileio.o

