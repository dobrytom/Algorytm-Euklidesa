#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int euklides(int a, int b)
{
	int NWD, dzielenie, modulo, i;
	if(a == b)
	{
		NWD = a;
	}	
	if(a > b)
	{
		while (modulo > 0)
		{
			dzielenie=a/b;
			modulo=a%b;
			cout<<a<<"="<<dzielenie<<"*"<<b<<"+"<<modulo<<endl;
			NWD=b;
			a=b;
			b=modulo;
	}
		}
	if( a < b)
	{
			while (modulo > 0)
		{
			dzielenie=b/a;
			modulo=b%a;
			cout<<b<<"="<<dzielenie<<"*"<<a<<"+"<<modulo<<endl;
			NWD=a;
			b=a;
			a=modulo;
		}
	}
	cout<<"Najwiekszy Wspolny dzielnik to:";
	cout<<NWD<<endl;
	system("pause");
	return 0;
}

int main() 
{
	int a, b;
	cout<<"Pierwsza liczba:"<<endl;
	cin>>a;
	if (a == 0)
	{
		cout<<"niedozwolona operacja"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Druga liczba:"<<endl;
	cin>>b;
	if (b == 0)
	{
		cout<<"niedozwolona operacja"<<endl;
		system("pause");
		return 0;
	}
	euklides(a,b);
	system("pause");
	return 0;
	/*int a, b, NWD, dzielenie, modulo, i;
	cout<<"Wpisz 1 liczbe:"<<endl;
	cin>>a;
	if(a == 0)
	{
		cout<<"Niedozwolona operacja!"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Wpisz 2 liczbe:"<<endl;
	cin>>b;
		if(b == 0)
	{
		cout<<"Niedozwolona operacja!"<<endl;
		system("pause");
		return 0;
	}
	if(a > b)
	{
		while (modulo > 0)
		{
			dzielenie=a/b;
			modulo=a%b;
			cout<<a<<"="<<dzielenie<<"*"<<b<<"+"<<modulo<<endl;
			NWD=b;
			a=b;
			b=modulo;
		}
	}
	if( a < b)
	{
			while (modulo > 0)
		{
			dzielenie=b/a;
			modulo=b%a;
			cout<<b<<"="<<dzielenie<<"*"<<a<<"+"<<modulo<<endl;
			NWD=a;
			b=a;
			a=modulo;
		}
	}
	if(a == b)
	{
		NWD = a;
	}
	cout<<"Najwiekszy Wspolny dzielnik to:";
	cout<<NWD<<endl;
	system("pause");
	return 0;*/
}
