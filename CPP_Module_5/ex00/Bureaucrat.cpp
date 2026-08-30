#include "Bureaucrat.hpp"

// Orthodox Canonical Form
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

// Getters
const std::string &Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

// Grade modifiers
void Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
}

// Nested Exception what() definitions
const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high! Minimum grade value is 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low! Maximum grade value is 150.";
}

// Stream insertion operator overload
std::ostream &operator<<(std::ostream &o, const Bureaucrat &b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return o;
}
