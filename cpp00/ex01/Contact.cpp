#include "Contact.hpp"

Contact::Contact() {
  _name = "Unknown";
  _lastname = "Unknown";
  _nick = "Unknown";
  _number = "Unknown";
  _place = "Unknown";
}

Contact& Contact::operator=(const Contact& contact) {
  if (this != &contact) {
    this->_name = contact._name;
    this->_lastname = contact._lastname;
    this->_nick = contact._nick;
    this->_number = contact._number;
    this->_place = contact._place;
  }
  return *this;
}

void Contact::getContactInfo() {
  while (true) {
    std::cout << "Enter name: ";
    std::getline(std::cin, _name);
    if (_name.empty()) {
      std::cout << "Error: field could not be empty." << std::endl;
      continue;
    }
    break;
  }
  while (true) {
    std::cout << "Enter lastname: ";
    std::getline(std::cin, _lastname);
    if (_lastname.empty()) {
      std::cout << "Error: field could not be empty." << std::endl;
      continue;
    }
    break;
  }
  while (true) {
    std::cout << "Enter nickname: ";
    std::getline(std::cin, _nick);
    if (_nick.empty()) {
      std::cout << "Error: field could not be empty." << std::endl;
      continue;
    }
    break;
  }
  while (true) {
    std::cout << "Enter number: ";
    std::getline(std::cin, _number);
    if (_number.empty()) {
      std::cout << "Error: field could not be empty." << std::endl;
      continue;
    }
    break;
  }
  while (true) {
    std::cout << "Enter place: ";
    std::getline(std::cin, _place);
    if (_place.empty()) {
      std::cout << "Error: field could not be empty." << std::endl;
      continue;
    }
    break;
  }
}

std::string Contact::getName() const { return _name; }

std::string Contact::getLastName() const { return _lastname; }

std::string Contact::getNick() const { return _nick; }

std::string Contact::getNumber() const { return _number; }

std::string Contact::getPlace() const { return _place; }