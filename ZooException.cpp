#include "ZooException.h"

using namespace std;

ZooException::ZooException(const string &errorMessage) {
    this->errorMessage = errorMessage;
}

const char* ZooException::what() const noexcept {
    return errorMessage.c_str();
}
