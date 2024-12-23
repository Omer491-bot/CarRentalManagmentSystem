#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Car {
public:
    String^ carID;
    String^ model;
    String^ color;
    String^ mileage;
    String^ brand;
    String^ type;

    // Constructor
    Car(String^ carID, String^ model, String^ color, String^ mileage, String^ brand, String^ type) {
        this->carID = carID;
        this->model = model;
        this->color = color;
        this->mileage = mileage;
        this->brand = brand;
        this->type = type;
    }

    // Static method to get available types
    static List<String^>^ GetAvailableTypes() {
        List<String^>^ types = gcnew List<String^>();
        types->Add("SUV");
        types->Add("Jeep");
        types->Add("Pajero");
        return types;
    }

    // Static method to save all cars to a .txt file
    static void SaveCarsToFile(List<Car^>^ cars, String^ fileName) {
        try {
            StreamWriter^ writer = gcnew StreamWriter(fileName);

            // Iterate through all cars and write each car's details to the file
            for each (Car ^ car in cars) {
                writer->WriteLine(car->carID + "," + car->model + "," + car->color + "," + car->mileage + "," + car->brand + "," + car->type);
            }

            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving file: " + ex->Message, "Save Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // Static method to load cars from a .txt file
    static List<Car^>^ LoadCarsFromFile(String^ fileName) {
        List<Car^>^ cars = gcnew List<Car^>();

        try {
            StreamReader^ reader = gcnew StreamReader(fileName);

            String^ line;
            while ((line = reader->ReadLine()) != nullptr) {
                array<String^>^ carDetails = line->Split(',');

                if (carDetails->Length == 6) {
                    Car^ car = gcnew Car(carDetails[0], carDetails[1], carDetails[2], carDetails[3], carDetails[4], carDetails[5]);
                    cars->Add(car);
                }
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading file: " + ex->Message, "Load Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        return cars;
    }

};

