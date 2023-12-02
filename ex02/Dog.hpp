/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:48 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/01 10:38:35 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain *braiin;
    
    public:   
    Dog();
    ~Dog();
    Dog(const Dog &dog);
    
    Dog     &operator=(const Dog &dog);
    Brain   *getBrain(void)const;
    void    makeSound(void)const;
    void    AddIdeaToBrain(int index, const std::string ideaas);
};

