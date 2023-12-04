/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:18:47 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 18:27:36 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# define BLACK "\033[30m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define SAPIN "\033[38;2;0;96;50m"
# define RED "\033[31m"
# define EMERAUDE "\033[38;2;0;196;140m"
# define GRIS "\033[255;113;30m"
# define ROSE "\033[38;2;169;30;80m"
# define ORANGE "\033[38;5;166m"
# define RESET "\033[1;97m"


class   Animal
{
    protected :
    std::string type;

    public :
    
    Animal();
    Animal(std::string name);
    Animal(const Animal &_animal);
    virtual ~Animal();
    Animal  &operator=(const Animal &_animal);
    virtual std::string getType()const;
    virtual void    makeSound()const;
};


#endif