#include<iostream>
#include<string>
using namespace std;
void getString( string * str_p ) {
	*str_p = "languoxing";
}
int main( void )
{
	string *str_p = new string();
	getString( str_p );
	cout << *str_p << endl;
	delete str_p;
	system( "pause" );
	return 0;
}