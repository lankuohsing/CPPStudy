#include<iostream>
#include<vector>
template<typename T> void printVector ( std::vector<typename T> v ){
    for ( size_t i = 0; i < v.size ( ); i++ ){
        std::cout << v [ i ] << " ";
    }
    std::cout << std::endl;
}
void initVector ( ){
    std::vector<int> v1;//            vector��������ΪT�Ķ���Ĭ�Ϲ��캯����v1Ϊ��
    std::vector<int> v2 ( v1 );//         v2��v1��һ������,���
    int i = 1;
    int n = 5;
    std::vector<int> v3 ( n, i );//        v3����n��ֵΪi��Ԫ��
    std::vector<int> v4 ( n );//        v4����ֵ��ʼ����Ԫ�ص�n������
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
    initVector ( );//��ʼ��vector
    system ( "pause" );
    return 0;
    
}