#include<iostream>
#include<string>
using namespace std;
void getString( string * str_p ) {
	*str_p = "languoxing";
}
void getString2( string **str_pp ) {
	string str = "languoxing";
	**str_pp = str;
	cout << **str_pp << endl;
}
int main( void )
{
	string *str_p = new string();
	string **str_pp = &str_p;
	getString2( str_pp );
	cout << *str_p << endl;
	delete str_p;
	system( "pause" );
	return 0;
}