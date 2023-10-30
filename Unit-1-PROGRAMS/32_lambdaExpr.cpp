/*
#include<iostream>
#include<algorithm>
using namespace std;

int predicate(int i)
{
	return i%2==0;
}
int main()
{
	int arr[]={10,15,20,25,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	auto res=count_if(arr,arr+n,predicate);
	cout<<"No. of even numbers="<<res<<endl;
}
*/

/*
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={10,15,20,25,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	auto res=count_if(arr,arr+n,[](int i){return i%2!=0;});
	cout<<"No. of odd numbers="<<res<<endl;
}
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={10,15,20,25,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int value=25;
	
	auto res=count_if(arr,arr+n,[value](int i){return i>value;});
	cout<<"No. of elements greater than 25="<<res<<endl;
}