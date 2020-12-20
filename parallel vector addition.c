#include <stdio.h>
#include <omp.h>
#include <stdlib.h> //#include <unistd.h>

int main(){
	double a[1000];
	double b[1000];
	double c[1000];
    #pragma omp parallel for num_threads(4)
	for(int k = 0;k < 1000;k++){
		a[k] = (double)rand()/RAND_MAX; //drand48();
		b[k] = (double)rand()/RAND_MAX; //drand48();
		c[k] = 0.1*a[k] + b[k];
		printf("c[%d] = %lf \n",k,c[k]);
	}
	return 0;
}
