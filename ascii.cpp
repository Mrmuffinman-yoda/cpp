#include <iostream>
int main(){
    std::string name = "Harison ";
    std::string lastname ="Sundaramoorthy";
    name[0] = lastname[0] = 'J';
    const std::string fullname = name.append(lastname);
    std::cout <<name;
}