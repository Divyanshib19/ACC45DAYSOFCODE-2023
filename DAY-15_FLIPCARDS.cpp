#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(x==0 || x==n )
        cout << 0 <<endl;
        else if(n-x > x)
        cout << x <<endl;
        else
        cout << n-x <<endl;
    }
	return 0;
}
