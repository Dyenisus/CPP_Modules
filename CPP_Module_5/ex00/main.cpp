#include "Bureaucrat.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

static void printHeader(const std::string &title) {
    std::cout << "\n" << BOLD << CYAN << "=== " << title << " ===" << RESET << std::endl;
}

int main() {
    printHeader("TEST 1: Valid Bureaucrat Instantiation & Operator<<");
    {
        try {
            Bureaucrat alice("Alice", 1);
            Bureaucrat bob("Bob", 75);
            Bureaucrat charlie("Charlie", 150);

            std::cout << GREEN << "[SUCCESS] " << RESET << alice << std::endl;
            std::cout << GREEN << "[SUCCESS] " << RESET << bob << std::endl;
            std::cout << GREEN << "[SUCCESS] " << RESET << charlie << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[UNEXPECTED ERROR] " << e.what() << RESET << std::endl;
        }
    }

    printHeader("TEST 2: Constructor Invalid Grades (Too High: 0, -10)");
    {
        try {
            std::cout << YELLOW << "Attempting to create Bureaucrat with grade 0..." << RESET << std::endl;
            Bureaucrat invalid("HighGradeOfficer", 0);
            std::cout << RED << "[FAIL] Should have thrown an exception!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooHighException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooHighException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught generic exception instead of GradeTooHighException: " << e.what() << RESET << std::endl;
        }

        try {
            std::cout << YELLOW << "Attempting to create Bureaucrat with grade -10..." << RESET << std::endl;
            Bureaucrat invalid("NegativeGradeOfficer", -10);
            std::cout << RED << "[FAIL] Should have thrown an exception!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooHighException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooHighException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught generic exception instead of GradeTooHighException: " << e.what() << RESET << std::endl;
        }
    }

    printHeader("TEST 3: Constructor Invalid Grades (Too Low: 151, 200)");
    {
        try {
            std::cout << YELLOW << "Attempting to create Bureaucrat with grade 151..." << RESET << std::endl;
            Bureaucrat invalid("LowGradeOfficer", 151);
            std::cout << RED << "[FAIL] Should have thrown an exception!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooLowException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooLowException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught generic exception instead of GradeTooLowException: " << e.what() << RESET << std::endl;
        }

        try {
            std::cout << YELLOW << "Attempting to create Bureaucrat with grade 200..." << RESET << std::endl;
            Bureaucrat invalid("VeryLowGradeOfficer", 200);
            std::cout << RED << "[FAIL] Should have thrown an exception!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooLowException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooLowException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught generic exception instead of GradeTooLowException: " << e.what() << RESET << std::endl;
        }
    }

    printHeader("TEST 4: Grade Incrementing (Valid & Exception on > 1)");
    {
        try {
            Bureaucrat worker("Worker", 3);
            std::cout << "Initial: " << worker << std::endl;

            worker.incrementGrade();
            std::cout << "After 1st increment (expect grade 2): " << worker << std::endl;

            worker.incrementGrade();
            std::cout << "After 2nd increment (expect grade 1): " << worker << std::endl;

            std::cout << YELLOW << "Attempting 3rd increment beyond grade 1..." << RESET << std::endl;
            worker.incrementGrade();
            std::cout << RED << "[FAIL] Should have thrown GradeTooHighException!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooHighException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooHighException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught unexpected exception: " << e.what() << RESET << std::endl;
        }
    }

    printHeader("TEST 5: Grade Decrementing (Valid & Exception on < 150)");
    {
        try {
            Bureaucrat intern("Intern", 148);
            std::cout << "Initial: " << intern << std::endl;

            intern.decrementGrade();
            std::cout << "After 1st decrement (expect grade 149): " << intern << std::endl;

            intern.decrementGrade();
            std::cout << "After 2nd decrement (expect grade 150): " << intern << std::endl;

            std::cout << YELLOW << "Attempting 3rd decrement beyond grade 150..." << RESET << std::endl;
            intern.decrementGrade();
            std::cout << RED << "[FAIL] Should have thrown GradeTooLowException!" << RESET << std::endl;
        } catch (const Bureaucrat::GradeTooLowException &e) {
            std::cout << GREEN << "[CAUGHT GradeTooLowException] " << e.what() << RESET << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << "[FAIL] Caught unexpected exception: " << e.what() << RESET << std::endl;
        }
    }

    printHeader("TEST 6: Orthodox Canonical Form (Default, Copy, Assignment)");
    {
        Bureaucrat def;
        std::cout << "Default Bureaucrat: " << def << std::endl;

        Bureaucrat original("Original", 42);
        std::cout << "Original Bureaucrat: " << original << std::endl;

        Bureaucrat copy(original);
        std::cout << "Copied Bureaucrat (copy constructor): " << copy << std::endl;

        Bureaucrat assigned("AssignedTarget", 100);
        std::cout << "Before assignment: " << assigned << std::endl;
        assigned = original;
        std::cout << "After assigned = original (grade updated): " << assigned << std::endl;
    }

    printHeader("TEST 7: Polymorphic Exception Handling (std::exception &)");
    {
        try {
            Bureaucrat badBureaucrat("Bad", 999);
        } catch (const std::exception &e) {
            std::cout << GREEN << "[CAUGHT std::exception &] Successfully caught polymorphic exception: " << e.what() << RESET << std::endl;
        }
    }

    printHeader("ALL TESTS COMPLETED");
    return 0;
}
