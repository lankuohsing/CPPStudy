#include<iostream>
#include<vector>
template<typename T> void printVector ( std::vector<typename T> v ){
    for ( size_t i = 0; i < v.size ( ); i++ ){
        std::cout << v [ i ] << " ";
    }
    std::cout << std::endl;
}
void initVector ( ){
    std::vector<int> v1;//            vector保存类型为T的对象。默认构造函数，v1为空
    std::vector<int> v2 ( v1 );//         v2是v1的一个副本,深拷贝
    int i = 1;
    int n = 5;
    std::vector<int> v3 ( n, i );//        v3包含n个值为i的元素
    std::vector<int> v4 ( n );//        v4含有值初始化的元素的n个副本
    for ( int i = 0; i < n; i++ )
    {
        v1.push_back ( i + 1 );
    }
    printVector ( v1 );
    printVector ( v2 );
    printVector ( v3 );
    printVector ( v4 );
}
int main ( void ){
    initVector ( );//初始化vector
    system ( "pause" );
    return 0;
    
}