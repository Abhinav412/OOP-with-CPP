/* 
#include<iostream>
using namespace std;

int main()
{
	auto basicLambda=[]{cout<<"Hello, world!";};
	
	basicLambda();
} 
*/

/*
#include<iostream>
using namespace std;

int main()
{
	auto paramLambda=[](int a,int b){return a+b;};
	
	cout<<paramLambda(2,3)<<endl;
	
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	auto paramLambda=[](int a,int b)->int{return a+b;};
	
	cout<<paramLambda(2,3)<<endl;
	
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int v=2,r=2;
	
	auto captureLambda=[v,r]{cout<<v<<" "<<r<<endl;};
	
	captureLambda();
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int v=2,r=2;
	
	auto captureLambda=[=]()mutable{cout<<++v<<" "<<++r<<endl;};
	
	captureLambda();
	
	cout<<v<<" "<<r<<endl;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int v=2,r=2;
	
	auto captureLambda=[&]{cout<<++v<<" "<<++r<<endl;};
	
	captureLambda();
	
	cout<<v<<" "<<r<<endl;
}
*/

#include<iostream>
using namespace std;

int main()
{
	int v=2,r=2;
	
	auto captureLambda=[v,&r]()mutable{cout<<++v<<" "<<++r<<endl;};
	
	captureLambda();
	
	cout<<v<<" "<<r<<endl;
}


