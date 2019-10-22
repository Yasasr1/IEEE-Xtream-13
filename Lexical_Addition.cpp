#include <iostream>
#include <vector>

using namespace std;

int main() {
    long int N,A,B,subtractor;
    vector< int > arr;
    cin >> N >> A >> B;
    
    subtractor = B;
    while(N>=A) {
        if(N<=subtractor) {
            subtractor = N;
            N = N - subtractor;
            arr.push_back(subtractor);
        } else {
            if((N-subtractor)<A) {
                if(subtractor<A) {
                    break;
                }else 
                    subtractor--;
            } else {
                N = N - subtractor;
                arr.push_back(subtractor);
            }
        }
    }
    
    if(N == 0) {
        cout << "YES" << endl;
        for (int i = arr.size()-1; i >= 0; i--) {
		    cout << arr.at(i) << ' ';
	    }
    } else {
        cout << "NO";
    }
    return 0;
}