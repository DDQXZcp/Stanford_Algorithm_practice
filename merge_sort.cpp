#include<iostream>
using namespace std;

//merge sort
int main(){
	unsigned int a[4] = { 2,4,6,9 };
	unsigned int b[4] = { 1,3,7,8 };
	unsigned int c[8] = { 0 };
	unsigned int i = 0, j = 0;
	for (int k = 0; k < 8; k++) {
		if (a[i] > b[j]) {
			c[k] = b[j];
			cout << b[j] << " j=" << j << " c[k]="<<c[k] << " k=" << k << endl;
			j++;
		}
		else {
			c[k] = a[i];
			cout << a[i] << " i=" << i << " c[k]=" <<c[k] << " k=" << k << endl;
			i++;
		}
	}
	for (int k = 0; k < 8; k++)
		cout << c[k] << endl;

	return 0;
