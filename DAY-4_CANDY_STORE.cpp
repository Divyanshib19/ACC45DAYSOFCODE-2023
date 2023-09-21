#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(y > x)
	    cout << x + 2*(y - x);
	    else
	    cout << y;
	    cout<<endl;
	}
	return 0;
}
