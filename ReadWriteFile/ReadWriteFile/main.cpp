#include<iostream>
#include<fstream>
#include<string>     //����getline()
using namespace std;
int main( void )
{
	string s;
	ofstream outf;
	ifstream inf;
	inf.open( "D://///data/in.txt" );          //�ر�ע�⣬�����ǣ�//  ��˫б���~~ 
									   //������ļ�
	outf.open( "D:/data/out.txt" );
	while (getline( inf, s ))      //getline(inf,s)�����ж�ȡinf�е��ļ���Ϣ
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