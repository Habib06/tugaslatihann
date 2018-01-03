#include <iostream>
#include <cmath>
using namespace std;

void tampilMatrix3x5(double array[3][5]) {
	for(int x=0; x<3; x++) {
		cout << array[x][0];
		for(int y=1; y<5; y++) {
			cout << " | " << array[x][y];
		} cout << endl;
	} cout << endl;
}
int main(){
	// DEKLARASI VARIABEL, ARRAY DAN ISI DATA
	int x,y;
	double 	arrayM[5],
			arrayH[3],
			matrixR[3][5],
			matrixRxW[3][5],
			arrayW[5] = {5,3,4,4,2},
			array[3][5] = {
					{4,4,5,3,3},
					{3,3,4,2,3},
					{5,4,2,2,2}
			};
			
			
				// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
		// AMBIL NILAI MAX TIAP KRITERIA
	for(x=0; x<5; x++) {
		arrayM[x] = max(array[0][x], max(array[1][x],array[2][x]));
	}
	
		// BUAT MATRIKS R
	for(x=0; x<3; x++) {
		for(y=0; y<5; y++) {
			matrixR[x][y] = array[x][y] / arrayM[y];
		}
	}
