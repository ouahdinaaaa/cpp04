/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:35:03 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 17:40:53 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private :
    Brain *braiin;

    public :
    Cat();
    Cat(std::string type);
    virtual ~Cat();
    Cat(const Cat &miaou);
    Cat &operator=(const Cat &miaou);
    Brain *getBrain()const;

    void    makeSound(void)const;
    void    AddIdeasToBrain(int index, const std::string ideeas);
};