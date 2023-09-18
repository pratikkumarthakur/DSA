// #include<iostream>
// using namespace std;

// int main(){
//     for(int row=0; row<5;row++){
//        for(int col=0; col<5; col++){
//         if(row==0 || row== 4 ){
//             cout<< "* ";
//         }else{ 
//             if(col==0 || col==4){
//             cout<<"* ";
//         }
//         else{
//             cout<<" ";
//         }
//         }
//        }
//        cout<<endl;
//     }
//     return 0;
    
// }
#include<iostream>
using namespace std;

//  int ROWS = 10;
	// int COLS = 7;
	// //outer loop
    int main(){
	for(int row=0; row<5; row=row+1 ) {
		//inner loop
		for(int col=0; col<5; col=col+1) {
			//if zeroth or last row, then print star
			if(row == 0 || row == 4) {
				cout << "* ";
			}
			else {
				if(col ==0 || col ==4) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
    }