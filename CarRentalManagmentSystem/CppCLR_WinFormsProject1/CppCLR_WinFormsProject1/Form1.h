#pragma once
#include "Admin.h"
#include "Car.h"
#include "Customer.h"
#include "Driver.h"
#include <vector>
#include "Driver.h"
#include "Booking.h"
#include <list>
#include <fstream>


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
            carList = gcnew List<Car^>();
            List<Driver^>^ driverList = gcnew List<Driver^>();
            List<Customer^>^ CustomerLIst = gcnew List<Customer^>();
            List<Customer^>^ customerList = nullptr;
           
            
           
            DataGridView();
           
         
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{

			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TabControl^ TabControl1;
    private:
        System::Collections::Generic::List<Driver^>^ driverList;

    protected:
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ txtPassword;
    private: System::Windows::Forms::TextBox^ txtUsername;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::TextBox^ txtPickupLocation;
    private: System::Windows::Forms::TextBox^ txtDropoffLocation;






    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TextBox^ txtCarID;
    private: System::Windows::Forms::TextBox^ txtColor;
    private: System::Windows::Forms::TextBox^ txtMileage;
    private: System::Windows::Forms::TextBox^ txtBrand;




    private: System::Windows::Forms::TextBox^ txtModel;

    private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::ComboBox^ cmbType;

    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::DataGridView^ dataGridView1;




private: System::Windows::Forms::Button^ btnUpdateCar;
private: System::Windows::Forms::Button^ btnSearchCar;
private: System::Windows::Forms::Button^ btnResetCar;



private: System::Windows::Forms::Button^ btnAddCar;

    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TabPage^ tabPage8;
    private: System::Windows::Forms::DataGridView^ dataGridView3;




public: System::Windows::Forms::Button^ btnSerchCustomer;
private:



    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::TextBox^ txtAddress;

private: System::Windows::Forms::TextBox^ txtPhoneNumber;


private: System::Windows::Forms::TextBox^ txtEmail;



private: System::Windows::Forms::TextBox^ txtCustomerName;



    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::ComboBox^ cmbLicence;


    private: System::Windows::Forms::DataGridView^ dataGridView4;





private: System::Windows::Forms::TextBox^ txtHomeAdress;

private: System::Windows::Forms::TextBox^ txtAge;

private: System::Windows::Forms::TextBox^ txtDriverName;

private: System::Windows::Forms::TextBox^ txtDriverID;


    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::TabPage^ tabPage10;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::TabPage^ tabPage11;
    private: System::Windows::Forms::ComboBox^ comboBox7;
    private: System::Windows::Forms::ComboBox^ comboBox6;
    private: System::Windows::Forms::DataGridView^ dataGridView5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ MantinaceDetail;
    private: System::Windows::Forms::TextBox^ textBox34;
    private: System::Windows::Forms::TextBox^ textBox35;
    private: System::Windows::Forms::TextBox^ textBox37;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::TabPage^ tabPage12;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::ComboBox^ comboBox8;
    private: System::Windows::Forms::ComboBox^ comboBox9;
    private: System::Windows::Forms::DataGridView^ dataGridView6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
    private: System::Windows::Forms::TextBox^ textBox36;
    private: System::Windows::Forms::TextBox^ textBox39;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label73;

	private:
        Admin^ admin;  // Declaring admin as a handle to the Admin class
        List<Car^>^ carList;
       
         // Declaring customer as a handle to the Customer class
        Driver^ driver;
        
       
       

         
       
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phonenumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverLicense;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverHomeAdress;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::ComboBox^ comboBoxCars;
private: System::Windows::Forms::ComboBox^ comboBoxDriver;
private: System::Windows::Forms::ComboBox^ comboBoxCustomer;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modal;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Milage;

















		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
        

		void InitializeComponent(void)

		{
            this->TabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->txtPassword = (gcnew System::Windows::Forms::TextBox());
            this->txtUsername = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->comboBoxCustomer = (gcnew System::Windows::Forms::ComboBox());
            this->comboBoxDriver = (gcnew System::Windows::Forms::ComboBox());
            this->comboBoxCars = (gcnew System::Windows::Forms::ComboBox());
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->txtPickupLocation = (gcnew System::Windows::Forms::TextBox());
            this->txtDropoffLocation = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->txtCarID = (gcnew System::Windows::Forms::TextBox());
            this->txtColor = (gcnew System::Windows::Forms::TextBox());
            this->txtMileage = (gcnew System::Windows::Forms::TextBox());
            this->txtBrand = (gcnew System::Windows::Forms::TextBox());
            this->txtModel = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->cmbType = (gcnew System::Windows::Forms::ComboBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->CarID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Modal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Milage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->btnUpdateCar = (gcnew System::Windows::Forms::Button());
            this->btnSearchCar = (gcnew System::Windows::Forms::Button());
            this->btnResetCar = (gcnew System::Windows::Forms::Button());
            this->btnAddCar = (gcnew System::Windows::Forms::Button());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->CustomerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->btnSerchCustomer = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->txtAddress = (gcnew System::Windows::Forms::TextBox());
            this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtCustomerName = (gcnew System::Windows::Forms::TextBox());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->cmbLicence = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->DriverID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->DriverName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->DriverLicense = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->DriverHomeAdress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->txtHomeAdress = (gcnew System::Windows::Forms::TextBox());
            this->txtAge = (gcnew System::Windows::Forms::TextBox());
            this->txtDriverName = (gcnew System::Windows::Forms::TextBox());
            this->txtDriverID = (gcnew System::Windows::Forms::TextBox());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->MantinaceDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->TabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->panel3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->panel4->SuspendLayout();
            this->tabPage5->SuspendLayout();
            this->panel5->SuspendLayout();
            this->tabPage6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel6->SuspendLayout();
            this->tabPage8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->panel8->SuspendLayout();
            this->tabPage9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->panel9->SuspendLayout();
            this->tabPage10->SuspendLayout();
            this->panel10->SuspendLayout();
            this->tabPage11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
            this->panel11->SuspendLayout();
            this->tabPage12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
            this->panel12->SuspendLayout();
            this->SuspendLayout();
            // 
            // TabControl1
            // 
            this->TabControl1->Controls->Add(this->tabPage1);
            this->TabControl1->Controls->Add(this->tabPage2);
            this->TabControl1->Controls->Add(this->tabPage3);
            this->TabControl1->Controls->Add(this->tabPage4);
            this->TabControl1->Controls->Add(this->tabPage5);
            this->TabControl1->Controls->Add(this->tabPage6);
            this->TabControl1->Controls->Add(this->tabPage8);
            this->TabControl1->Controls->Add(this->tabPage9);
            this->TabControl1->Controls->Add(this->tabPage10);
            this->TabControl1->Controls->Add(this->tabPage11);
            this->TabControl1->Controls->Add(this->tabPage12);
            this->TabControl1->Location = System::Drawing::Point(2, 12);
            this->TabControl1->Name = L"TabControl1";
            this->TabControl1->SelectedIndex = 0;
            this->TabControl1->Size = System::Drawing::Size(1065, 476);
            this->TabControl1->TabIndex = 1;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->button16);
            this->tabPage1->Controls->Add(this->button14);
            this->tabPage1->Controls->Add(this->btnExit);
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Controls->Add(this->txtPassword);
            this->tabPage1->Controls->Add(this->txtUsername);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Location = System::Drawing::Point(4, 29);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1057, 443);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"tabPage1";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::Highlight;
            this->button2->Location = System::Drawing::Point(858, 328);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(122, 50);
            this->button2->TabIndex = 27;
            this->button2->Text = L"reportgenerate";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::SystemColors::Highlight;
            this->button16->Location = System::Drawing::Point(433, 328);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(122, 50);
            this->button16->TabIndex = 24;
            this->button16->Text = L"Delete Admin";
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::SystemColors::Highlight;
            this->button14->Location = System::Drawing::Point(230, 328);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(122, 50);
            this->button14->TabIndex = 22;
            this->button14->Text = L"createAdmin";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
            // 
            // btnExit
            // 
            this->btnExit->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnExit->Location = System::Drawing::Point(665, 328);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(122, 50);
            this->btnExit->TabIndex = 21;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = false;
            this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::Highlight;
            this->button1->Location = System::Drawing::Point(58, 328);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(122, 50);
            this->button1->TabIndex = 20;
            this->button1->Text = L"LogIn";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // txtPassword
            // 
            this->txtPassword->Location = System::Drawing::Point(456, 233);
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->Size = System::Drawing::Size(196, 26);
            this->txtPassword->TabIndex = 19;
            // 
            // txtUsername
            // 
            this->txtUsername->Location = System::Drawing::Point(456, 176);
            this->txtUsername->Name = L"txtUsername";
            this->txtUsername->Size = System::Drawing::Size(196, 26);
            this->txtUsername->TabIndex = 18;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(292, 232);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(108, 27);
            this->label4->TabIndex = 17;
            this->label4->Text = L"Password:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(287, 176);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(113, 27);
            this->label3->TabIndex = 16;
            this->label3->Text = L"Username:";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(0, -1);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1047, 128);
            this->panel1->TabIndex = 15;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(451, 67);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(134, 25);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Admin Panel";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(323, 13);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(391, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Car Rental Mangment System";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->button5);
            this->tabPage2->Controls->Add(this->button4);
            this->tabPage2->Controls->Add(this->button6);
            this->tabPage2->Controls->Add(this->button7);
            this->tabPage2->Controls->Add(this->panel2);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1057, 443);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::SystemColors::Highlight;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(495, 338);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(195, 48);
            this->button5->TabIndex = 19;
            this->button5->Text = L"Add Driver";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::SystemColors::Highlight;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(98, 338);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(195, 48);
            this->button4->TabIndex = 18;
            this->button4->Text = L"Manage Customer";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::SystemColors::Highlight;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(495, 187);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(195, 48);
            this->button6->TabIndex = 16;
            this->button6->Text = L"Book Car";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::SystemColors::Highlight;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(98, 187);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(195, 48);
            this->button7->TabIndex = 15;
            this->button7->Text = L"Manage Cars";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Location = System::Drawing::Point(3, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(907, 108);
            this->panel2->TabIndex = 14;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(336, 62);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(184, 25);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Admin Dashboard";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(235, 15);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(391, 32);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Car Rental Mangment System";
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->comboBoxCustomer);
            this->tabPage3->Controls->Add(this->comboBoxDriver);
            this->tabPage3->Controls->Add(this->comboBoxCars);
            this->tabPage3->Controls->Add(this->dateTimePicker2);
            this->tabPage3->Controls->Add(this->button8);
            this->tabPage3->Controls->Add(this->button9);
            this->tabPage3->Controls->Add(this->txtPickupLocation);
            this->tabPage3->Controls->Add(this->txtDropoffLocation);
            this->tabPage3->Controls->Add(this->label9);
            this->tabPage3->Controls->Add(this->label7);
            this->tabPage3->Controls->Add(this->label8);
            this->tabPage3->Controls->Add(this->label10);
            this->tabPage3->Controls->Add(this->label11);
            this->tabPage3->Controls->Add(this->label12);
            this->tabPage3->Controls->Add(this->panel3);
            this->tabPage3->Location = System::Drawing::Point(4, 29);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(1057, 443);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"tabPage3";
            this->tabPage3->UseVisualStyleBackColor = true;
            this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
            // 
            // comboBoxCustomer
            // 
            this->comboBoxCustomer->FormattingEnabled = true;
            this->comboBoxCustomer->Location = System::Drawing::Point(242, 228);
            this->comboBoxCustomer->Name = L"comboBoxCustomer";
            this->comboBoxCustomer->Size = System::Drawing::Size(121, 28);
            this->comboBoxCustomer->TabIndex = 70;
            // 
            // comboBoxDriver
            // 
            this->comboBoxDriver->FormattingEnabled = true;
            this->comboBoxDriver->Location = System::Drawing::Point(242, 188);
            this->comboBoxDriver->Name = L"comboBoxDriver";
            this->comboBoxDriver->Size = System::Drawing::Size(121, 28);
            this->comboBoxDriver->TabIndex = 69;
            // 
            // comboBoxCars
            // 
            this->comboBoxCars->FormattingEnabled = true;
            this->comboBoxCars->Location = System::Drawing::Point(242, 141);
            this->comboBoxCars->Name = L"comboBoxCars";
            this->comboBoxCars->Size = System::Drawing::Size(121, 28);
            this->comboBoxCars->TabIndex = 68;
            this->comboBoxCars->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBoxCars_SelectedIndexChanged);
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->Location = System::Drawing::Point(242, 271);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(200, 26);
            this->dateTimePicker2->TabIndex = 67;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::SystemColors::Highlight;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(550, 228);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(195, 48);
            this->button8->TabIndex = 66;
            this->button8->Text = L"Reset";
            this->button8->UseVisualStyleBackColor = false;
            /*this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);*/
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::SystemColors::Highlight;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(550, 123);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(195, 48);
            this->button9->TabIndex = 65;
            this->button9->Text = L"Confirm Booking";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // txtPickupLocation
            // 
            this->txtPickupLocation->Location = System::Drawing::Point(242, 316);
            this->txtPickupLocation->Name = L"txtPickupLocation";
            this->txtPickupLocation->Size = System::Drawing::Size(138, 26);
            this->txtPickupLocation->TabIndex = 60;
            // 
            // txtDropoffLocation
            // 
            this->txtDropoffLocation->Location = System::Drawing::Point(242, 357);
            this->txtDropoffLocation->Name = L"txtDropoffLocation";
            this->txtDropoffLocation->Size = System::Drawing::Size(138, 26);
            this->txtDropoffLocation->TabIndex = 59;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(30, 352);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(193, 30);
            this->label9->TabIndex = 58;
            this->label9->Text = L"Dropoff Location";
           /* this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);*/
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(133, 141);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(78, 30);
            this->label7->TabIndex = 57;
            this->label7->Text = L"Car ID";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(105, 183);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(106, 30);
            this->label8->TabIndex = 56;
            this->label8->Text = L"Driver ID";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(66, 223);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(145, 30);
            this->label10->TabIndex = 55;
            this->label10->Text = L"Customer ID";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(54, 267);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(157, 30);
            this->label11->TabIndex = 54;
            this->label11->Text = L"Booking Date";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(30, 311);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(181, 30);
            this->label12->TabIndex = 53;
            this->label12->Text = L"pickup Location";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel3->Controls->Add(this->label13);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Location = System::Drawing::Point(27, 6);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(828, 102);
            this->panel3->TabIndex = 52;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(293, 63);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(128, 25);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Book a Ride";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(195, 16);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(391, 32);
            this->label14->TabIndex = 0;
            this->label14->Text = L"Car Rental Mangment System";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->textBox9);
            this->tabPage4->Controls->Add(this->textBox10);
            this->tabPage4->Controls->Add(this->textBox11);
            this->tabPage4->Controls->Add(this->textBox12);
            this->tabPage4->Controls->Add(this->panel4);
            this->tabPage4->Controls->Add(this->label15);
            this->tabPage4->Controls->Add(this->label20);
            this->tabPage4->Controls->Add(this->dateTimePicker1);
            this->tabPage4->Controls->Add(this->label19);
            this->tabPage4->Controls->Add(this->comboBox1);
            this->tabPage4->Controls->Add(this->label18);
            this->tabPage4->Controls->Add(this->label17);
            this->tabPage4->Controls->Add(this->label16);
            this->tabPage4->Location = System::Drawing::Point(4, 29);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(1057, 443);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"tabPage4";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(692, 264);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(138, 26);
            this->textBox9->TabIndex = 70;
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(285, 224);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(138, 26);
            this->textBox10->TabIndex = 66;
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(285, 265);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(138, 26);
            this->textBox11->TabIndex = 65;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(285, 358);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(138, 26);
            this->textBox12->TabIndex = 64;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel4->Controls->Add(this->label21);
            this->panel4->Controls->Add(this->label22);
            this->panel4->Location = System::Drawing::Point(23, 6);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(828, 105);
            this->panel4->TabIndex = 58;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(293, 63);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(165, 25);
            this->label21->TabIndex = 1;
            this->label21->Text = L"Online Payment";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(195, 16);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(391, 32);
            this->label22->TabIndex = 0;
            this->label22->Text = L"Car Rental Mangment System";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(504, 260);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(169, 30);
            this->label15->TabIndex = 69;
            this->label15->Text = L"Discount Code";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(83, 176);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(163, 30);
            this->label20->TabIndex = 59;
            this->label20->Text = L"Payment Type";
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(285, 307);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(142, 26);
            this->dateTimePicker1->TabIndex = 68;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(90, 353);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(152, 30);
            this->label19->TabIndex = 60;
            this->label19->Text = L"CVV Number";
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Credit Card", L"Debit Card ", L"Master Card" });
            this->comboBox1->Location = System::Drawing::Point(285, 178);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(138, 28);
            this->comboBox1->TabIndex = 67;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(72, 304);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(174, 30);
            this->label18->TabIndex = 61;
            this->label18->Text = L"Expiration Date";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(90, 260);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(156, 30);
            this->label17->TabIndex = 62;
            this->label17->Text = L"Card Number";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(36, 219);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(210, 30);
            this->label16->TabIndex = 63;
            this->label16->Text = L"Card Holder Name";
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->comboBox2);
            this->tabPage5->Controls->Add(this->textBox13);
            this->tabPage5->Controls->Add(this->textBox14);
            this->tabPage5->Controls->Add(this->textBox15);
            this->tabPage5->Controls->Add(this->label23);
            this->tabPage5->Controls->Add(this->label24);
            this->tabPage5->Controls->Add(this->label25);
            this->tabPage5->Controls->Add(this->label26);
            this->tabPage5->Controls->Add(this->panel5);
            this->tabPage5->Location = System::Drawing::Point(4, 29);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Padding = System::Windows::Forms::Padding(3);
            this->tabPage5->Size = System::Drawing::Size(1057, 443);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"tabPage5";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1*", L"2*", L"3*", L"4*", L"5*" });
            this->comboBox2->Location = System::Drawing::Point(311, 237);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(196, 28);
            this->comboBox2->TabIndex = 52;
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(311, 139);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(196, 26);
            this->textBox13->TabIndex = 51;
            // 
            // textBox14
            // 
            this->textBox14->Location = System::Drawing::Point(311, 298);
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(338, 103);
            this->textBox14->TabIndex = 50;
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(311, 186);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(196, 26);
            this->textBox15->TabIndex = 49;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(125, 293);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(130, 30);
            this->label23->TabIndex = 48;
            this->label23->Text = L"Comment :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(110, 134);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(145, 30);
            this->label24->TabIndex = 47;
            this->label24->Text = L"Customer ID";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(60, 181);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(195, 30);
            this->label25->TabIndex = 46;
            this->label25->Text = L"Booking Number";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(174, 232);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(81, 30);
            this->label26->TabIndex = 45;
            this->label26->Text = L"Rating";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel5->Controls->Add(this->label27);
            this->panel5->Controls->Add(this->label28);
            this->panel5->Location = System::Drawing::Point(3, -2);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(907, 117);
            this->panel5->TabIndex = 44;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(293, 69);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(212, 25);
            this->label27->TabIndex = 1;
            this->label27->Text = L"Customer Mangment";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(195, 16);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(391, 32);
            this->label28->TabIndex = 0;
            this->label28->Text = L"Car Rental Mangment System";
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->button3);
            this->tabPage6->Controls->Add(this->txtCarID);
            this->tabPage6->Controls->Add(this->txtColor);
            this->tabPage6->Controls->Add(this->txtMileage);
            this->tabPage6->Controls->Add(this->txtBrand);
            this->tabPage6->Controls->Add(this->txtModel);
            this->tabPage6->Controls->Add(this->label29);
            this->tabPage6->Controls->Add(this->cmbType);
            this->tabPage6->Controls->Add(this->label30);
            this->tabPage6->Controls->Add(this->dataGridView1);
            this->tabPage6->Controls->Add(this->btnUpdateCar);
            this->tabPage6->Controls->Add(this->btnSearchCar);
            this->tabPage6->Controls->Add(this->btnResetCar);
            this->tabPage6->Controls->Add(this->btnAddCar);
            this->tabPage6->Controls->Add(this->label31);
            this->tabPage6->Controls->Add(this->label32);
            this->tabPage6->Controls->Add(this->label33);
            this->tabPage6->Controls->Add(this->label34);
            this->tabPage6->Controls->Add(this->panel6);
            this->tabPage6->Location = System::Drawing::Point(4, 29);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Padding = System::Windows::Forms::Padding(3);
            this->tabPage6->Size = System::Drawing::Size(1057, 443);
            this->tabPage6->TabIndex = 5;
            this->tabPage6->Text = L"tabPage6";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::SystemColors::Highlight;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(739, 345);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(92, 36);
            this->button3->TabIndex = 59;
            this->button3->Text = L"Delete";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
            // 
            // txtCarID
            // 
            this->txtCarID->Location = System::Drawing::Point(171, 125);
            this->txtCarID->Name = L"txtCarID";
            this->txtCarID->Size = System::Drawing::Size(138, 26);
            this->txtCarID->TabIndex = 58;
            this->txtCarID->TextChanged += gcnew System::EventHandler(this, &Form1::txtCarID_TextChanged);
            // 
            // txtColor
            // 
            this->txtColor->Location = System::Drawing::Point(171, 222);
            this->txtColor->Name = L"txtColor";
            this->txtColor->Size = System::Drawing::Size(138, 26);
            this->txtColor->TabIndex = 49;
            // 
            // txtMileage
            // 
            this->txtMileage->Location = System::Drawing::Point(171, 266);
            this->txtMileage->Name = L"txtMileage";
            this->txtMileage->Size = System::Drawing::Size(138, 26);
            this->txtMileage->TabIndex = 48;
            // 
            // txtBrand
            // 
            this->txtBrand->Location = System::Drawing::Point(171, 311);
            this->txtBrand->Name = L"txtBrand";
            this->txtBrand->Size = System::Drawing::Size(138, 26);
            this->txtBrand->TabIndex = 47;
            // 
            // txtModel
            // 
            this->txtModel->Location = System::Drawing::Point(171, 176);
            this->txtModel->Name = L"txtModel";
            this->txtModel->Size = System::Drawing::Size(138, 26);
            this->txtModel->TabIndex = 46;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(27, 125);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(78, 30);
            this->label29->TabIndex = 57;
            this->label29->Text = L"Car ID";
            // 
            // cmbType
            // 
            this->cmbType->FormattingEnabled = true;
            this->cmbType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SUV", L"Sedan", L"Pajero" });
            this->cmbType->Location = System::Drawing::Point(171, 356);
            this->cmbType->Name = L"cmbType";
            this->cmbType->Size = System::Drawing::Size(138, 28);
            this->cmbType->TabIndex = 56;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(8, 351);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(64, 30);
            this->label30->TabIndex = 55;
            this->label30->Text = L"Type";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->CarID,
                    this->Modal, this->Brand, this->Color, this->Milage
            });
            this->dataGridView1->Location = System::Drawing::Point(356, 144);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(662, 171);
            this->dataGridView1->TabIndex = 54;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
            // 
            // CarID
            // 
            this->CarID->HeaderText = L"CarID";
            this->CarID->MinimumWidth = 8;
            this->CarID->Name = L"CarID";
            this->CarID->Width = 150;
            // 
            // Modal
            // 
            this->Modal->HeaderText = L"Modal of car";
            this->Modal->MinimumWidth = 8;
            this->Modal->Name = L"Modal";
            this->Modal->Width = 150;
            // 
            // Brand
            // 
            this->Brand->HeaderText = L"Brand";
            this->Brand->MinimumWidth = 8;
            this->Brand->Name = L"Brand";
            this->Brand->Width = 150;
            // 
            // Color
            // 
            this->Color->HeaderText = L"Color";
            this->Color->MinimumWidth = 8;
            this->Color->Name = L"Color";
            this->Color->Width = 150;
            // 
            // Milage
            // 
            this->Milage->HeaderText = L"Milaeage";
            this->Milage->MinimumWidth = 8;
            this->Milage->Name = L"Milage";
            this->Milage->Width = 150;
            // 
            // btnUpdateCar
            // 
            this->btnUpdateCar->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnUpdateCar->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnUpdateCar->Location = System::Drawing::Point(486, 345);
            this->btnUpdateCar->Name = L"btnUpdateCar";
            this->btnUpdateCar->Size = System::Drawing::Size(92, 36);
            this->btnUpdateCar->TabIndex = 53;
            this->btnUpdateCar->Text = L"Update";
            this->btnUpdateCar->UseVisualStyleBackColor = false;
            this->btnUpdateCar->Click += gcnew System::EventHandler(this, &Form1::btnUpdateCar_Click);
            // 
            // btnSearchCar
            // 
            this->btnSearchCar->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnSearchCar->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSearchCar->Location = System::Drawing::Point(617, 345);
            this->btnSearchCar->Name = L"btnSearchCar";
            this->btnSearchCar->Size = System::Drawing::Size(92, 36);
            this->btnSearchCar->TabIndex = 52;
            this->btnSearchCar->Text = L"Search";
            this->btnSearchCar->UseVisualStyleBackColor = false;
            // 
            // btnResetCar
            // 
            this->btnResetCar->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnResetCar->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnResetCar->Location = System::Drawing::Point(942, 404);
            this->btnResetCar->Name = L"btnResetCar";
            this->btnResetCar->Size = System::Drawing::Size(92, 36);
            this->btnResetCar->TabIndex = 51;
            this->btnResetCar->Text = L"Reset";
            this->btnResetCar->UseVisualStyleBackColor = false;
            this->btnResetCar->Click += gcnew System::EventHandler(this, &Form1::btnResetCar_Click);
            // 
            // btnAddCar
            // 
            this->btnAddCar->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnAddCar->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddCar->Location = System::Drawing::Point(356, 345);
            this->btnAddCar->Name = L"btnAddCar";
            this->btnAddCar->Size = System::Drawing::Size(92, 36);
            this->btnAddCar->TabIndex = 50;
            this->btnAddCar->Text = L"ADD";
            this->btnAddCar->UseVisualStyleBackColor = false;
            this->btnAddCar->Click += gcnew System::EventHandler(this, &Form1::btnAddCar_Click);
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(8, 217);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(70, 30);
            this->label31->TabIndex = 45;
            this->label31->Text = L"Color";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(-9, 266);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(97, 30);
            this->label32->TabIndex = 44;
            this->label32->Text = L"Mileage";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 311);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(75, 30);
            this->label33->TabIndex = 43;
            this->label33->Text = L"Brand";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(-47, 176);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(152, 30);
            this->label34->TabIndex = 42;
            this->label34->Text = L"Model of Car";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel6->Controls->Add(this->label35);
            this->panel6->Controls->Add(this->label36);
            this->panel6->Location = System::Drawing::Point(-58, 1);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1026, 118);
            this->panel6->TabIndex = 41;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(424, 70);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(166, 25);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Car Managment";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(318, 18);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(391, 32);
            this->label36->TabIndex = 0;
            this->label36->Text = L"Car Rental Mangment System";
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->dataGridView3);
            this->tabPage8->Controls->Add(this->btnSerchCustomer);
            this->tabPage8->Controls->Add(this->button19);
            this->tabPage8->Controls->Add(this->button20);
            this->tabPage8->Controls->Add(this->button21);
            this->tabPage8->Controls->Add(this->txtAddress);
            this->tabPage8->Controls->Add(this->txtPhoneNumber);
            this->tabPage8->Controls->Add(this->txtEmail);
            this->tabPage8->Controls->Add(this->txtCustomerName);
            this->tabPage8->Controls->Add(this->label45);
            this->tabPage8->Controls->Add(this->label46);
            this->tabPage8->Controls->Add(this->label47);
            this->tabPage8->Controls->Add(this->label48);
            this->tabPage8->Controls->Add(this->panel8);
            this->tabPage8->Location = System::Drawing::Point(4, 29);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(3);
            this->tabPage8->Size = System::Drawing::Size(1057, 443);
            this->tabPage8->TabIndex = 7;
            this->tabPage8->Text = L"tabPage8";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->CustomerName,
                    this->Email, this->Phonenumber, this->Address
            });
            this->dataGridView3->Location = System::Drawing::Point(503, 142);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowHeadersWidth = 62;
            this->dataGridView3->RowTemplate->Height = 28;
            this->dataGridView3->Size = System::Drawing::Size(538, 159);
            this->dataGridView3->TabIndex = 52;
            // 
            // CustomerName
            // 
            this->CustomerName->HeaderText = L"CustomerName";
            this->CustomerName->MinimumWidth = 15;
            this->CustomerName->Name = L"CustomerName";
            this->CustomerName->Width = 150;
            // 
            // Email
            // 
            this->Email->HeaderText = L"Email";
            this->Email->MinimumWidth = 8;
            this->Email->Name = L"Email";
            this->Email->Width = 150;
            // 
            // Phonenumber
            // 
            this->Phonenumber->HeaderText = L"PhoneNumber";
            this->Phonenumber->MinimumWidth = 15;
            this->Phonenumber->Name = L"Phonenumber";
            this->Phonenumber->Width = 150;
            // 
            // Address
            // 
            this->Address->HeaderText = L"Address";
            this->Address->MinimumWidth = 8;
            this->Address->Name = L"Address";
            this->Address->Width = 150;
            // 
            // btnSerchCustomer
            // 
            this->btnSerchCustomer->BackColor = System::Drawing::SystemColors::Highlight;
            this->btnSerchCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSerchCustomer->Location = System::Drawing::Point(224, 347);
            this->btnSerchCustomer->Name = L"btnSerchCustomer";
            this->btnSerchCustomer->Size = System::Drawing::Size(195, 48);
            this->btnSerchCustomer->TabIndex = 51;
            this->btnSerchCustomer->Text = L"Search";
            this->btnSerchCustomer->UseVisualStyleBackColor = false;
            this->btnSerchCustomer->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::SystemColors::Highlight;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(680, 347);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(195, 48);
            this->button19->TabIndex = 50;
            this->button19->Text = L"Delete";
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::SystemColors::Highlight;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(438, 347);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(195, 48);
            this->button20->TabIndex = 49;
            this->button20->Text = L"Update";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::SystemColors::Highlight;
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(6, 347);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(195, 48);
            this->button21->TabIndex = 48;
            this->button21->Text = L"Add ";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
            // 
            // txtAddress
            // 
            this->txtAddress->Location = System::Drawing::Point(281, 274);
            this->txtAddress->Multiline = true;
            this->txtAddress->Name = L"txtAddress";
            this->txtAddress->Size = System::Drawing::Size(196, 65);
            this->txtAddress->TabIndex = 47;
            // 
            // txtPhoneNumber
            // 
            this->txtPhoneNumber->Location = System::Drawing::Point(281, 220);
            this->txtPhoneNumber->Name = L"txtPhoneNumber";
            this->txtPhoneNumber->Size = System::Drawing::Size(196, 26);
            this->txtPhoneNumber->TabIndex = 46;
            // 
            // txtEmail
            // 
            this->txtEmail->Location = System::Drawing::Point(281, 182);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(196, 26);
            this->txtEmail->TabIndex = 45;
            // 
            // txtCustomerName
            // 
            this->txtCustomerName->Location = System::Drawing::Point(281, 144);
            this->txtCustomerName->Name = L"txtCustomerName";
            this->txtCustomerName->Size = System::Drawing::Size(196, 26);
            this->txtCustomerName->TabIndex = 44;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(183, 180);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(63, 27);
            this->label45->TabIndex = 43;
            this->label45->Text = L"Email";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(89, 218);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(157, 27);
            this->label46->TabIndex = 42;
            this->label46->Text = L"Phone Number";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(170, 263);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(76, 27);
            this->label47->TabIndex = 41;
            this->label47->Text = L"Adress";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(79, 142);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(167, 27);
            this->label48->TabIndex = 40;
            this->label48->Text = L"Customer Name";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel8->Controls->Add(this->label49);
            this->panel8->Controls->Add(this->label50);
            this->panel8->Location = System::Drawing::Point(6, 3);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1038, 118);
            this->panel8->TabIndex = 39;
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(415, 73);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(212, 25);
            this->label49->TabIndex = 1;
            this->label49->Text = L"Customer Mangment";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(330, 12);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(391, 32);
            this->label50->TabIndex = 0;
            this->label50->Text = L"Car Rental Mangment System";
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->button12);
            this->tabPage9->Controls->Add(this->button11);
            this->tabPage9->Controls->Add(this->button10);
            this->tabPage9->Controls->Add(this->cmbLicence);
            this->tabPage9->Controls->Add(this->dataGridView4);
            this->tabPage9->Controls->Add(this->txtHomeAdress);
            this->tabPage9->Controls->Add(this->txtAge);
            this->tabPage9->Controls->Add(this->txtDriverName);
            this->tabPage9->Controls->Add(this->txtDriverID);
            this->tabPage9->Controls->Add(this->label51);
            this->tabPage9->Controls->Add(this->label52);
            this->tabPage9->Controls->Add(this->label53);
            this->tabPage9->Controls->Add(this->label54);
            this->tabPage9->Controls->Add(this->label55);
            this->tabPage9->Controls->Add(this->panel9);
            this->tabPage9->Location = System::Drawing::Point(4, 29);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3);
            this->tabPage9->Size = System::Drawing::Size(1057, 443);
            this->tabPage9->TabIndex = 8;
            this->tabPage9->Text = L"tabPage9";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::SystemColors::Highlight;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(732, 346);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(145, 48);
            this->button12->TabIndex = 60;
            this->button12->Text = L"delete driver";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::SystemColors::Highlight;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(570, 346);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(145, 48);
            this->button11->TabIndex = 59;
            this->button11->Text = L"Update driver";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::SystemColors::Highlight;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(425, 346);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(128, 48);
            this->button10->TabIndex = 58;
            this->button10->Text = L"Add driver";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // cmbLicence
            // 
            this->cmbLicence->FormattingEnabled = true;
            this->cmbLicence->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->cmbLicence->Location = System::Drawing::Point(198, 298);
            this->cmbLicence->Name = L"cmbLicence";
            this->cmbLicence->Size = System::Drawing::Size(196, 28);
            this->cmbLicence->TabIndex = 57;
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->DriverID,
                    this->DriverName, this->Age, this->DriverLicense, this->DriverHomeAdress
            });
            this->dataGridView4->Location = System::Drawing::Point(425, 156);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowHeadersWidth = 62;
            this->dataGridView4->RowTemplate->Height = 28;
            this->dataGridView4->Size = System::Drawing::Size(619, 150);
            this->dataGridView4->TabIndex = 56;
            // 
            // DriverID
            // 
            this->DriverID->HeaderText = L"DriverID";
            this->DriverID->MinimumWidth = 10;
            this->DriverID->Name = L"DriverID";
            this->DriverID->Width = 150;
            // 
            // DriverName
            // 
            this->DriverName->HeaderText = L"Name";
            this->DriverName->MinimumWidth = 8;
            this->DriverName->Name = L"DriverName";
            this->DriverName->Width = 150;
            // 
            // Age
            // 
            this->Age->HeaderText = L"Age";
            this->Age->MinimumWidth = 8;
            this->Age->Name = L"Age";
            this->Age->Width = 150;
            // 
            // DriverLicense
            // 
            this->DriverLicense->HeaderText = L"licence";
            this->DriverLicense->MinimumWidth = 10;
            this->DriverLicense->Name = L"DriverLicense";
            this->DriverLicense->Width = 150;
            // 
            // DriverHomeAdress
            // 
            this->DriverHomeAdress->HeaderText = L"Adress";
            this->DriverHomeAdress->MinimumWidth = 10;
            this->DriverHomeAdress->Name = L"DriverHomeAdress";
            this->DriverHomeAdress->Width = 150;
            // 
            // txtHomeAdress
            // 
            this->txtHomeAdress->Location = System::Drawing::Point(198, 346);
            this->txtHomeAdress->Multiline = true;
            this->txtHomeAdress->Name = L"txtHomeAdress";
            this->txtHomeAdress->Size = System::Drawing::Size(196, 59);
            this->txtHomeAdress->TabIndex = 55;
            // 
            // txtAge
            // 
            this->txtAge->Location = System::Drawing::Point(198, 252);
            this->txtAge->Name = L"txtAge";
            this->txtAge->Size = System::Drawing::Size(196, 26);
            this->txtAge->TabIndex = 54;
            // 
            // txtDriverName
            // 
            this->txtDriverName->Location = System::Drawing::Point(198, 210);
            this->txtDriverName->Name = L"txtDriverName";
            this->txtDriverName->Size = System::Drawing::Size(196, 26);
            this->txtDriverName->TabIndex = 53;
            // 
            // txtDriverID
            // 
            this->txtDriverID->Location = System::Drawing::Point(198, 156);
            this->txtDriverID->Name = L"txtDriverID";
            this->txtDriverID->Size = System::Drawing::Size(196, 26);
            this->txtDriverID->TabIndex = 52;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(100, 206);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(76, 30);
            this->label51->TabIndex = 51;
            this->label51->Text = L"Name";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(122, 248);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(54, 30);
            this->label52->TabIndex = 50;
            this->label52->Text = L"Age";
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(91, 293);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(85, 30);
            this->label53->TabIndex = 49;
            this->label53->Text = L"licence";
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(23, 341);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(153, 30);
            this->label54->TabIndex = 48;
            this->label54->Text = L"Home Adress";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(70, 156);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(106, 30);
            this->label55->TabIndex = 47;
            this->label55->Text = L"Driver ID";
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel9->Controls->Add(this->label56);
            this->panel9->Controls->Add(this->label57);
            this->panel9->Location = System::Drawing::Point(6, 6);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(1038, 117);
            this->panel9->TabIndex = 46;
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(414, 68);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(176, 25);
            this->label56->TabIndex = 1;
            this->label56->Text = L"Driver Mangment";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(318, 11);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(391, 32);
            this->label57->TabIndex = 0;
            this->label57->Text = L"Car Rental Mangment System";
            // 
            // tabPage10
            // 
            this->tabPage10->Controls->Add(this->button22);
            this->tabPage10->Controls->Add(this->button23);
            this->tabPage10->Controls->Add(this->panel10);
            this->tabPage10->Location = System::Drawing::Point(4, 29);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Padding = System::Windows::Forms::Padding(3);
            this->tabPage10->Size = System::Drawing::Size(1057, 443);
            this->tabPage10->TabIndex = 9;
            this->tabPage10->Text = L"tabPage10";
            this->tabPage10->UseVisualStyleBackColor = true;
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::SystemColors::Highlight;
            this->button22->Location = System::Drawing::Point(447, 309);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(182, 50);
            this->button22->TabIndex = 14;
            this->button22->Text = L"Ofline payment";
            this->button22->UseVisualStyleBackColor = false;
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::SystemColors::Highlight;
            this->button23->Location = System::Drawing::Point(447, 195);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(182, 50);
            this->button23->TabIndex = 13;
            this->button23->Text = L"Card Payment";
            this->button23->UseVisualStyleBackColor = false;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel10->Controls->Add(this->label58);
            this->panel10->Controls->Add(this->label59);
            this->panel10->Location = System::Drawing::Point(3, 3);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(1048, 115);
            this->panel10->TabIndex = 12;
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(498, 70);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(96, 25);
            this->label58->TabIndex = 1;
            this->label58->Text = L"Paymnet";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(342, 12);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(391, 32);
            this->label59->TabIndex = 0;
            this->label59->Text = L"Car Rental Mangment System";
            // 
            // tabPage11
            // 
            this->tabPage11->Controls->Add(this->comboBox7);
            this->tabPage11->Controls->Add(this->comboBox6);
            this->tabPage11->Controls->Add(this->dataGridView5);
            this->tabPage11->Controls->Add(this->textBox34);
            this->tabPage11->Controls->Add(this->textBox35);
            this->tabPage11->Controls->Add(this->textBox37);
            this->tabPage11->Controls->Add(this->label60);
            this->tabPage11->Controls->Add(this->label61);
            this->tabPage11->Controls->Add(this->label62);
            this->tabPage11->Controls->Add(this->label63);
            this->tabPage11->Controls->Add(this->label64);
            this->tabPage11->Controls->Add(this->panel11);
            this->tabPage11->Location = System::Drawing::Point(4, 29);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Padding = System::Windows::Forms::Padding(3);
            this->tabPage11->Size = System::Drawing::Size(1057, 443);
            this->tabPage11->TabIndex = 10;
            this->tabPage11->Text = L"tabPage11";
            this->tabPage11->UseVisualStyleBackColor = true;
            // 
            // comboBox7
            // 
            this->comboBox7->FormattingEnabled = true;
            this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Oil change", L"filter change", L"tyre change",
                    L"Engin work", L"other.."
            });
            this->comboBox7->Location = System::Drawing::Point(196, 204);
            this->comboBox7->Name = L"comboBox7";
            this->comboBox7->Size = System::Drawing::Size(196, 28);
            this->comboBox7->TabIndex = 70;
            // 
            // comboBox6
            // 
            this->comboBox6->FormattingEnabled = true;
            this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->comboBox6->Location = System::Drawing::Point(196, 292);
            this->comboBox6->Name = L"comboBox6";
            this->comboBox6->Size = System::Drawing::Size(196, 28);
            this->comboBox6->TabIndex = 69;
            // 
            // dataGridView5
            // 
            this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dataGridViewTextBoxColumn7,
                    this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->MantinaceDetail
            });
            this->dataGridView5->Location = System::Drawing::Point(423, 150);
            this->dataGridView5->Name = L"dataGridView5";
            this->dataGridView5->RowHeadersWidth = 62;
            this->dataGridView5->RowTemplate->Height = 28;
            this->dataGridView5->Size = System::Drawing::Size(616, 150);
            this->dataGridView5->TabIndex = 68;
            // 
            // dataGridViewTextBoxColumn7
            // 
            this->dataGridViewTextBoxColumn7->HeaderText = L"CarID";
            this->dataGridViewTextBoxColumn7->MinimumWidth = 10;
            this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
            this->dataGridViewTextBoxColumn7->Width = 150;
            // 
            // dataGridViewTextBoxColumn8
            // 
            this->dataGridViewTextBoxColumn8->HeaderText = L"ServiceType";
            this->dataGridViewTextBoxColumn8->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
            this->dataGridViewTextBoxColumn8->Width = 150;
            // 
            // dataGridViewTextBoxColumn9
            // 
            this->dataGridViewTextBoxColumn9->HeaderText = L"Mantinance date";
            this->dataGridViewTextBoxColumn9->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
            this->dataGridViewTextBoxColumn9->Width = 150;
            // 
            // MantinaceDetail
            // 
            this->MantinaceDetail->HeaderText = L"Detail";
            this->MantinaceDetail->MinimumWidth = 8;
            this->MantinaceDetail->Name = L"MantinaceDetail";
            this->MantinaceDetail->Width = 150;
            // 
            // textBox34
            // 
            this->textBox34->Location = System::Drawing::Point(196, 340);
            this->textBox34->Multiline = true;
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(196, 59);
            this->textBox34->TabIndex = 67;
            // 
            // textBox35
            // 
            this->textBox35->Location = System::Drawing::Point(196, 246);
            this->textBox35->Name = L"textBox35";
            this->textBox35->Size = System::Drawing::Size(196, 26);
            this->textBox35->TabIndex = 66;
            // 
            // textBox37
            // 
            this->textBox37->Location = System::Drawing::Point(196, 150);
            this->textBox37->Name = L"textBox37";
            this->textBox37->Size = System::Drawing::Size(196, 26);
            this->textBox37->TabIndex = 64;
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->Location = System::Drawing::Point(34, 199);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(140, 30);
            this->label60->TabIndex = 63;
            this->label60->Text = L"Service type";
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(-2, 242);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(176, 30);
            this->label61->TabIndex = 62;
            this->label61->Text = L"If other specifie";
            // 
            // label62
            // 
            this->label62->AutoSize = true;
            this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->Location = System::Drawing::Point(-9, 287);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(191, 30);
            this->label62->TabIndex = 61;
            this->label62->Text = L"Mantinance date";
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->Location = System::Drawing::Point(96, 335);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(74, 30);
            this->label63->TabIndex = 60;
            this->label63->Text = L"Detail";
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->Location = System::Drawing::Point(96, 150);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(78, 30);
            this->label64->TabIndex = 59;
            this->label64->Text = L"Car ID";
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel11->Controls->Add(this->label65);
            this->panel11->Controls->Add(this->label66);
            this->panel11->Location = System::Drawing::Point(4, 0);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(1038, 117);
            this->panel11->TabIndex = 58;
            // 
            // label65
            // 
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->Location = System::Drawing::Point(414, 68);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(192, 25);
            this->label65->TabIndex = 1;
            this->label65->Text = L"Service Mangment";
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(318, 11);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(391, 32);
            this->label66->TabIndex = 0;
            this->label66->Text = L"Car Rental Mangment System";
            // 
            // tabPage12
            // 
            this->tabPage12->Controls->Add(this->button24);
            this->tabPage12->Controls->Add(this->comboBox8);
            this->tabPage12->Controls->Add(this->comboBox9);
            this->tabPage12->Controls->Add(this->dataGridView6);
            this->tabPage12->Controls->Add(this->textBox36);
            this->tabPage12->Controls->Add(this->textBox39);
            this->tabPage12->Controls->Add(this->label67);
            this->tabPage12->Controls->Add(this->label69);
            this->tabPage12->Controls->Add(this->label70);
            this->tabPage12->Controls->Add(this->label71);
            this->tabPage12->Controls->Add(this->panel12);
            this->tabPage12->Location = System::Drawing::Point(4, 29);
            this->tabPage12->Name = L"tabPage12";
            this->tabPage12->Padding = System::Windows::Forms::Padding(3);
            this->tabPage12->Size = System::Drawing::Size(1057, 443);
            this->tabPage12->TabIndex = 11;
            this->tabPage12->Text = L"tabPage12";
            this->tabPage12->UseVisualStyleBackColor = true;
            // 
            // button24
            // 
            this->button24->BackColor = System::Drawing::SystemColors::Highlight;
            this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->Location = System::Drawing::Point(204, 344);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(195, 48);
            this->button24->TabIndex = 83;
            this->button24->Text = L"Claim Now";
            this->button24->UseVisualStyleBackColor = false;
            // 
            // comboBox8
            // 
            this->comboBox8->FormattingEnabled = true;
            this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Petrol", L"Diesel", L"High Octane", L"CNG gas" });
            this->comboBox8->Location = System::Drawing::Point(203, 204);
            this->comboBox8->Name = L"comboBox8";
            this->comboBox8->Size = System::Drawing::Size(196, 28);
            this->comboBox8->TabIndex = 82;
            // 
            // comboBox9
            // 
            this->comboBox9->FormattingEnabled = true;
            this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->comboBox9->Location = System::Drawing::Point(203, 255);
            this->comboBox9->Name = L"comboBox9";
            this->comboBox9->Size = System::Drawing::Size(196, 28);
            this->comboBox9->TabIndex = 81;
            // 
            // dataGridView6
            // 
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dataGridViewTextBoxColumn10,
                    this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13
            });
            this->dataGridView6->Location = System::Drawing::Point(430, 150);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 62;
            this->dataGridView6->RowTemplate->Height = 28;
            this->dataGridView6->Size = System::Drawing::Size(616, 150);
            this->dataGridView6->TabIndex = 80;
            // 
            // dataGridViewTextBoxColumn10
            // 
            this->dataGridViewTextBoxColumn10->HeaderText = L"CarID";
            this->dataGridViewTextBoxColumn10->MinimumWidth = 10;
            this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
            this->dataGridViewTextBoxColumn10->Width = 150;
            // 
            // dataGridViewTextBoxColumn11
            // 
            this->dataGridViewTextBoxColumn11->HeaderText = L"ServiceType";
            this->dataGridViewTextBoxColumn11->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
            this->dataGridViewTextBoxColumn11->Width = 150;
            // 
            // dataGridViewTextBoxColumn12
            // 
            this->dataGridViewTextBoxColumn12->HeaderText = L"Mantinance date";
            this->dataGridViewTextBoxColumn12->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
            this->dataGridViewTextBoxColumn12->Width = 150;
            // 
            // dataGridViewTextBoxColumn13
            // 
            this->dataGridViewTextBoxColumn13->HeaderText = L"Detail";
            this->dataGridViewTextBoxColumn13->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
            this->dataGridViewTextBoxColumn13->Width = 150;
            // 
            // textBox36
            // 
            this->textBox36->Location = System::Drawing::Point(203, 306);
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(196, 26);
            this->textBox36->TabIndex = 79;
            // 
            // textBox39
            // 
            this->textBox39->Location = System::Drawing::Point(203, 150);
            this->textBox39->Name = L"textBox39";
            this->textBox39->Size = System::Drawing::Size(196, 26);
            this->textBox39->TabIndex = 77;
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->Location = System::Drawing::Point(71, 199);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(110, 30);
            this->label67->TabIndex = 76;
            this->label67->Text = L"Fule type";
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->Location = System::Drawing::Point(63, 250);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(114, 30);
            this->label69->TabIndex = 74;
            this->label69->Text = L"fule in Ltr";
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->Location = System::Drawing::Point(14, 306);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(167, 30);
            this->label70->TabIndex = 73;
            this->label70->Text = L"Fule price in rs";
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->Location = System::Drawing::Point(75, 146);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(106, 30);
            this->label71->TabIndex = 72;
            this->label71->Text = L"Driver ID";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel12->Controls->Add(this->label72);
            this->panel12->Controls->Add(this->label73);
            this->panel12->Location = System::Drawing::Point(11, 0);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(1038, 117);
            this->panel12->TabIndex = 71;
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->Location = System::Drawing::Point(414, 68);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(110, 25);
            this->label72->TabIndex = 1;
            this->label72->Text = L"Fule claim";
            // 
            // label73
            // 
            this->label73->AutoSize = true;
            this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->Location = System::Drawing::Point(318, 11);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(391, 32);
            this->label73->TabIndex = 0;
            this->label73->Text = L"Car Rental Mangment System";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1079, 500);
            this->Controls->Add(this->TabControl1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->TabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->tabPage8->ResumeLayout(false);
            this->tabPage8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->tabPage9->ResumeLayout(false);
            this->tabPage9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->tabPage10->ResumeLayout(false);
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->tabPage11->ResumeLayout(false);
            this->tabPage11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->tabPage12->ResumeLayout(false);
            this->tabPage12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Admin^ admin = gcnew Admin();
    bool loggedIn = admin->loginAdmin(txtUsername->Text, txtPassword->Text);

    if (loggedIn) {
        // If login is successful, show the admin dashboard (tabPage2)
        MessageBox::Show("Login successful! Redirecting to Admin Dashboard...", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        
        TabControl1->SelectedTab = tabPage2; // Redirect to Admin Dashboard (tabPage2)
    }
    else {
        MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    Admin^ admin = gcnew Admin();
    admin->createAdmin(txtUsername->Text, txtPassword->Text);
    MessageBox::Show("Admin created successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    // Create an instance of the Admin class and clear all admins
    Admin^ admin = gcnew Admin();
    admin->clearAllAdmins();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
    // Show a confirmation message box before exiting
    System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to exit CRMS?", "Exit Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

    if (result == System::Windows::Forms::DialogResult::Yes) {
        Application::Exit();  
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Admin^ admin = gcnew Admin();
    admin->generateReport();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    
    TabControl1->SelectedTab = tabPage6;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    TabControl1->SelectedTab = tabPage3;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    TabControl1->SelectedTab = tabPage8;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    TabControl1->SelectedTab = tabPage9;
}
private: System::Void btnAddCar_Click(System::Object^ sender, System::EventArgs^ e) {
    // Retrieve input values
    String^ carID = txtCarID->Text;
    String^ model = txtModel->Text;
    String^ color = txtColor->Text;
    String^ mileage = txtMileage->Text;
    String^ brand = txtBrand->Text;
    String^ type = cmbType->SelectedItem != nullptr ? cmbType->SelectedItem->ToString() : "";

    // Validate input fields
    if (String::IsNullOrEmpty(carID) || String::IsNullOrEmpty(model) ||
        String::IsNullOrEmpty(color) || String::IsNullOrEmpty(brand) ||
        String::IsNullOrEmpty(type)) {
        MessageBox::Show("Please fill all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Create new Car object
    Car^ newCar = gcnew Car(carID, model, color, mileage, brand, type);

    // Add to the car list and DataGridView
    carList->Add(newCar);  // carList is your list of cars
    dataGridView1->Rows->Add(carID, model, color, mileage, brand, type);  // Adds a new row to DataGridView

    // Show success message
    MessageBox::Show("Car added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Save the updated car list to the file
    Car::SaveCarsToFile(carList, "C:\\Users\\hp\\Desktop\\Cars.txt");

    // Clear input fields
    txtCarID->Clear();
    txtModel->Clear();
    txtColor->Clear();
    txtMileage->Clear();
    txtBrand->Clear();
    cmbType->SelectedIndex = -1;
}

      

private: System::Void btnUpdateCar_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ carID = txtCarID->Text;
    Car^ carToUpdate = nullptr;

    // Find the car in the list by matching the carID
    for each (Car ^ c in carList) {
        if (c->carID == carID) {
            carToUpdate = c;
            break;
        }
    }

    if (carToUpdate != nullptr) {
        // Update car details from the form fields
        carToUpdate->model = txtModel->Text;
        carToUpdate->color = txtColor->Text;
        carToUpdate->mileage = txtMileage->Text;
        carToUpdate->brand = txtBrand->Text;
        carToUpdate->type = cmbType->SelectedItem != nullptr ? cmbType->SelectedItem->ToString() : "";

        MessageBox::Show("Car updated successfully!", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Refresh DataGridView
        dataGridView1->Rows->Clear();
        for each (Car ^ c in carList) {
            dataGridView1->Rows->Add(c->carID, c->model, c->color, c->mileage, c->brand, c->type);
        }

        // Save the updated car list to the file
        Car::SaveCarsToFile(carList, "C:\\Users\\hp\\Desktop\\Cars\\car.txt");
    }
    else {
        MessageBox::Show("Car not found!", "Update Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void btnResetCar_Click(System::Object^ sender, System::EventArgs^ e) {
    
    // Clear text boxes
    txtCarID->Clear();
    txtModel->Clear();
    txtColor->Clear();
    txtMileage->Clear();
    txtBrand->Clear();

    // Reset combo box
    cmbType->SelectedIndex = -1;

    // Clear DataGridView rows
    dataGridView1->Rows->Clear();

    // Optionally, if you want to also clear the carList so that the DataGridView doesn't populate old data when re-adding cars, you can do this:
    carList->Clear();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get customer details from textboxes
    String^ name = txtCustomerName->Text;
    String^ email = txtEmail->Text;
    String^ phone = txtPhoneNumber->Text;
    String^ address = txtAddress->Text;

    // Create a new customer object and add it to the list
    Customer^ newCustomer = gcnew Customer(name, email, phone, address);
    

    // Add the customer to the DataGridView
    dataGridView3->Rows->Add(newCustomer->CustomerName, newCustomer->Email, newCustomer->PhoneNumber, newCustomer->Address);
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ searchQuery = txtCustomerName->Text->Trim();  // Get the search text and remove extra spaces

    if (String::IsNullOrEmpty(searchQuery)) {
        MessageBox::Show("Please enter a name to search.", "Search Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;  // Exit if the textbox is empty
    }

    bool found = false;  // Flag to check if any match is found

    // Iterate through the rows in the DataGridView to search for a customer name
    for (int i = 0; i < dataGridView3->Rows->Count; i++) {
        DataGridViewRow^ row = dataGridView3->Rows[i];

        // Check if the cell value is not null before trying to access it
        if (row->Cells["CustomerName"]->Value != nullptr) {
            String^ customerName = row->Cells["CustomerName"]->Value->ToString();  // Get the CustomerName from the row

            // Check if the CustomerName contains the search query
            if (customerName->ToLower()->Contains(searchQuery->ToLower())) {
                row->Selected = true;  // Highlight the row if it matches the search query
                found = true;
            }
            else {
                row->Selected = false;  // Deselect the row if it doesn't match
            }
        }
        else {
            row->Selected = false;  // Deselect if the value is null
        }
    }

    // If no match is found, show a message box
    if (!found) {
        MessageBox::Show("No customer found with the given name.", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    // Ensure a row is selected in the DataGridView
    if (dataGridView3->SelectedRows->Count == 0) {
        MessageBox::Show("Please select a customer to update.", "Selection Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Get the selected row
    DataGridViewRow^ selectedRow = dataGridView3->SelectedRows[0];

    // Retrieve updated values from the textboxes
    String^ updatedName = txtCustomerName->Text;
    String^ updatedEmail = txtEmail->Text;
    String^ updatedPhoneNumber = txtPhoneNumber->Text;
    String^ updatedAddress = txtAddress->Text;

    // Check if the updated details are valid
    if (String::IsNullOrEmpty(updatedName) || String::IsNullOrEmpty(updatedEmail) ||
        String::IsNullOrEmpty(updatedPhoneNumber) || String::IsNullOrEmpty(updatedAddress)) {
        MessageBox::Show("Please fill all fields to update.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Update the values in the selected DataGridView row
    selectedRow->Cells["CustomerName"]->Value = updatedName;
    selectedRow->Cells["Email"]->Value = updatedEmail;
    selectedRow->Cells["PhoneNumber"]->Value = updatedPhoneNumber;
    selectedRow->Cells["Address"]->Value = updatedAddress;

    // Show a success message
    MessageBox::Show("Customer updated successfully.", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Optionally, clear the input fields after updating
    txtCustomerName->Clear();
    txtEmail->Clear();
    txtPhoneNumber->Clear();
    txtAddress->Clear();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView3->SelectedRows->Count > 0)
    {
        int rowIndex = dataGridView3->SelectedRows[0]->Index;
     
        dataGridView3->Rows->RemoveAt(rowIndex);
    }
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    // Check if driverList is null, and initialize it if it is
    if (driverList == nullptr) {
        driverList = gcnew List<Driver^>();
    }

    // Retrieve input values
    String^ driverID = txtDriverID->Text;
    String^ name = txtDriverName->Text;
    String^ age = txtAge->Text;
    String^ license = cmbLicence->SelectedItem != nullptr ? cmbLicence->SelectedItem->ToString() : "";
    String^ homeAddress = txtHomeAdress->Text;

    // Validation
    if (String::IsNullOrEmpty(driverID) || String::IsNullOrEmpty(name) || String::IsNullOrEmpty(license) || String::IsNullOrEmpty(homeAddress)) {
        MessageBox::Show("Please fill all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    try {
        // Create a new Driver object
        Driver^ newDriver = gcnew Driver(driverID, name, age, license, homeAddress);

        // Add the new driver to the driverList
        driverList->Add(newDriver);

        // Optionally, add the new driver to the DataGridView
        dataGridView4->Rows->Add(driverID, name, age, license, homeAddress);

        // Show success message
        MessageBox::Show("Driver added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Save the updated driver list to the file
        Driver::SaveDriversToFile(driverList, "C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\Drivers.txt");

        // Clear input fields after successful addition
        txtDriverID->Clear();
        txtDriverName->Clear();
        txtAge->Clear();
        cmbLicence->SelectedIndex = -1;
        txtHomeAdress->Clear();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error adding driver: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the driverID from the input field (e.g., txtDriverID)
    String^ driverID = txtDriverID->Text;

    // Validation: Check if the driverID is empty
    if (String::IsNullOrEmpty(driverID)) {
        MessageBox::Show("Please enter a Driver ID to update.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Check if driverList is initialized
    if (driverList == nullptr) {
        MessageBox::Show("No drivers to update.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Find the driver in the list based on driverID
    Driver^ driverToUpdate = nullptr;
    for (int i = 0; i < driverList->Count; i++) {
        if (driverList[i]->DriverID == driverID) {
            driverToUpdate = driverList[i];
            break;
        }
    }

    // If the driver is found, update its details
    if (driverToUpdate != nullptr) {
        // Retrieve updated values from the input fields
        String^ name = txtDriverName->Text;
        String^ age = txtAge->Text;
        String^ license = cmbLicence->SelectedItem != nullptr ? cmbLicence->SelectedItem->ToString() : "";
        String^ homeAddress = txtHomeAdress->Text;

        // Validate new inputs
        if (String::IsNullOrEmpty(name) || String::IsNullOrEmpty(license) || String::IsNullOrEmpty(homeAddress)) {
            MessageBox::Show("Please fill all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        // Update the driver's details
        driverToUpdate->Name = name;
        driverToUpdate->Age = age;
        driverToUpdate->License = license;
        driverToUpdate->HomeAddress = homeAddress;

        // Update the DataGridView to reflect the changes
        for (int i = 0; i < dataGridView4->Rows->Count; i++) {
            if (dataGridView4->Rows[i]->Cells[0]->Value->ToString() == driverID) {
                // Update the corresponding row in the DataGridView
                dataGridView4->Rows[i]->Cells[1]->Value = name;
                dataGridView4->Rows[i]->Cells[2]->Value = age;
                dataGridView4->Rows[i]->Cells[3]->Value = license;
                dataGridView4->Rows[i]->Cells[4]->Value = homeAddress;
                break;
            }
        }

        // Show success message
        MessageBox::Show("Driver updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Optionally, save the updated list to the file
        Driver::SaveDriversToFile(driverList, "C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\Drivers.txt");

        // Clear the input fields after successful update
        txtDriverID->Clear();
        txtDriverName->Clear();
        txtAge->Clear();
        cmbLicence->SelectedIndex = -1;
        txtHomeAdress->Clear();
    }
    else {
        MessageBox::Show("Driver with the specified ID not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the driverID from the input field (e.g., txtDriverID)
    String^ driverID = txtDriverID->Text;

    // Validation: Check if the driverID is empty
    if (String::IsNullOrEmpty(driverID)) {
        MessageBox::Show("Please enter a Driver ID to delete.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Check if driverList is initialized
    if (driverList == nullptr) {
        MessageBox::Show("No drivers to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Find the driver in the list based on driverID
    Driver^ driverToDelete = nullptr;
    for (int i = 0; i < driverList->Count; i++) {
        if (driverList[i]->DriverID == driverID) {
            driverToDelete = driverList[i];
            break;
        }
    }

    // If the driver is found, remove from the list
    if (driverToDelete != nullptr) {
        // Remove from driverList
        driverList->Remove(driverToDelete);

        // Optionally, remove from the DataGridView
        for (int i = 0; i < dataGridView4->Rows->Count; i++) {
            if (dataGridView4->Rows[i]->Cells[0]->Value->ToString() == driverID) {
                dataGridView4->Rows->RemoveAt(i);
                break;
            }
        }

        // Show success message
        MessageBox::Show("Driver deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Optionally, save the updated list to the file
        Driver::SaveDriversToFile(driverList, "C:\\Users\\hp\\Desktop\\CarRentalManagmentSystem\\Drivers.txt");

        // Clear the input fields after deletion
        txtDriverID->Clear();
    }
    else {
        MessageBox::Show("Driver with the specified ID not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
};
private: System::Void comboBoxCars_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
};
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    // Check if a row is selected in the DataGridView
    if (dataGridView1->SelectedRows->Count == 0) {
        MessageBox::Show("Please select a car to delete.", "Deletion Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Get the car ID of the selected row
    String^ carID = dataGridView1->SelectedRows[0]->Cells["CarID"]->Value->ToString();

    // Find the car in the carList by matching the car ID
    Car^ carToDelete = nullptr;
    for each (Car ^ car in carList) {
        if (car->carID == carID) {
            carToDelete = car;
            break;
        }
    }

    // If the car is found, remove it from the list and DataGridView
    if (carToDelete != nullptr) {
        // Remove the car from the list
        carList->Remove(carToDelete);

        // Remove the row from the DataGridView
        dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);

        // Show success message
        MessageBox::Show("Car deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Save the updated car list to the file
        Car::SaveCarsToFile(carList, "C:\\Users\\hp\\Desktop\\Cars.txt");
    }
    else {
        MessageBox::Show("Car not found in the list.", "Deletion Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void txtCarID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}




