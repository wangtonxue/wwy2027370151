#include <iostream>


void printHello()
{
    std::cout << "Hello\n";
}

void printfHello(std::string str = "Hello\n")
{
    std::cout << str;
}

template <typename T>
T sum(T a,T b)
{
    return a + b;
}


class Person
{
public:
    Person() {};
    Person(std::string name, int age) {
        m_name = name;
        m_age = age;
    };

    void printInfo() {
        std::cout << m_name;
        std::cout << m_age;
    }

    //类的成员变量
    std::string m_name;
    int m_age;
};

int main()
{
    /*std::cout << "Hello world\n";
    printHello();
    printfHello("world\n");
    std::cout << sum<int>(1, 2);
    std::cout << "\n";
    std::cout << sum<double>(1.2, 2.5);*/
    Person* p = new Person;
    Person* p1 = new Person("lesson", 20);
    p1->m_name;
    p1->printInfo();



}