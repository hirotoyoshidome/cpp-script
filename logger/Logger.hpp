#include<string>
#ifndef LOGGER_H
#define LOGGER_H


class Logger
{
    public:
        static void Initialize(const std::string& fileName);
        static void info(const std::string& msg);
    protected:
        static std::string fileName;
        static FILE* file;
};

#endif
