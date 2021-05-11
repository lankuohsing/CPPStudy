#include<iostream>
#include<vector>
void void_pointer_example ( ){
	void* vector1;
    int a = 0;
	std::vector<int> vector2( 10 );
	for ( size_t i = 0; i < vector2.size(); i++ )
	{
        vector2 [ i ] = i;
	}
    vector1 = &vector2;
    for ( size_t i = 0; i < ( ( std::vector<int>* )vector1 )->size ( ); i++ )
    {
        std::cout << ( *( std::vector<int>* )vector1 ) [ i ] << ",";
    }
    std::cout <<a<< std::endl;
}
