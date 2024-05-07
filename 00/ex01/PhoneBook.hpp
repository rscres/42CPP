#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	Contact contacts[8];

	public:

		void addContact(Contact contact[8]);
		// void searchContact();
		// void printContacts();
};

#endif