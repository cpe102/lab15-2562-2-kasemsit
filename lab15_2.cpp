#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	//double data[N][M] = {};
	
	double data[N][M] = {0.38, 0.34, 0.36, 0.17, 0.5, 0.88, 0.71, 0.08, 0.93, 0.85, 0.64, 0.72, 0.31, 0.15, 0.01, 0.86, 0.09, 0.14, 0.22, 0.85, 0.09,0.13, 0.34, 0.42, 0.09, 0.8, 0.77, 0.14, 0.71, 0.55, 0.64, 0.75, 0.55, 1.0, 0.92, 0.04, 0.88, 0.62, 0.12, 0.8, 0.13, 0.77, 0.18, 0.44, 0.58, 0.19, 0.29, 0.67, 0.33};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *data,int N,int M) {
	
	return;
}

void findColSum(const double *data,double *output,int N,int M) {
	
	for (int i=0; i<N; i++) {		
		for (int j=0; j<M; j++) {
			*(output+j) += *(data + i*M+j);						
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
