#include <unordered_map> 
#include<iostream>
#include <string>
using namespace std;
int main( void )
{
	unordered_map<char, int> map;
	map['A'] = 1;
	map.insert( make_pair( 'A', 1 ) ); //�������õ���std�е�����һ������make_pair
	if (map.find( 'B' ) == map.end()) { //��ʱ'B'��������map�ļ�(key)��
		cout << "can't find B!" << endl;								// do something
	}
	if (map.count( 'B' ) == 0) { //��ʱ'B'��������map�ļ�(key)��
		cout << "can't find B!" << endl;							 // do something
	}
	cout << map['A'] << endl;
	unordered_map < string, string > string_map;
	string_map["languoxing"] = "xujuanting";
	cout << string_map["languoxing"] << endl;
	system( "pause" );
	return 0;

}