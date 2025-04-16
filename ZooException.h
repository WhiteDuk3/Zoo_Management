#ifndef ZOOEXCEPTION_H
#define ZOOEXCEPTION_H

#include <string>
#include <exception>

using namespace std;

class ZooException : public exception {
private:
    string errorMessage;
public:
    ZooException(const string &errorMessage);
    virtual const char* what() const noexcept override;
};

#endif
