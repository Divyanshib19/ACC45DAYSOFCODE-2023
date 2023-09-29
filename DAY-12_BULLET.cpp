#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z, m;
	    cin >> x >> y >> z;
	    m = y/x;
	    if(m<z){
	        cout << z-m << endl;
	    }
	    else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}
