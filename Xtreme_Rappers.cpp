#include <iostream>

using namespace std;

int main() {
    long int J,K;
    int out = 0;
    cin >> J;
    cin >> K;
    
    while(J>0 && K>0) {
		    if(J>=K) {
		        if(J>=2 && K>=1) {
		            J=J-2;
		            K=K-1;
		        } 
		    }else {
		        if(K>=2 && J>=1) {
		            K=K-2;
		            J=J-1;
		        }
		    }
		    out++;
		}
	cout << out;	
    return 0;
}