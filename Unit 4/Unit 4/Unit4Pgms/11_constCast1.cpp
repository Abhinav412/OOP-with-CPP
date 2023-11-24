//pgm09_constCast1.cpp
#include <iostream>
using namespace std;

void print(char * str) { cout << str<<endl; }

int main() 
{
	const char *c = "sample text";
 //   print(c);  // error: ’void print(char *)’: cannot convert argument 1 from ’const char *’ to ’char *’

	print(const_cast<char *>(c));	   //Removes the constness associated with 'c' and passes to print()
	return 0;
}

/*Output:
sample text
*/
