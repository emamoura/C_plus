#include <iostream>
#include <string>

using namespace std;

string reduce(string word){
    string aux = "";
    aux += word.at(0);
    
    aux += std::to_string(word.length());
    aux += word.at(word.length() - 1);

    return aux;
}

int main() {

    int lines;
    string word;
    cin >> lines;

    for(int i = 0; i < lines; i++){
        cin >> word;
        if(word.length() > 10){
            cout << reduce(reduce(word)) << endl;
        }else{
            cout << word << endl;
        }
    }

    return 0;
}