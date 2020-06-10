#include <iostream>
#include <string>

using namespace std;

int operatorX(int x, string sinal){
    if(sinal == "X++" || sinal == "++X"){
        return x += 1;
    }else{
        return x -= 1;
    }
}

int main() {
    int statementsNumbers;
    int out = 0;
    int x = 0;
    string sinal = "";
    cin >> statementsNumbers;

    for(int i = 0; i < statementsNumbers; i++){
        cin >> sinal;
        out += operatorX(x, sinal);
    }

    cout << out << endl;

    return 0;
}