#pragma once

#include <iostream>

class Contact {
 public:
  Contact();
  Contact(Contact& contact) = delete;
  Contact& operator=(const Contact& contact);
  ~Contact() = default;

  void getContactInfo(void);
  std::string getName() const;
  std::string getLastName() const;
  std::string getNick() const;
  std::string getNumber() const;
  std::string getPlace() const;

 private:
  std::string _name;
  std::string _lastname;
  std::string _nick;
  std::string _number;
  std::string _place;
};