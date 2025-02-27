/*
    Exam Task 04. Implementation of search algorithms using the transposition method.

    It is required to write a program that, taking two integer operands as parameters, 
    would return their sum or product depending on an additional flag parameter, for example, calling.
*/


#include <iostream> 

#include <ctime>

using namespace std;

//--.
int main( int argc, char* argv[] ) 
{
    //--. Checking for number of arguments
    if( argc < 4 ) 
    {
        cerr << "Error: Not enough arguments. Use -a for addition or -m for multiplication." << std::endl;
        return 1;
    }

    //--. Checking whether the flag is correct
    string flag = argv[1];
    if( flag != "-a" && flag != "-m" ) 
    {
        std::cerr << "Error: Invalid flag. Use -a for addition or -m for multiplication." << std::endl;
        return 1;
    }

    //--. Converting Arguments to Integers
    int v1 = atoi( argv[2] );
    int v2 = atoi( argv[3] );
    int result;

    //--. Выполнение операции в зависимости от флага
    if( flag == "-a" ) 
    {
        result = v1 + v2;
        std::cout << "Addition result: " << result << std::endl;
    }
    else if( flag == "-m" ) 
    {
        result = v1 * v2;
        std::cout << "Result of multiplication: " << result << std::endl;
    }

    return 0;
}