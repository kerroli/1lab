#include <iostream>
#include <cmath>
#include <iomanip>

int task1();
int task2();
int task3();
int task4();
int task5();

int main() {
    std::cout << "Hi there" << std::endl;
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
}
// 1
int task1() {
    int x; // min -2 147 483 648, max 2 147 483 647, -2^31 ; 2^31-1
    std::cout << "First task, insert x:\n";
    std::cin >> x;
    std::cout << std::fixed << std::setprecision(3) << "Answer: "<< pow(x,6)-5*pow(x,5)-1 << std::endl;
    return 0;
}
// 2
int task2() {
    unsigned int x; // min 0, max 4 294 967 295, 2^32-1
    std::cout << "Second task, insert a:\n";
    std::cin >> x;
    if (x<1)
    {
        std::cout << "No Answer\nSqrt can not be <0\n";
        return 0;
    }
    std::cout << std::setprecision(0) << std::showpos << "Answer: "<< (x+2) + sqrt(x-1) << std::endl; // abs(x+2) ne nuzhno tk odz x>=1
    return 0;
}
// 3
int task3() {
    bool n, l, m, k;
    bool answ;
    std::cout << "Third task, insert n, l, m, k:\n";
    std::cin >> n >> l >> m >> k;
    answ = (n&&l||(m^!k));
    if (answ == 1) {
        std::cout << "Answer: True" << std::endl;
    } else {
        std::cout << "Answer: False" << std::endl;
    }
    return 0;
}
// 4
int task4() {
    unsigned short int x;  // min 0, max 65535, 2^16-1
    int answ;
    std::cout << "Fourth task, insert b:\n";
    std::cin >> x;
    answ = pow(2,x);
    if ( x >= 0 && x <= 7 ) {
        std::cout << std::noshowpos << "Answer: " << answ << " ";
        std::cout << std::oct << answ << std::endl;
        return 0;
    }
    std::cout << "No Answer\nb exist in [0;7]\n";
    return 0;
}
// 5
int task5() {
    unsigned short int d, c, e, f; // min 0 max 65535
    unsigned short int answ;
    std::cout << "Fifth task, insert c, d, e, f:\n";
    std::cin >> d >> c >> e >> f;
    answ=((!d|c)&e^f);
    std::cout << "Answer: ";
    std::cout << std::hex << std::setw(6) << std::setfill('0') << std::showbase << std::internal << answ << std::endl;
    return 0;
}
