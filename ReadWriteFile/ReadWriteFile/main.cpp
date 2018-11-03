#include<iostream>
#include<fstream>
#include<string>     //包含getline()
using namespace std;
int main( void )
{
	string s;
	ofstream outf;
	ifstream inf;
	inf.open( "D://///data/in.txt" );          //特别注意，这里是：//  是双斜杠喔~~ 
									   //打开输出文件
	outf.open( "D:/data/out.txt" );
	while (getline( inf, s ))      //getline(inf,s)是逐行读取inf中的文件信息
	{
		outf << s << '\n';
		cout << s << endl;
	}
	inf.close();
	char str[] = "languoxing\
 xujuanting";
	cout << str << endl;
	system( "pause" );
	return 0;
}