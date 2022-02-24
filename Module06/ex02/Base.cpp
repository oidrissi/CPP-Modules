/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 03:29:50 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 05:59:21 by oidrissi         ###   ########.fr       */
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
            return new A;
        }
        case 1:
        {
            return new B;
        }
        case 2:
        {
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
    try{
        A &a =dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast e){
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;

            std::cout << "B" << std::endl;
        }
        catch(std::bad_cast e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(std::bad_cast e)
            {
                std::cout << "mok" << std::endl;
            }
        }
    }
}

int main()
{
    Base *b = generate();
    identify(b);
    identify(*b);
    return 0;
}