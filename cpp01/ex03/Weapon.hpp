#pragma once
#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(const std::string &type);
        ~Weapon();
        const std::string& getType() const;
        void setType(const std::string &type);
    private:
        std::string m_type;
};