#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPersona
	/// </summary>
	public ref class frmPersona : public System::Windows::Forms::Form
	{
	public:
		frmPersona(void)
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
		~frmPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lblPrimerNombre;
	private: System::Windows::Forms::TextBox^ txtPrimerNombre;
	private: System::Windows::Forms::Label^ lblApellidoPaterno;
	private: System::Windows::Forms::TextBox^ txtApellidoPaterno;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lblIDpersona;

	private: System::Windows::Forms::TextBox^ txtIDPersona;

	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ lblEdad;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::Label^ lblGeneroPersona;







	private: System::Windows::Forms::Label^ lblIdentificacion;


	private: System::Windows::Forms::TextBox^ txtIdentificacion;
	private: System::Windows::Forms::Label^ lblTelefonoPersona;
	private: System::Windows::Forms::TextBox^ txtTelefonoPersona;




	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ lblRegistroPersona;
	private: System::Windows::Forms::Button^ btnRegistrarPersona;
	private: System::Windows::Forms::Button^ btnMostrarPersona;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::ComboBox^ cboGeneroPersona;
	private: System::Windows::Forms::Label^ lblCategoriaPersona;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ lblTipoPersona;
	private: System::Windows::Forms::ComboBox^ comboBox1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPersona::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPrimerNombre = (gcnew System::Windows::Forms::Label());
			this->txtPrimerNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoPaterno = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblIDpersona = (gcnew System::Windows::Forms::Label());
			this->txtIDPersona = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->lblGeneroPersona = (gcnew System::Windows::Forms::Label());
			this->lblIdentificacion = (gcnew System::Windows::Forms::Label());
			this->txtIdentificacion = (gcnew System::Windows::Forms::TextBox());
			this->lblTelefonoPersona = (gcnew System::Windows::Forms::Label());
			this->txtTelefonoPersona = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->lblRegistroPersona = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarPersona = (gcnew System::Windows::Forms::Button());
			this->btnMostrarPersona = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->cboGeneroPersona = (gcnew System::Windows::Forms::ComboBox());
			this->lblCategoriaPersona = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTipoPersona = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 191);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 36);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(86, 230);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 38);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// lblPrimerNombre
			// 
			this->lblPrimerNombre->AutoSize = true;
			this->lblPrimerNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrimerNombre->Location = System::Drawing::Point(189, 191);
			this->lblPrimerNombre->Name = L"lblPrimerNombre";
			this->lblPrimerNombre->Size = System::Drawing::Size(58, 13);
			this->lblPrimerNombre->TabIndex = 2;
			this->lblPrimerNombre->Text = L"Nombre: ";
			// 
			// txtPrimerNombre
			// 
			this->txtPrimerNombre->Location = System::Drawing::Point(251, 191);
			this->txtPrimerNombre->Name = L"txtPrimerNombre";
			this->txtPrimerNombre->Size = System::Drawing::Size(121, 20);
			this->txtPrimerNombre->TabIndex = 3;
			// 
			// lblApellidoPaterno
			// 
			this->lblApellidoPaterno->AutoSize = true;
			this->lblApellidoPaterno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidoPaterno->Location = System::Drawing::Point(187, 229);
			this->lblApellidoPaterno->Name = L"lblApellidoPaterno";
			this->lblApellidoPaterno->Size = System::Drawing::Size(60, 13);
			this->lblApellidoPaterno->TabIndex = 4;
			this->lblApellidoPaterno->Text = L"Apellido: ";
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(251, 229);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(121, 20);
			this->txtApellidoPaterno->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(86, 143);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 42);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// lblIDpersona
			// 
			this->lblIDpersona->AutoSize = true;
			this->lblIDpersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDpersona->Location = System::Drawing::Point(145, 150);
			this->lblIDpersona->Name = L"lblIDpersona";
			this->lblIDpersona->Size = System::Drawing::Size(98, 13);
			this->lblIDpersona->TabIndex = 7;
			this->lblIDpersona->Text = L"No. ID Persona:";
			// 
			// txtIDPersona
			// 
			this->txtIDPersona->Location = System::Drawing::Point(251, 150);
			this->txtIDPersona->Name = L"txtIDPersona";
			this->txtIDPersona->Size = System::Drawing::Size(121, 20);
			this->txtIDPersona->TabIndex = 8;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(86, 274);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 38);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(86, 362);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(39, 39);
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(86, 407);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(39, 39);
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(203, 276);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(44, 13);
			this->lblEdad->TabIndex = 14;
			this->lblEdad->Text = L"Edad: ";
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(251, 276);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(121, 20);
			this->txtEdad->TabIndex = 15;
			// 
			// lblGeneroPersona
			// 
			this->lblGeneroPersona->AutoSize = true;
			this->lblGeneroPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGeneroPersona->Location = System::Drawing::Point(189, 318);
			this->lblGeneroPersona->Name = L"lblGeneroPersona";
			this->lblGeneroPersona->Size = System::Drawing::Size(52, 13);
			this->lblGeneroPersona->TabIndex = 18;
			this->lblGeneroPersona->Text = L"Genero:";
			// 
			// lblIdentificacion
			// 
			this->lblIdentificacion->AutoSize = true;
			this->lblIdentificacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdentificacion->Location = System::Drawing::Point(155, 366);
			this->lblIdentificacion->Name = L"lblIdentificacion";
			this->lblIdentificacion->Size = System::Drawing::Size(92, 13);
			this->lblIdentificacion->TabIndex = 20;
			this->lblIdentificacion->Text = L"Identificacion: ";
			// 
			// txtIdentificacion
			// 
			this->txtIdentificacion->Location = System::Drawing::Point(251, 366);
			this->txtIdentificacion->Name = L"txtIdentificacion";
			this->txtIdentificacion->Size = System::Drawing::Size(121, 20);
			this->txtIdentificacion->TabIndex = 21;
			// 
			// lblTelefonoPersona
			// 
			this->lblTelefonoPersona->AutoSize = true;
			this->lblTelefonoPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelefonoPersona->Location = System::Drawing::Point(125, 411);
			this->lblTelefonoPersona->Name = L"lblTelefonoPersona";
			this->lblTelefonoPersona->Size = System::Drawing::Size(122, 13);
			this->lblTelefonoPersona->TabIndex = 22;
			this->lblTelefonoPersona->Text = L"Numero de telefono:";
			// 
			// txtTelefonoPersona
			// 
			this->txtTelefonoPersona->Location = System::Drawing::Point(251, 410);
			this->txtTelefonoPersona->Name = L"txtTelefonoPersona";
			this->txtTelefonoPersona->Size = System::Drawing::Size(121, 20);
			this->txtTelefonoPersona->TabIndex = 23;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(378, 327);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(293, 277);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 24;
			this->pictureBox9->TabStop = false;
			// 
			// lblRegistroPersona
			// 
			this->lblRegistroPersona->AutoSize = true;
			this->lblRegistroPersona->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistroPersona->Location = System::Drawing::Point(200, 32);
			this->lblRegistroPersona->Name = L"lblRegistroPersona";
			this->lblRegistroPersona->Size = System::Drawing::Size(304, 36);
			this->lblRegistroPersona->TabIndex = 25;
			this->lblRegistroPersona->Text = L"Registro De Personas";
			// 
			// btnRegistrarPersona
			// 
			this->btnRegistrarPersona->BackColor = System::Drawing::Color::Moccasin;
			this->btnRegistrarPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegistrarPersona->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarPersona->FlatAppearance->BorderSize = 2;
			this->btnRegistrarPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegistrarPersona->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarPersona.Image")));
			this->btnRegistrarPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistrarPersona->Location = System::Drawing::Point(468, 216);
			this->btnRegistrarPersona->Name = L"btnRegistrarPersona";
			this->btnRegistrarPersona->Size = System::Drawing::Size(145, 45);
			this->btnRegistrarPersona->TabIndex = 26;
			this->btnRegistrarPersona->Text = L"Registrar";
			this->btnRegistrarPersona->UseVisualStyleBackColor = false;
			// 
			// btnMostrarPersona
			// 
			this->btnMostrarPersona->BackColor = System::Drawing::Color::Moccasin;
			this->btnMostrarPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMostrarPersona->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarPersona->FlatAppearance->BorderSize = 2;
			this->btnMostrarPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarPersona->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMostrarPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarPersona.Image")));
			this->btnMostrarPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrarPersona->Location = System::Drawing::Point(468, 276);
			this->btnMostrarPersona->Name = L"btnMostrarPersona";
			this->btnMostrarPersona->Size = System::Drawing::Size(145, 45);
			this->btnMostrarPersona->TabIndex = 27;
			this->btnMostrarPersona->Text = L"Mostrar";
			this->btnMostrarPersona->UseVisualStyleBackColor = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(86, 318);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 38);
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// cboGeneroPersona
			// 
			this->cboGeneroPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cboGeneroPersona->FormattingEnabled = true;
			this->cboGeneroPersona->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Femenino", L"Masculino" });
			this->cboGeneroPersona->Location = System::Drawing::Point(251, 318);
			this->cboGeneroPersona->Name = L"cboGeneroPersona";
			this->cboGeneroPersona->Size = System::Drawing::Size(121, 21);
			this->cboGeneroPersona->TabIndex = 29;
			// 
			// lblCategoriaPersona
			// 
			this->lblCategoriaPersona->AutoSize = true;
			this->lblCategoriaPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCategoriaPersona->Location = System::Drawing::Point(178, 451);
			this->lblCategoriaPersona->Name = L"lblCategoriaPersona";
			this->lblCategoriaPersona->Size = System::Drawing::Size(69, 13);
			this->lblCategoriaPersona->TabIndex = 30;
			this->lblCategoriaPersona->Text = L"Categoria: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(251, 451);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 31;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(86, 451);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(41, 42);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// lblTipoPersona
			// 
			this->lblTipoPersona->AutoSize = true;
			this->lblTipoPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipoPersona->Location = System::Drawing::Point(436, 153);
			this->lblTipoPersona->Name = L"lblTipoPersona";
			this->lblTipoPersona->Size = System::Drawing::Size(40, 13);
			this->lblTipoPersona->TabIndex = 33;
			this->lblTipoPersona->Text = L"Tipo: ";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cliente", L"Empleado" });
			this->comboBox1->Location = System::Drawing::Point(482, 149);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 34;
			// 
			// frmPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(683, 601);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblTipoPersona);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblCategoriaPersona);
			this->Controls->Add(this->cboGeneroPersona);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->btnMostrarPersona);
			this->Controls->Add(this->btnRegistrarPersona);
			this->Controls->Add(this->lblRegistroPersona);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->txtTelefonoPersona);
			this->Controls->Add(this->lblTelefonoPersona);
			this->Controls->Add(this->txtIdentificacion);
			this->Controls->Add(this->lblIdentificacion);
			this->Controls->Add(this->lblGeneroPersona);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->txtIDPersona);
			this->Controls->Add(this->lblIDpersona);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->txtApellidoPaterno);
			this->Controls->Add(this->lblApellidoPaterno);
			this->Controls->Add(this->txtPrimerNombre);
			this->Controls->Add(this->lblPrimerNombre);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmPersona";
			this->Text = L"Persona";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
