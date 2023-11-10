#include <iostream>

using namespace std;

int main()
{
    int dataSize, M, count;
    
    cin >> dataSize >> M;
    
    if(dataSize > 1000){
        return 0;
    }
    
    int data[dataSize];
    
    for(int i = 0; i < dataSize; i++){
        cin >> data[i];
    }
    
    for(int j = 1; j < dataSize; j++){
        int i = j -1;
        int temp = data[j];
        
        while(i >= 0 && data[i] < temp){
            data[i+1] = data[i];
            i--;
        }
        data[i + 1] = temp;
    }  
    for(int j = 0 ; j < dataSize; j++){
    cout << data[j] << " " ;
    
    
    }
    cout << endl;
    int tempSum = 0;
    count = 0;
    
    for(int j = 0; j < M; j++){
        tempSum += data[j];
        count++;
        
        if(tempSum > M){
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
