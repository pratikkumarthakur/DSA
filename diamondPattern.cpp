#include<iostream> 
using namespace std;

int main(){
    int num ;
    cin>>num;
    int n = num/2;
    
// full pyramid
    for(int row=0; row<n;row++){
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //stars

        for(int col=0; col<row+1;col++){
            cout<< "* ";
        }
        cout<<endl;
    }
    //inverted full pyramid
    for(int row=0; row<n;row++){
        //spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

 