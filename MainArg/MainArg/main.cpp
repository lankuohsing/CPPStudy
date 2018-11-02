#include <iostream>
using namespace std;
/*
1. 其中，argc = argument count ：表示传入main函数的数组元素个数，为int类型;
2. 而 argv = argument vector ：表示传入main函数的指针数组，为char**类型。
3. 第一个数组元素argv[0]是程序名称，并且包含程序所在的完整路径。
4. argc至少为1，即argv数组至少包含程序名。
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