#include <stdio.h>
#include <string.h>

int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 return 0 ;
}//end function

int *GetSet( int * ) {
	int *data, num ;
	printf( "Enter the number of member : " ) ;
	scanf( "%d", &num ) ;
	
	for( int i = 0 ; i < num ; i++ ) {
		printf( "Data No[%d] : ", i + 1 ) ;
		scanf( "%d", &data[ i ] ) ;
	}
	printf( "All MEMBERS %d \n", num) ;
	for( int j = 0 ; j < num ; j++ ) {
		printf( "data member  %d : %d\n", j + 1, data[ j ] ) ;
	}
}

