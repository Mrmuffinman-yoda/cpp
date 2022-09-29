#include <iostream>
int main(){
    int x , y;
    std::cout << "Gimme a number lol: ";
    std::cin >> x;
    std::cout <<"Gimme another number not "<< x << ": ";
    std::cin >> y;
    std::cout<< "If you add " << x << " and " << y << "\nYou get " << x+y; 
    return 0;
}