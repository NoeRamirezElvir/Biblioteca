#pragma once
#include "frmPersona.h"
#include "frmCliente.h"
#include "frmLibro.h"


namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBiblioteca
	/// </summary>
	public ref class frmBiblioteca : public System::Windows::Forms::Form
	{
	public:
		frmBiblioteca(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBiblioteca()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPersona;
	protected:
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnLibro;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBiblioteca::typeid));
			this->btnPersona = (gcnew System::Windows::Forms::Button());
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnLibro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPersona
			// 
			this->btnPersona->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPersona->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPersona->FlatAppearance->BorderSize = 2;
			this->btnPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersona->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersona.Image")));
			this->btnPersona->Location = System::Drawing::Point(298, 94);
			this->btnPersona->Name = L"btnPersona";
			this->btnPersona->Size = System::Drawing::Size(95, 47);
			this->btnPersona->TabIndex = 0;
			this->btnPersona->Text = L"Persona";
			this->btnPersona->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPersona->UseVisualStyleBackColor = false;
			this->btnPersona->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPersona_Click);
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::LightSalmon;
			this->btnCliente->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnCliente->FlatAppearance->BorderSize = 2;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCliente.Image")));
			this->btnCliente->Location = System::Drawing::Point(298, 147);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(95, 49);
			this->btnCliente->TabIndex = 1;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnCliente_Click);
			// 
			// btnLibro
			// 
			this->btnLibro->BackColor = System::Drawing::Color::LightSalmon;
			this->btnLibro->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnLibro->FlatAppearance->BorderSize = 2;
			this->btnLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLibro->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLibro.Image")));
			this->btnLibro->Location = System::Drawing::Point(298, 202);
			this->btnLibro->Name = L"btnLibro";
			this->btnLibro->Size = System::Drawing::Size(95, 47);
			this->btnLibro->TabIndex = 2;
			this->btnLibro->Text = L"Libros";
			this->btnLibro->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLibro->UseVisualStyleBackColor = false;
			this->btnLibro->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnLibro_Click);
			// 
			// frmBiblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(938, 594);
			this->Controls->Add(this->btnLibro);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnPersona);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmBiblioteca";
			this->Text = L"Biblioteca";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPersona_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersona^ formulario = gcnew frmPersona;
		formulario->Show();
	}
	private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ formulario = gcnew frmCliente;
		formulario->Show();
	}
	private: System::Void btnLibro_Click(System::Object^ sender, System::EventArgs^ e) {
		frmLibro^ formulario = gcnew frmLibro;
		formulario->Show();
	}
};
}
