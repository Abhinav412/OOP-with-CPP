/* 
#include<iostream>
using namespace std;

namespace first
{
	int a=1;
}

int a=2;

int main()
{
	cout<<a<<endl;
	cout<<first::a<<endl;
} 
*/

#include<iostream>
using namespace std;

namespace first
{
	int a=1;
}

int a=2;
namespace second
{
	int a=5;
}
using namespace first;
int main()
{
	cout<<::a<<endl;
	cout<<first::a<<endl;
	cout<<second::a<<endl;
}