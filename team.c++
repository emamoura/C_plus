#include <iostream>

using namespace std;

int main() {
    int numberProblems = 0;
    int out = 0;
    int count = 0;
    int number = 0;
    
    cin >> numberProblems;
    
    for(int i =0; i < numberProblems; i++){
        for(int i = 0; i < 3; i++){
            cin >> number;
            if(number == 1){
                count += 1;
            }
        }
        if(count >= 2){
            out += 1;
            count=0;
        }else
        {
            count=0;
        }
        
    }

    cout << out << endl;
    
    return 0;
}