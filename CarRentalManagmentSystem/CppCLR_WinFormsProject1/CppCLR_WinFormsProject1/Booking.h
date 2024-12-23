#pragma once
#include <string>
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

public ref class Booking {
public:
    String^ CarID;
    String^ DriverID;
    String^ CustomerID;
    DateTime BookingDate;
    String^ PickupLocation;
    String^ DropoffLocation;

    // Constructor to initialize the booking details
    Booking(String^ carID, String^ driverID, String^ customerID, DateTime bookingDate, String^ pickupLocation, String^ dropoffLocation) {
        this->CarID = carID;
        this->DriverID = driverID;
        this->CustomerID = customerID;
        this->BookingDate = bookingDate;
        this->PickupLocation = pickupLocation;
        this->DropoffLocation = dropoffLocation;
    }

    // Method to return the booking details as a string (for confirmation or display purposes)
    String^ GetBookingDetails() {
        String^ bookingDateStr = BookingDate.ToString("yyyy-MM-dd HH:mm");
        return "Booking Details:\nCar ID: " + CarID + "\nDriver ID: " + DriverID + "\nCustomer ID: " + CustomerID +
            "\nBooking Date: " + bookingDateStr + "\nPickup Location: " + PickupLocation + "\nDropoff Location: " + DropoffLocation;
    }

    // Method to populate ComboBox with car details from a file
    void PopulateCarComboBox(ComboBox^ comboBoxCars) {
        // Clear any existing items in the ComboBox
        comboBoxCars->Items->Clear();

        // File path for the car.txt
        String^ filePath = "C:\\Users\\hp\\Desktop\\car.txt";

        try {
            // Open the file
            StreamReader^ reader = gcnew StreamReader(filePath);
            String^ line;

            // Read each line from the file
            while ((line = reader->ReadLine()) != nullptr) {
                // Split the line by comma (or other delimiter) to get car details
                array<String^>^ carDetails = line->Split(',');

                // Assuming carDetails[1] contains the car name, add it to ComboBox
                if (carDetails->Length > 1) {
                    comboBoxCars->Items->Add(carDetails[1]->Trim());  // Add the car name
                }
            }
            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error reading the car file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
};





