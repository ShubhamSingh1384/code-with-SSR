#include <iostream>
using namespace std;

int main() {
	int number;
	    cin >> number;
	    bool  is_first = 1;
	    while(number)
	    {
	        if(is_first)
	        {
	            if(number % 10 == 0)
	            {
	                
	            }
	            else
	            {
	                cout << number % 10;
	                is_first = 0;
	            }
	        }
	        else
	        {
	        cout << number % 10;
	        is_first = 0;
	        }
	        number = number /10;
	    }
	    cout << endl;
	
	return 0;
}
