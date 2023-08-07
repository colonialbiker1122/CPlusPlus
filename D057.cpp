//Create a class MAT of size mxn. Define all possible matrix operations for MAT type objects using operator overloading
#include<iostream>
using namespace std;

const int m = 3;
const int n = 3;
class MAT{
    int mymat[m][n];
  public:
    void getdata() {
        int i,j;
        cout<<"Enter data in 3 x 3 Matrix:\n";
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				cout<<"Enter value of "<<i+1<<" row "<<j+1<<" column:";
				cin>>mymat[i][j];
			}
		}
    }

	void display() {
		int i, j;
		cout<<"Matrix is:\n";
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				cout<<mymat[i][j]<<"\t";
			}
			cout<<endl;
		}
	}

	MAT operator+ (MAT ap) {
		MAT ans;
		int i,j;
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				ans.mymat[i][j] = mymat[i][j] + ap.mymat[i][j];
			}
		}
		return ans;
	}

	MAT operator- (MAT ap) {
		MAT ans;
		int i,j;
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				ans.mymat[i][j] = mymat[i][j] - ap.mymat[i][j];
			}
		}
		return ans;
	}

	friend MAT operator* (int, MAT);
	friend MAT operator* (MAT, int);

	MAT operator* (MAT ap) {
		MAT ans;
		int i, j, k;
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				ans.mymat[i][j] = 0;
				for(k=0; k<3; k++) {
					ans.mymat[i][j] += mymat[i][k] * ap.mymat[k][j];
				}
			}
		}
		return ans;
	}
};

MAT operator* (int sp, MAT ap) {
	MAT ans;
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			ans.mymat[i][j] = sp * ap.mymat[i][j];
		}
	}
	return ans;
}

MAT operator* (MAT ap, int sp) {
	MAT ans;
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			ans.mymat[i][j] = sp * ap.mymat[i][j];
		}
	}
	return ans;
}

int main() {
	MAT m1, m2, m3;
	int s1;
	cout<<"Enter data of first matrix:\n";
	m1.getdata();
	cout<<"Enter data of second matrix:\n";
	m2.getdata();
	m3 = m1 + m2;
	cout<<"Addition result of both matrices is:\n";
	m3.display();
	m3 = m1 - m2;
	cout<<"Subtraction result of both matrices is:\n";
	m3.display();
    
	cout<<"Enter a scalar value: ";
	cin>>s1;
	m3 = m1 * s1;
	cout<<"Multiplication result of first matrix is:\n";
	m3.display();
	m3 = s1 * m2 ;
	cout<<"Multiplication result of second matrix is:\n";
	m3.display();
	
	m3 = m1 * m2;
	cout<<"Matrix Multiplication result is:\n";
	m3.display();
	return 0;
}