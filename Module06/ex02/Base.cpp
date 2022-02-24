/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 03:29:50 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 07:46:27 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    
}

Base * generate(void)
{
    srand(time(NULL));
	int random = rand() % 3;
    switch (random)
    {
        case 0:
        {
            std::cout << "A: " << std::endl;
            return new A;
        }
        case 1:
        {
            std::cout << "B: " << std::endl;
            return new B;
        }
        case 2:
        {
            std::cout << "C: " << std::endl;
            return new C;
        }
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;

}

void identify(Base& p)
{
    try
    {
        A &a =dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast f)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(std::bad_cast se)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(std::bad_cast es)
            {
                std::cout << "Problem" << std::endl;
            }
        }
    }
}

int main()
{
    // dynamic_cast conversion
    // Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy.
    Base *b = generate();
    std::cout << "Type Using ref: ";
    identify(b);
    std::cout << "Type Using Pointer: ";
    identify(*b);
    return 0;
}