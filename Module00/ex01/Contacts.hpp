/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:33:20 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/04 23:59:05 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>

class	Contacts
{
	public:
		Contacts(void);
		Contacts(std::string firstName, std::string lastName, std::string nickname, std::string login, std::string postalAddress, std::string emailAddress, std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal, std::string underwearColor, std::string darkestSecret);
		Contacts(Contacts const &src);
		~Contacts(void);

		Contacts &operator=(Contacts const &src);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};
