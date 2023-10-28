#include<stdio.h>


void dgemm (int n, double *A, double *B, double *C) { 

	for(int i =0; i < n; ++i) {
		for(int j=0; j<n; ++j) {
			double cij = C[i+j*n];
			for (int k = 0; k < n; k++) {
				cij += (A[i+k*n]) * (B[k+j*n]);
			C[i+j*n] = cij;
			}
		}
	}
	
	for(int i = 0; i < (n*n); i++) {
		printf("%2.0f\n",C[i]);
	}
	
	

}

int main (void) {


	int n = 3;

    	//creating variables
	double c [] = {
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
    	};
	
	double a[] = {
        1, 2, 3,
        4, 5, 6,
        4, 5, 6,
    	};
    	double b[] = {
        1, 2, 3,
        4, 5, 6,
        4, 5, 6,
    	};

	
	dgemm(n,a,b,c);
}











