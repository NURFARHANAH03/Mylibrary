// MyLibrary.h
#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#include <string>
#include <map>

class MyLibrary {
public:
    MyLibrary();  // Empty constructor

    // Function to insert entries into the map
    void insertEntry(const std::string& id, const std::string& password);

    // Existing member functions
    bool checkId(std::string& id);
    bool checkPassword(std::string& id, std::string& password);

private:
    std::map<std::string, std::string> storedIdPasswordMap;
};

#endif

