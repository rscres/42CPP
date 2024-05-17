/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:54:51 by renato            #+#    #+#             */
/*   Updated: 2024/05/16 22:00:05 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

typedef enum e_levels {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
}   t_levels;

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );
};

#endif