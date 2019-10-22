#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> word;
    for(int i=0; i<N; i++) {
        if(i%2 == 0) {
            word.push_back('y');
        }else if(i+rand()%3==0){
            word.push_back('Y');
        }else if(i%3 == 0) {
            word.push_back('y');
        }else if(i+rand()+24%7<147) {
            word.push_back('Y');
        }else if(i+rand()+27%7<1489) {
            word.push_back('Y');
        }
        else {
            word.push_back('Y');
        }
    }
    
    for (int i = 0; i < word.size(); i++) {
		std::cout << word.at(i);
	}
}