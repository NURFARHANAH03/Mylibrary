// MyLibrary.cpp
#include "Codelibrary.h"

MyLibrary::MyLibrary() {}

void MyLibrary::insertEntry(const std::string& id, const std::string& password) {
    storedIdPasswordMap[id] = password;
}

bool MyLibrary::checkId(std::string& id) {
    return storedIdPasswordMap.find(id) != storedIdPasswordMap.end();
}

bool MyLibrary::checkPassword(std::string& id, std::string& password) {
    std::map<std::string, std::string>::iterator it = storedIdPasswordMap.find(id);
    if (it != storedIdPasswordMap.end()) {
        return it->second == password;
    }
    return false;
}
