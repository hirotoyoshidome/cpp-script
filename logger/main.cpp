#include "Logger.hpp"


int main()
{
    Logger::Initialize( "Log.txt" );
    Logger::info("test.");
    return 0;
}
