#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	//double data[N][M] = {};
	double data[N][M] = {0.58, 0.07, 0.72, 0.28, 0.12, 0.99, 0.01, 0.33, 0.42, 0.36, 0.08, 0.25, 0.78, 0.08, 0.4, 0.63, 0.73, 0.09, 0.0, 0.11, 0.17, 0.47, 0.97, 0.3, 0.3, 0.78, 0.31, 0.69, 0.36, 0.71, 0.12, 0.6, 0.79, 0.5, 0.89, 0.91, 0.48, 0.56, 0.9, 0.56, 0.92, 0.98, 0.47, 0.7, 0.73, 0.87, 0.99, 0.45, 0.96};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
void randData(double *data,int N,int M) {
	
	return;
}

void findRowSum(const double *data,double *output,int N,int M) {
	
	for (int i=0; i<N; i++) {		
		for (int j=0; j<M; j++) {
			*(output+i) += *(data + i*M+j);						
		}   		
	}
	return;
}

void showData(double *data,int N,int M) {
	
	for (int i=0; i<N; i++) {		
		for (int j=0; j<M; j++) {
			cout << setw(5) << *(data+ i*M+j) << " ";				 
		}   
		cout << '\n';
	}
	
	return;
}
