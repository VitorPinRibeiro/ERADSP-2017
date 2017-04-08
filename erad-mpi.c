#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main (int argc, char* argv[]){
	
	int me, qt;
	
	MPI_Init();
	MPI_Comm_rank(MPI_COMM_WORLD, &me);
	MPI_Comm_size(MPI_COMM_WORLD, &qt);
	
	printf("Hello from process %d out of %d\n", me, qt);
	
	return EXIT_SUCCESS;
}
