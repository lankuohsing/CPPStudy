#include <unordered_map> 
#include<iostream>
#include <string>
using namespace std;
int main( void )
{
	unordered_map<char, int> map;
	map['A'] = 1;
	map.insert( make_pair( 'A', 1 ) ); //这其中用到了std中的另外一个函数make_pair
	if (map.find( 'B' ) == map.end()) { //此时'B'不存在于map的键(key)中
		cout << "can't find B!" << endl;								// do something
	}
	if (map.count( 'B' ) == 0) { //此时'B'不存在于map的键(key)中
		cout << "can't find B!" << endl;							 // do something
	}
	cout << map['A'] << endl;
	unordered_map < string, string > string_map;
	string_map["languoxing"] = "xujuanting";
	cout << string_map["languoxing"] << endl;
	system( "pause" );
	return 0;

}