#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
             ch = col+ 1 + 'A'-1;
             cout<<ch;
        }
  
            
 //jab tak A tak nhi pahuchte 
 //tabb tak print karte rahenge

 for(char alphabet = ch; alphabet>'A';){
alphabet = alphabet-1;
cout<<alphabet;
 }
        cout<<endl;
    }
}