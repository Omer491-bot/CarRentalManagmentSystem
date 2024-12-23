#pragma once
#include <string>
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Customer
{
public:
    String^ CustomerName;
    String^ Email;
    String^ PhoneNumber;
    String^ Address;

    // Constructor to initialize the customer object
    Customer(String^ name, String^ email, String^ phone, String^ address)
    {
        CustomerName = name;
        Email = email;
        PhoneNumber = phone;
        Address = address;
    }

    // Method to return a string representation of the customer
    virtual String^ ToString() override
    {
        return CustomerName + "," + Email + "," + PhoneNumber + "," + Address;
    }
};





