#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Driver {
public:
    String^ DriverID;
    String^ Name;
    String^ Age;
    String^ License;
    String^ HomeAddress;

    Driver(String^ driverID, String^ name, String^ age, String^ license, String^ homeAddress) {
        DriverID = driverID;
        Name = name;
        Age = age;
        License = license;
        HomeAddress = homeAddress;
    }

    static void SaveDriversToFile(System::Collections::Generic::List<Driver^>^ driverList, String^ filePath) {
        try {
            System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, false); // Overwrite the file
            for each (Driver ^ driver in driverList) {
                writer->WriteLine("Driver ID: " + driver->DriverID);
                writer->WriteLine("Name: " + driver->Name);
                writer->WriteLine("Age: " + driver->Age);
                writer->WriteLine("License: " + driver->License);
                writer->WriteLine("Home Address: " + driver->HomeAddress);
                writer->WriteLine("--------------------------------------------------");
            }
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving drivers to file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
};





