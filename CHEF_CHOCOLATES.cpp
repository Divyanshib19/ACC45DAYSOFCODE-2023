#include <iostream>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	
	while(t--){
	    
	    int x , y , z;
	    cin >> x >> y >> z;
	    
	    int cost = 5*x + 10*y;
	    
	    int total_ans = cost/z;
	    
	    cout << total_ans << endl;
	}
	return 0;
}