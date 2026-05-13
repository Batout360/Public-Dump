//multiplicatioon of matrix using opreatiors
#include <iostream>
using namespace std;
int n;
class mat{
	int **arr;
	int a;
	public:
	
	mat(){
		arr = NULL;
		a = 0;
	}
	mat(int n){
		a = n;
		// 2d array
		arr = new int*[a];
		for (int i = 0; i < a; i++){
			arr[i] = new int[a];
		}
	}
	
	// setup
	void setup(){
		for (int i = 0; i < a; i++){
			for(int j =0; j< a; j++){
				cout << "Enter the element at " << i << ' ' << j<< endl;
				cin >> arr[i][j];
			}
		}
	}
	
	//+ operator de
	friend mat operator + (mat, mat);
	
	//- operator de
	friend mat operator - (mat, mat);
	
	//* operator de
	friend mat operator * (mat, mat);
	
	// / operator de
	friend mat operator / (mat, mat);
	
	// display
	void display();
};

//+ operator
mat operator + (mat m1, mat m2){
	mat m3(n);
	for(int i = 0 ; i < m1.a ; i++){
		for (int j = 0; j< m1.a; j++){
			m3.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
		}
	}
	cout << "Addition" << endl;
	m3.display();
	return m3;
}

//-opetaror
mat operator - (mat m1, mat m2){
	mat m3(n);
	for(int i = 0 ; i < m1.a ; i++){
		for (int j = 0; j< m1.a; j++){
			m3.arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
		}
	}
	cout << "substraction:" << endl;
	m3.display();
	return m3;
}

// *operator
mat operator * (mat m1, mat m2)
{
	mat m3(n);
	cout << "multiplication" << endl;
	for (int i = 0; i < m1.a; i++){
		for (int j = 0; j < m1.a; j++){
			for(int k = 0; k < m1.a; k++){
				m3.arr[i][j] += m1.arr[i][k]* m2.arr[k][j];
			}
		}
	}
	m3.display();
	return m3;
}

// /operatot
mat operator / (mat m1, mat m2)
{
	mat m3(n);
	cout << "division" << endl;
	for (int i = 0; i < m1.a; i++){
		for (int j = 0; j < m1.a; j++){
			for(int k = 0; k < m1.a; k++){
				m3.arr[i][j] = m1.arr[k][j] / m2.arr[i][j];
			}
		}
	}
	m3.display();
	return m3;
}

// display
void mat :: display(){
	for (int i = 0; i < a; i++){
		for(int j =0; j< a; j++){
			cout << arr[i][j] << ' ' ;
		}
		cout << endl;
	}
}

int main(){
	cout << "Enter the size of the matrixes: " << endl;
	cin >> n;
	mat m1(n),m2(n),m3(n);
	m1.setup();
	cout << "Now for the 2nd matrix: " << endl;
	m2.setup();
	cout << "1st matrix: " << endl;
	m1.display();
	cout << "2nd matrix" << endl;
	m2.display();
	m3 = m1 + m2;
	m3 = m1 - m2;
	m3 = m1 / m2;
	m3 = m1 * m2;
	return 0;
}