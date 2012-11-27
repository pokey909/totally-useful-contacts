#include "contacts.h"

Contacts::Contacts()
{
}

bool Contacts::find(string name, Person*& person)
{
    person = m_contact[name];
    return (person != NULL);
}

int Contacts::count() const
{
    return m_contact.size();
}

void Contacts::add(Person *person)
{
    m_contact[person->lastName()] = person;
}

void Contacts::remove(string name)
{
    m_contact.erase(name);
}

// // Throwing in random design patterns impresses people
// Contacts& Contacts::instance()
// {
// 	static Contacts* inst = 0;
	
// 	if (!inst)
// 		inst = new Contacts;
		
// 	return inst;
// }






Person::Person(string first_name, string last_name, bool gender)
    : m_firstName(first_name), m_lastName(last_name)
{
    if (gender)
        m_gender = "male";
    else
        m_gender = "female";
}

string Person::firstName() const
{
    return m_firstName;
}

string Person::lastName() const
{
    return m_lastName;
}

string Person::gender() const
{
    return m_gender;
}
