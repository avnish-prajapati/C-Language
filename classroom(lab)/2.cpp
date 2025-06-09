#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value 8 and 5 "<<endl;
	cin>>n;
	int z=9,y=15,p=1;
		for(int i=1;i<(n*2);i++,z--)
		{
			for(int j=1;j<(n*2);j++)
			{
				if(i!=z) 
				{
				
//				z	
					cout<<" * ";
			
				}
				else {
					cout<<"  ";
				}
				
			}
		
			
			cout<<endl;
		}


	
	return 0;
}
