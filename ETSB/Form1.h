#pragma once

namespace ETSB {

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
	private: System::Windows::Forms::NumericUpDown^  Rdp;
	protected: 
	private: System::Windows::Forms::Label^  label_Rdp;
	private: System::Windows::Forms::Label^  label_Rdp_Multiplier;
	private: System::Windows::Forms::NumericUpDown^  Rdp_Exponent;
	private: System::Windows::Forms::NumericUpDown^  Tstar;
	private: System::Windows::Forms::Label^  label_Tstar;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  Rstar;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  Rstar_Exponent;
	private: System::Windows::Forms::Label^  Istar;
	private: System::Windows::Forms::Button^  Calculate;


	private: System::Windows::Forms::Label^  label1_Istar;
	private: System::Windows::Forms::Label^  label1_eStar;
	private: System::Windows::Forms::Label^  Estar;
	private: System::Windows::Forms::Label^  label1_Iatplanet;
	private: System::Windows::Forms::Label^  Iatp;
	private: System::Windows::Forms::Label^  label1_Tatplanet;
	private: System::Windows::Forms::Label^  Tatp;
	private: System::Windows::Forms::Label^  label1_Tofplanet;
	private: System::Windows::Forms::Label^  Tofp;
	private: System::Windows::Forms::NumericUpDown^  Albedo;
	private: System::Windows::Forms::Label^  Albedo_Label;
	private: System::Windows::Forms::Button^  Exit;


	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Rdp = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_Rdp = (gcnew System::Windows::Forms::Label());
			this->label_Rdp_Multiplier = (gcnew System::Windows::Forms::Label());
			this->Rdp_Exponent = (gcnew System::Windows::Forms::NumericUpDown());
			this->Tstar = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_Tstar = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Rstar = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Rstar_Exponent = (gcnew System::Windows::Forms::NumericUpDown());
			this->Istar = (gcnew System::Windows::Forms::Label());
			this->Calculate = (gcnew System::Windows::Forms::Button());
			this->label1_Istar = (gcnew System::Windows::Forms::Label());
			this->label1_eStar = (gcnew System::Windows::Forms::Label());
			this->Estar = (gcnew System::Windows::Forms::Label());
			this->label1_Iatplanet = (gcnew System::Windows::Forms::Label());
			this->Iatp = (gcnew System::Windows::Forms::Label());
			this->label1_Tatplanet = (gcnew System::Windows::Forms::Label());
			this->Tatp = (gcnew System::Windows::Forms::Label());
			this->label1_Tofplanet = (gcnew System::Windows::Forms::Label());
			this->Tofp = (gcnew System::Windows::Forms::Label());
			this->Albedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->Albedo_Label = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rdp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rdp_Exponent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Tstar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rstar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rstar_Exponent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Albedo))->BeginInit();
			this->SuspendLayout();
			// 
			// Rdp
			// 
			this->Rdp->DecimalPlaces = 6;
			this->Rdp->InterceptArrowKeys = false;
			this->Rdp->Location = System::Drawing::Point(30, 170);
			this->Rdp->Name = L"Rdp";
			this->Rdp->Size = System::Drawing::Size(120, 20);
			this->Rdp->TabIndex = 3;
			this->Rdp->Enter += gcnew System::EventHandler(this, &Form1::Rdp_Enter);
			// 
			// label_Rdp
			// 
			this->label_Rdp->AutoSize = true;
			this->label_Rdp->Location = System::Drawing::Point(30, 150);
			this->label_Rdp->Name = L"label_Rdp";
			this->label_Rdp->Size = System::Drawing::Size(210, 13);
			this->label_Rdp->TabIndex = 1;
			this->label_Rdp->Text = L"Average Orbital Distance of Planet (meters)";
			// 
			// label_Rdp_Multiplier
			// 
			this->label_Rdp_Multiplier->AutoSize = true;
			this->label_Rdp_Multiplier->Location = System::Drawing::Point(156, 174);
			this->label_Rdp_Multiplier->Name = L"label_Rdp_Multiplier";
			this->label_Rdp_Multiplier->Size = System::Drawing::Size(32, 13);
			this->label_Rdp_Multiplier->TabIndex = 2;
			this->label_Rdp_Multiplier->Text = L"* 10^";
			// 
			// Rdp_Exponent
			// 
			this->Rdp_Exponent->Location = System::Drawing::Point(190, 170);
			this->Rdp_Exponent->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, System::Int32::MinValue});
			this->Rdp_Exponent->Name = L"Rdp_Exponent";
			this->Rdp_Exponent->Size = System::Drawing::Size(50, 20);
			this->Rdp_Exponent->TabIndex = 4;
			this->Rdp_Exponent->Enter += gcnew System::EventHandler(this, &Form1::Rdp_Exponent_Enter);
			// 
			// Tstar
			// 
			this->Tstar->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Tstar->Location = System::Drawing::Point(30, 70);
			this->Tstar->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1569325055, 23283064, 0, 0});
			this->Tstar->Name = L"Tstar";
			this->Tstar->Size = System::Drawing::Size(120, 20);
			this->Tstar->TabIndex = 0;
			this->Tstar->Enter += gcnew System::EventHandler(this, &Form1::Tstar_Enter);
			// 
			// label_Tstar
			// 
			this->label_Tstar->AutoSize = true;
			this->label_Tstar->Location = System::Drawing::Point(30, 50);
			this->label_Tstar->Name = L"label_Tstar";
			this->label_Tstar->Size = System::Drawing::Size(117, 13);
			this->label_Tstar->TabIndex = 5;
			this->label_Tstar->Text = L"Temperature of Star (K)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Radius of Star (meters)";
			// 
			// Rstar
			// 
			this->Rstar->DecimalPlaces = 6;
			this->Rstar->InterceptArrowKeys = false;
			this->Rstar->Location = System::Drawing::Point(30, 120);
			this->Rstar->Name = L"Rstar";
			this->Rstar->Size = System::Drawing::Size(120, 20);
			this->Rstar->TabIndex = 1;
			this->Rstar->Enter += gcnew System::EventHandler(this, &Form1::Rstar_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(156, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"* 10^";
			// 
			// Rstar_Exponent
			// 
			this->Rstar_Exponent->Location = System::Drawing::Point(190, 120);
			this->Rstar_Exponent->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, System::Int32::MinValue});
			this->Rstar_Exponent->Name = L"Rstar_Exponent";
			this->Rstar_Exponent->Size = System::Drawing::Size(50, 20);
			this->Rstar_Exponent->TabIndex = 2;
			this->Rstar_Exponent->Enter += gcnew System::EventHandler(this, &Form1::Rstar_Exponent_Enter);
			// 
			// Istar
			// 
			this->Istar->AutoSize = true;
			this->Istar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Istar->Location = System::Drawing::Point(547, 50);
			this->Istar->Name = L"Istar";
			this->Istar->Size = System::Drawing::Size(31, 20);
			this->Istar->TabIndex = 13;
			this->Istar->Text = L"= 0";
			// 
			// Calculate
			// 
			this->Calculate->Location = System::Drawing::Point(33, 269);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(75, 23);
			this->Calculate->TabIndex = 6;
			this->Calculate->Text = L"Calculate";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &Form1::Calculate_Click);
			// 
			// label1_Istar
			// 
			this->label1_Istar->AutoSize = true;
			this->label1_Istar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1_Istar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1_Istar.Image")));
			this->label1_Istar->Location = System::Drawing::Point(471, 50);
			this->label1_Istar->MinimumSize = System::Drawing::Size(70, 20);
			this->label1_Istar->Name = L"label1_Istar";
			this->label1_Istar->Size = System::Drawing::Size(70, 20);
			this->label1_Istar->TabIndex = 12;
			// 
			// label1_eStar
			// 
			this->label1_eStar->AutoSize = true;
			this->label1_eStar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1_eStar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1_eStar.Image")));
			this->label1_eStar->Location = System::Drawing::Point(418, 100);
			this->label1_eStar->MinimumSize = System::Drawing::Size(123, 20);
			this->label1_eStar->Name = L"label1_eStar";
			this->label1_eStar->Size = System::Drawing::Size(123, 20);
			this->label1_eStar->TabIndex = 14;
			// 
			// Estar
			// 
			this->Estar->AutoSize = true;
			this->Estar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Estar->Location = System::Drawing::Point(547, 100);
			this->Estar->Name = L"Estar";
			this->Estar->Size = System::Drawing::Size(31, 20);
			this->Estar->TabIndex = 15;
			this->Estar->Text = L"= 0";
			// 
			// label1_Iatplanet
			// 
			this->label1_Iatplanet->AutoSize = true;
			this->label1_Iatplanet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1_Iatplanet->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1_Iatplanet.Image")));
			this->label1_Iatplanet->Location = System::Drawing::Point(418, 150);
			this->label1_Iatplanet->MinimumSize = System::Drawing::Size(123, 20);
			this->label1_Iatplanet->Name = L"label1_Iatplanet";
			this->label1_Iatplanet->Size = System::Drawing::Size(123, 20);
			this->label1_Iatplanet->TabIndex = 16;
			// 
			// Iatp
			// 
			this->Iatp->AutoSize = true;
			this->Iatp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Iatp->Location = System::Drawing::Point(547, 150);
			this->Iatp->Name = L"Iatp";
			this->Iatp->Size = System::Drawing::Size(31, 20);
			this->Iatp->TabIndex = 17;
			this->Iatp->Text = L"= 0";
			// 
			// label1_Tatplanet
			// 
			this->label1_Tatplanet->AutoSize = true;
			this->label1_Tatplanet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1_Tatplanet->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1_Tatplanet.Image")));
			this->label1_Tatplanet->Location = System::Drawing::Point(433, 200);
			this->label1_Tatplanet->MinimumSize = System::Drawing::Size(108, 20);
			this->label1_Tatplanet->Name = L"label1_Tatplanet";
			this->label1_Tatplanet->Size = System::Drawing::Size(108, 20);
			this->label1_Tatplanet->TabIndex = 18;
			// 
			// Tatp
			// 
			this->Tatp->AutoSize = true;
			this->Tatp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tatp->Location = System::Drawing::Point(547, 200);
			this->Tatp->Name = L"Tatp";
			this->Tatp->Size = System::Drawing::Size(31, 20);
			this->Tatp->TabIndex = 19;
			this->Tatp->Text = L"= 0";
			// 
			// label1_Tofplanet
			// 
			this->label1_Tofplanet->AutoSize = true;
			this->label1_Tofplanet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1_Tofplanet->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1_Tofplanet.Image")));
			this->label1_Tofplanet->Location = System::Drawing::Point(388, 250);
			this->label1_Tofplanet->MinimumSize = System::Drawing::Size(153, 20);
			this->label1_Tofplanet->Name = L"label1_Tofplanet";
			this->label1_Tofplanet->Size = System::Drawing::Size(153, 20);
			this->label1_Tofplanet->TabIndex = 20;
			// 
			// Tofp
			// 
			this->Tofp->AutoSize = true;
			this->Tofp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tofp->Location = System::Drawing::Point(547, 250);
			this->Tofp->Name = L"Tofp";
			this->Tofp->Size = System::Drawing::Size(31, 20);
			this->Tofp->TabIndex = 21;
			this->Tofp->Text = L"= 0";
			// 
			// Albedo
			// 
			this->Albedo->DecimalPlaces = 3;
			this->Albedo->Location = System::Drawing::Point(30, 220);
			this->Albedo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Albedo->Name = L"Albedo";
			this->Albedo->Size = System::Drawing::Size(50, 20);
			this->Albedo->TabIndex = 5;
			this->Albedo->Enter += gcnew System::EventHandler(this, &Form1::Albedo_Enter);
			// 
			// Albedo_Label
			// 
			this->Albedo_Label->AutoSize = true;
			this->Albedo_Label->Location = System::Drawing::Point(30, 200);
			this->Albedo_Label->Name = L"Albedo_Label";
			this->Albedo_Label->Size = System::Drawing::Size(114, 13);
			this->Albedo_Label->TabIndex = 23;
			this->Albedo_Label->Text = L"Albedo of planet (0 - 1)";
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(137, 269);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 7;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Form1::Exit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 312);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Albedo_Label);
			this->Controls->Add(this->Albedo);
			this->Controls->Add(this->Tofp);
			this->Controls->Add(this->label1_Tofplanet);
			this->Controls->Add(this->Tatp);
			this->Controls->Add(this->label1_Tatplanet);
			this->Controls->Add(this->Iatp);
			this->Controls->Add(this->label1_Iatplanet);
			this->Controls->Add(this->Estar);
			this->Controls->Add(this->label1_eStar);
			this->Controls->Add(this->label1_Istar);
			this->Controls->Add(this->Calculate);
			this->Controls->Add(this->Istar);
			this->Controls->Add(this->Rstar_Exponent);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Rstar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label_Tstar);
			this->Controls->Add(this->Tstar);
			this->Controls->Add(this->Rdp_Exponent);
			this->Controls->Add(this->label_Rdp_Multiplier);
			this->Controls->Add(this->label_Rdp);
			this->Controls->Add(this->Rdp);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 350);
			this->MinimumSize = System::Drawing::Size(800, 350);
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ETSB (Expected Tempuratures of Solar Bodies) - Scott Morton";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rdp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rdp_Exponent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Tstar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rstar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rstar_Exponent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Albedo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void Calculate_Click(System::Object^  sender, System::EventArgs^  e) {

 			 // define some constants from Physics
			 Double sigma = 5.67 * Math::Pow(10, -8);
			 Double pi = 3.141592654;

			 //double exponentA = ;
			 //double base = 10;
			 //Double ^ total = (double)Rstar->Value * Math::Pow(base,exponentA);

			 // Calculate output of the star in watts / meter^2
			 Double ^ iStar = sigma * Math::Pow((int)Tstar->Value, 4);
			 Istar->Text = "= " + iStar->ToString("0.00000' 'E+0") + " W/M^2";
			 
			 // Calculate the total output of the star in Watts
			 Double rStar = (double)Rstar->Value * Math::Pow(10,(int)Rstar_Exponent->Value);
			 Double ^ eStar = (double)iStar * pi * 4 * Math::Pow(rStar, 2);
			 Estar->Text = "= " + eStar->ToString("0.00000' 'E+0") + " Watts";

			 // Calculate the power in W/M^2 at the radius of the given planet
			 Double rAtPlanet = (double)Rdp->Value * Math::Pow(10,(int)Rdp_Exponent->Value);
			 Double ^ iAtPlanet = (double)eStar / ( pi * 4 * Math::Pow(rAtPlanet,2));
			 Iatp->Text = "= " + iAtPlanet->ToString("0.00000' 'E+0") + " W/M^2";

			 // Calculate the sub-space temperature at the radius of the planet
			 Double ^ tempAtPlanet = Math::Pow((double)iAtPlanet/sigma,0.25);
			 Tatp->Text = "= " + tempAtPlanet->ToString("0.00000' 'E+0") + " K";

			 // Calculate the estimated temperature of the planet using the Albedo reference
			 Double ^ tempOfPlanet = (double)tempAtPlanet * (double)( 1 - Albedo->Value );
			 Tofp->Text = "= " + tempOfPlanet->ToString("0.00000' 'E+0") + " K";
			 

		 }
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void Tstar_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Tstar->Text = "";

		 }
private: System::Void Rstar_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Rstar->Text = "";
		 }
private: System::Void Rstar_Exponent_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Rstar_Exponent->Text = "";
		 }
private: System::Void Rdp_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Rdp->Text = "";
		 }
private: System::Void Rdp_Exponent_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Rdp_Exponent->Text = "";
		 }
private: System::Void Albedo_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Albedo->Text = "";
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

