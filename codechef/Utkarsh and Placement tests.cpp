#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    char T[3],R[2];
	    int pos1=-1,pos2=-1;
	    cin>>T[0]>>T[1]>>T[2];
	    cin>>R[0]>>R[1];
	    for(int i=0;i<3;i++)
	    {
	        if(T[i]==R[0])
	        pos1=i;
	        else if(T[i]==R[1])
	        pos2=i;
	    }
	    if(pos1>pos2)
	    cout<<R[1]<<"\n";
	    else
	    cout<<R[0]<<"\n";
	}
	return 0;
}
