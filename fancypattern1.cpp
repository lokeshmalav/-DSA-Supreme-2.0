
#include <iostream>
using namespace std;

int main() {
//     int n ;
//     cin>>n;

//     // Upper part of the pattern
//     for (int i = 0; i < n; i++) {
//         // Inverted half pyramid
//         for (int j = 0; j < n - i; j++) {
//             cout << " *";
//         }
//        for (int k = 0; k < 2 * i; k++) {
//             cout << " ";
//        }
//         for (int l = 0; l < 2 * i + 1; l++) {
//             cout << " ";
//         }
//         for (int m = 0; m < n - i; m++) {
//             cout << " *";
//         }
//         cout << endl;
//     }

//     // Lower part of the pattern
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << " *";
//         }
//         for (int k = 0; k < 2 * n - 2 * i - 1; k++) {
//             cout << " ";
//         }
//         for (int l = 0; l < 2 * n - 2 * i -2; l++) {
//             cout << " ";
//         }
//         for (int m = 0; m < i + 1; m++) {
//             cout << " *";
//         }
//         cout << endl;
//     }

//     return 0;
// }
     


   //  ORR



    int num ;
    cin>>num;

	int n = num/2;

	for(int row=0;row<n; row=row+1) {
		//inverted pyramid 1
		for(int col=0; col<n-row; col=col+1) {
			cout << "*";
		}
		//full pyramid 1
		for(int col=0;col<2*row+1; col=col+1) {
			cout << " ";
		}

		//inverted pyramid 2
		for(int col=0; col<n-row; col=col+1) {
			cout << "*";
		}
		cout << endl;
	}


	for(int row=0;row<n; row=row+1) {
		//inverted pyramid 1
		for(int col=0; col<row+1; col=col+1) {
			cout << "*";
		}
		//full pyramid 1
		for(int col=0;col<2*n-2*row-1; col=col+1) {
			cout << " ";
		}

		//inverted pyramid 2
		for(int col=0; col<row+1; col=col+1) {
			cout << "*";
		}
		cout << endl;
	}
}