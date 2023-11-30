/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:18:47 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/30 14:36:27 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class   Animal
{
    protected :
    std::string type;

    public :
    
    Animal();
    Animal(const Animal &animal);
    ~Animal();
    virtual void    makeSound()const;
    std::string getType()const;
    Animal &operator=(const Animal &animal);
};


#endif