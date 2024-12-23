#pragma once
#include <string>
#include <fstream>
#include <vector>

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Admin {
private:
    String^ username;
    String^ password;
    static const int MAX_ADMINS = 5;

public:
    Admin() {
        username = nullptr;
        password = nullptr;
    }

    Admin(String^ newUsername, String^ newPassword) {
        username = newUsername;
        password = newPassword;
    }

    // CREATE - Add new admin to the file with a limit of 5 admins
    void createAdmin(String^ newUsername, String^ newPassword) {
        // Check the number of admins already in the file
        int adminCount = countAdmins();
        if (adminCount >= MAX_ADMINS) {
            Console::WriteLine("Admin limit reached. Cannot create more than 5 admins.");
            return;
        }

        // Open the file to append the new admin details
        StreamWriter^ writer = gcnew StreamWriter("C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\admins.txt", true);
        writer->WriteLine(newUsername + "," + newPassword); // Save username and password
        writer->Close();
        Console::WriteLine("Admin account created successfully.");
    }
    void clearAllAdmins() {
        // Overwrite the file with an empty file to clear all content
        StreamWriter^ writer = gcnew StreamWriter("C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\admins.txt", false); // 'false' to overwrite
        writer->Close();

        // Notify the user
        MessageBox::Show("All admin accounts have been cleared.", "Delete Admins", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    // READ - Check if the login details match
    bool loginAdmin(String^ inputUsername, String^ inputPassword) {
        // Read all the lines from the file to check login
        StreamReader^ reader = gcnew StreamReader("C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\admins.txt");
        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ adminData = line->Split(',');
            if (adminData[0] == inputUsername && adminData[1] == inputPassword) {
                reader->Close();
                Console::WriteLine("Login successful. Redirecting to Admin Dashboard...");
                return true; // Login Success
            }
        }
        reader->Close();
        Console::WriteLine("Invalid username or password.");
        return false; // Login Failed
    }
    // Generate Report - Show all admins in a MessageBox
    void generateReport() {
        // Path to the file
        String^ filePath = "C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\admins.txt";

        // Check if the file exists
        if (!File::Exists(filePath)) {
            MessageBox::Show("No admin records found.", "Admin Report", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        // Read all the lines from the file
        StreamReader^ reader = gcnew StreamReader(filePath);
        String^ report = "Admin Report:\n\n"; // Header for the report
        String^ line;

        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ adminData = line->Split(',');
            report += "Username: " + adminData[0] + ", Password: " + adminData[1] + "\n";
        }

        reader->Close();

        // Display the report in a MessageBox
        MessageBox::Show(report, "Admin Report", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }





private:
    // Helper function to count the number of admins in the file
    int countAdmins() {
        int count = 0;
        StreamReader^ reader = gcnew StreamReader("C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\admins.txt");
        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            count++;
        }
        reader->Close();
        return count;
    }
};


