/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int dataSize, L, R;
    
    cin >> dataSize >> L >> R;
    int data[dataSize];
    if(dataSize > 1000){
        return 0;
        
    }
    for(int i = 0; i < dataSize; i++){
        cin >> data[i];
    }
    for(int i = L; i < R; i++){
        for(int j = L; j < R; j++){
        if(data[j] > data[j+1]){
        int temp = data[j];
        data[j] = data[j+1];
        data[j+1] = temp;
        }
        }
        }
       
    
    for(int j = 0 ; j < dataSize; j++){
        cout << data[j] << " ";
    }

    return 0;
}