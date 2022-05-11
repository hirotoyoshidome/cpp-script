#include <iostream>
#include "Logger.hpp"
#include <chrono>
#include<string>


std::string Logger::fileName = "";
FILE* Logger::file = NULL;

void Logger::Initialize(const std::string& fileName)
{
    Logger::fileName = fileName;
    file = fopen(fileName.data(), "w");
    
    if ( file == NULL )
    {
        std::cout << "error" << std::endl;
        exit(0);
    }
}

void Logger::info(const std::string& msg)
{
    auto time_p = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(time_p);
    std::string time_str = std::ctime(&time);
    time_str.resize(time_str.size() - 1);

    fprintf(file, "[%s] %s\n", time_str.c_str(), msg.c_str());
    fflush(file);
}
