#include "contacts.h"

Contacts::Contacts()
{
}

Person *Contacts::find(string name)
{
    return m_contact[name];
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

string Person::lastName()
{
    return m_lastName;
}

string Person::gender() const
{
    return m_gender;
}
