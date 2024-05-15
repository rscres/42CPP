#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
    private:
        std::string name;
		int 		position;

    public:
        Zombie(void);
        ~Zombie(void);
        void setName(std::string name);
		void setPosition(int pos);
        void announce(void);
};

Zombie *zombieHorde( int N, std::string name );
void    deleteZombieHorde(Zombie *zombieHorde);

#endif