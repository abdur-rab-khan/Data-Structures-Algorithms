// CMS/includes/BusinessContact.hpp
#pragma once

#include "Contact.hpp"

enum class UpdationTypeForB {
    Name = 1,
    PhoneNumber,
    Email,
    Company,
    Website,
};

class BusinessContact : public Contact {
   private:
    std::string company;
    std::string website;

   public:
    BusinessContact(std::string name, std::string phoneNumber, std::string email,
                    std::string company, std::string website);

    void displayContactDetails() const override;
    void updateContact() override;
};