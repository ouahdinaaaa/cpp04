/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:09:54 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 21:30:49 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

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

class Brain
{
    private:
    std::string ideas[100];
    
    public:
    
    Brain();
    Brain(const Brain &object);
    Brain(std::string name);
    Brain &operator=(const Brain &object);
    virtual ~Brain();
    virtual void    AddIdeas(int index, std::string ideaaa);
    virtual std::string getIdea(int index) const;
};


#endif