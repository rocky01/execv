#include <iostream>
#include <algorithm>
#include <iterator>
#include <fstream>

int main( int argc, char* argv[] )
{
    // print all command line arguments
    std::ofstream myfile;
    myfile.open ("last.out");
    myfile << "name of program: " << argv[0] << '\n' ;

    if( argc > 1 )
    {
        myfile << "there are qqqqq" << argc-1 << " (more) arguments, they are:\n" ;
        std::copy( argv+1, argv+argc, std::ostream_iterator<const char*>( std::cout, "\n" ) ) ;
        myfile.close();
    }
}
