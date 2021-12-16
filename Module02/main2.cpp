#include <iostream>


class A
{
    private:
    int x;
    public:
    A(int a)
    {
        x = a;
    }
    bool operator==(A const &test)
    {
        if (this->x == test.x)
            return (true);
        return (false);
    }
};


int main()
{
    A test1(10);
    A test2(11);

if (test1 == test2)
    std::cout << "True" << std::endl;
else 
    std::cout << "false" << std::endl;

   


}