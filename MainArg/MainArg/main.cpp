#include <iostream>
using namespace std;
/*
1. ���У�argc = argument count ����ʾ����main����������Ԫ�ظ�����Ϊint����;
2. �� argv = argument vector ����ʾ����main������ָ�����飬Ϊchar**���͡�
3. ��һ������Ԫ��argv[0]�ǳ������ƣ����Ұ����������ڵ�����·����
4. argc����Ϊ1����argv�������ٰ�����������
*/
int main( int argc, char* argv[] )
{
	char aa[2][20] = { "lightgbm.exe","config=train.conf" };
	int ac = 2;
	for (int i = 0; i<argc; i++)
		cout << argv[i] << endl;
	system( "pause" );
	return 0;
}