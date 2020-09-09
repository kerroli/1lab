#include <iostream>
#include <cmath>

int task1();
int task2();
int task3();
int task4();
int task5();

int main() {
    std::cout << task1() << std::endl;
    std::cout << task2() << std::endl;
    std::cout << task3() << std::endl;
    std::cout << task4() << std::endl;
    std::cout << task5() << std::endl;
    return 0;
}

int task1() {
    int x;
    int answ;
    std::cout << "First task, insert:\n";
    std::cin >> x;
    answ=pow(x,6)-5*pow(x,5)-1;
    return answ;
}

int task2(){
    unsigned int x;
    int answ;
    std::cout << "Second task, insert:\n";
    std::cin >> x;
    answ=abs(x+2) + sqrt(x-1);
    return answ;
}

int task3(){
    bool a,b,c,d;
    bool answ;
    std::cout << "Third task, insert:\n";
    std::cin >> a >> b >> c >> d;
    answ=(a||(c^!d)&&!b);
    return answ;
}

int task4(){
    int x;
    int answ;
    std::cout << "Fourth task, insert:\n";
    std::cin >> x;
    answ=pow(2,x);
    return answ;
}

int task5() {
    unsigned char a,b,c,d;
    unsigned char answ;
    std::cout << "Fifth task, insert:\n";
    std::cin >> a >> b >> c >> d;
    answ=(~(c|a)&(b^d));
    return answ;
}