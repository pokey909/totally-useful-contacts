#ifndef CONTACTS_H
#define CONTACTS_H

#include <map>
#include <string>

using namespace std;

class Person
{
public:
    Person(string first_name = "", string last_name = "", bool gender = true);

    string firstName() const;
    string lastName() const;
    string gender() const;

private:
    string m_firstName;
    string m_lastName;
    string m_gender;
};

class Contacts
{
public:
	//static Contacts& instance();
    bool find(string name, Person*& person);
    int     count() const;
    void    add(Person *person);
    void    remove(string name);

protected:
    Contacts();
	
private:
    map<string, Person*> m_contact;
};

#endif // CONTACTS_H
