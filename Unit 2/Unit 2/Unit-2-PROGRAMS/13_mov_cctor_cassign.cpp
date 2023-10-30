#include<iostream>
using namespace std;

class Holder
{
	int *m_data;
	int m_size;
	
	public:
		Holder(int size)
		{
			cout<<"ctor cald"<<endl;
			m_data=new int[size];
			for(int i=0;i<size;i++)
			{
				m_data[i]=i;
			}
			m_size=size;
		}
		
		~Holder()
		{
			cout<<"dtror cald"<<endl;
			delete []m_data;
		}
		
		void display()
		{
			cout<<"Data:";
			for(int i=0;i<m_size;i++)
			{
				cout<<m_data[i]<<" ";
			}
			cout<<"size="<<m_size<<endl;
		}
		
//Copy ctor
		Holder(const Holder& other)
		{
			cout<<"cctor cald"<<endl;
			m_data=new int[other.m_size];
			copy(other.m_data,other.m_data+other.m_size,m_data);
/* 	
//OR for loop for copying		
				for(int i=0;i<other.m_size;i++)
				{
					m_data[i]=other.m_data[i];
				}
*/
			m_size=other.m_size;
		}
//Move copy ctor
		Holder(Holder&& other)
		{
			cout<<"Move cctor cald"<<endl;
			m_data=other.m_data;			//Shallow copy,Steal resources from temporary obj
			m_size=other.m_size;			//Shallow copy,Steal resources from temporary obj
			
			
			other.m_data=nullptr;			//Make the state of temporary object safe
			other.m_size=0;					//Make the state of temporary object safe
		}

//Copy assignment operator overloaded
	Holder& operator=(const Holder& other)
	{
		cout<<"Copy assignment called"<<endl;
		if(this!=&other)
		{
			delete[] m_data;	
			m_data=new int[other.m_size];
			copy(other.m_data,other.m_data+other.m_size,m_data);
			m_size=other.m_size;
		}
		return *this;
	}
//Move assignment operator overloaded
		Holder& operator=(Holder&& other)
		{
			cout<<"Move assignment called"<<endl;
			if(this!=&other)
			{
				delete[] m_data;			//To avoid memory leak
				
				m_data=other.m_data;		//Shallow copy, Steal resources from temporary obj
				m_size=other.m_size;		//Shallow Copy, Steal resources from temporary obj
			
			
				other.m_data=nullptr;		//Make the state of temporary object safe
				other.m_size=0;				//Make the state of temporary object safe	
			}
			return *this;
		}
		
		
};
Holder createHolder(int size)
{
	return Holder(size);
}

int main()
{
	Holder h1(5);
	h1.display();
	
	Holder h2(h1);		//cctor
	h2.display();

	Holder h3=move(createHolder(10));		//move cctor
	h3.display();

	h3=h1;						//copy assignment operator
	h3.display();
	h3=move(createHolder(5));	//move assignment operator
	h3.display();
	return 0;	
}

/*
Output:
ctor cald
Data:0 1 2 3 4 size=5
cctor cald
Data:0 1 2 3 4 size=5
ctor cald
Move cctor cald
dtror cald
Data:0 1 2 3 4 5 6 7 8 9 size=10
Copy assignment called
Data:0 1 2 3 4 size=5
ctor cald
Move assignment called
dtror cald
Data:0 1 2 3 4 size=5
dtror cald
dtror cald
dtror cald
*/