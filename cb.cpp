# include <iostream>
# include <windows.h>
# include <string.h>
using namespace std;

int main()
{
	int  inp;
	string  get,name,age;
	cout<<"welcome to chatting room:  "<<endl;
	cout<<"INSTRUCTIONS TO BE FOLLOWED......"<<endl;
	cout<<"type 1 for talking and 0 for backout from chatting-room: "<<endl;
	cout<<"if u are interested give your response in form of 1 or 0:  "<<endl;
	cin>>inp;
	system("CLS");
	if(inp==1)
	{
	    cout<<"hiii this is system "	<<endl;
	    cin>>get;
	    cout<<"what is your name?  "<<endl;
	    cin>>name;
	    cout<<name<<" "<<"what is your age? "<<endl;
	    cin>>age;
	    cout<<"what is your dream define in 1 word plz? "<<endl;
	    cin>>get;
	    cout<<get<<" "<<"oh that's great..."<<endl;
	    cout<<"bye bye";
	    
	}
	else
	{
		cout<<"welcome for coming..........."<<endl;
	}
	return 0;
	
	
}
