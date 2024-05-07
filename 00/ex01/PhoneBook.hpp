#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];

	public:

		void addContact();
		void searchContact();
		// void printContacts();
};

#endif