#include<stdio.h>


int main (void) {


	int n = 4;
/*
	double matrix[n][n], matrix_clear[n][n];

	for(int u = 0; u < 4; u++){
		for(int v = 0; v < 4; v++) {
		matrix[u][v] = v;
		}
	}
	
	for(int u = 0; u < 4; u++){
		for(int v = 0; v < 4; v++) {
		matrix_clear[u][v] = 0;
		}
	}
    
	for(int p = 0; p<n; p++){
		for(int q = 0; q < 4; q++) {
			printf("%2.0f", matrix[p][q]);
		} 
		printf("\n");  
	} */

    	//creating variables
	double matrix_A[n];
	double matrix_B[n];
	double matrix_C[n];
	
	//initializating matrix
	for(int i = 0; i < n; i++) {
		matrix_A[i] = (i+5.0);
		printf("%2.0f", matrix_A[i]);
	}
	
	for(int i = 0; i < n; i++) {
		matrix_B[i] = (double)(i+2.0);
	}
	
	for(int i = 0; i < n; i++) {
		matrix_C[i] = 0.0;
	}
	
	
	
	double (*A)[n] = &matrix_A;
	double (*B)[n] = &matrix_B;
	double (*C)[n] = &matrix_C;
	
	printf("\n");
	for(int i = 0; i < n; i++) {
		printf("%f\n",*(A));
	}
	


/*
	###for(int i = 0; i < n; i++) {
		printf("%2.0f",*A[i]);
	}
	
	
	
	for(int i =0; i < n; i++) {
		for(int j=0; j<n; i++) {
			double (*cij) = C[i+j*n];
			for (int k = 0; k < n; k++) {
				cij += (A[i+k*n]) * (B[k+j*n]);
            
			C[i+j*n] = cij;
			}
		}
	}*/
	return 0;
}









