#include<iostream> 
using namespace std;

int main(){
    int num;
    cin>>num;
    int n = num/2;
    
    for(int row=0; row<n;row++){
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //stars

        for(int col=0; col<row+1;col++){
            if(col==0 || col==row+1-1){
            cout<< "* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    for(int row=0; row<n;row++){
        //spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars

        for(int col=0; col<2*n-2*row-1;col++){ //col<n-row
            if(col==0 || col==2*n-2*row-1-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}
