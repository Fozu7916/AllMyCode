#pragma once
#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    std::string pas;
    std::string user;
    std::string Tpas;
    std::string Tuser;
    bool logged;

public:
    Data();  
    std::string Getpas() const;
    std::string Getuser() const;
    bool Logged() const;
    void Setpas( std::string password);
    void Setuser( std::string username);
    void Newuser( std::string username);
    void Newpas( std::string password);
    void Check();
    void Registr();
    void Login();
    void Beforelogin();
};

#endif // DATA_H