#include <iostream>
using namespace std;

int main(){

    int listofarray[10];
    cout << "Please input the ten numbers :" ;
    for(int a = 0 ; a < 10; a++){
    cin >> listofarray[a];
    }
    cout <<"The numbers are >> " ;
    for(int a = 0 ; a < 10 ; a++) {
        cout << listofarray[a] << " | ";
    }
    for(int a = 0 ; a < 10 ; a++){
        for(int b = 0;  b < 10-a-1 ; b++){
            if(listofarray[b] > listofarray[b+1] ){
                 int swap = listofarray[b];
                 listofarray[b] = listofarray[b+1];
                 listofarray[b+1] = swap;

            }            
    }
    cout <<endl<<"The bubble sort are :";
    for(int a = 0; a < 10; a++){
        cout << listofarray[a] << " | " ;
    }
}
}

