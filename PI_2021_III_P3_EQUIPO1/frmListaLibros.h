#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaLibros
	/// </summary>
	public ref class frmListaLibros : public System::Windows::Forms::Form
	{
	public:
		frmListaLibros(void)
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
		~frmListaLibros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvLibros;
	protected:







	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDlibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreLibro;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colEstante;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colCategoriaLibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEdicionLibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colVolumenLibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreAutorLibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEditorialLibro;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaLibros::typeid));
			this->dgvLibros = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->colIDlibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstante = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colCategoriaLibro = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colEdicionLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colVolumenLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreAutorLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEditorialLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLibros
			// 
			this->dgvLibros->BackgroundColor = System::Drawing::Color::Azure;
			this->dgvLibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colIDlibro,
					this->colNombreLibro, this->colEstante, this->colCategoriaLibro, this->colEdicionLibro, this->colVolumenLibro, this->colNombreAutorLibro,
					this->colEditorialLibro
			});
			this->dgvLibros->GridColor = System::Drawing::Color::DarkSlateGray;
			this->dgvLibros->Location = System::Drawing::Point(38, 178);
			this->dgvLibros->Name = L"dgvLibros";
			this->dgvLibros->Size = System::Drawing::Size(844, 387);
			this->dgvLibros->TabIndex = 25;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(93, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(160, 147);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkBlue;
			this->label3->Location = System::Drawing::Point(271, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(408, 40);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Lista de libros registrados";
			// 
			// colIDlibro
			// 
			this->colIDlibro->HeaderText = L"ID ";
			this->colIDlibro->Name = L"colIDlibro";
			// 
			// colNombreLibro
			// 
			this->colNombreLibro->HeaderText = L"Nombre";
			this->colNombreLibro->Name = L"colNombreLibro";
			// 
			// colEstante
			// 
			this->colEstante->HeaderText = L"Estante";
			this->colEstante->Name = L"colEstante";
			// 
			// colCategoriaLibro
			// 
			this->colCategoriaLibro->HeaderText = L"Categoria";
			this->colCategoriaLibro->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Autobiografia", L"Autoayuda", L"Ciencia",
					L"Ciencia ficcion", L"Comic", L"Deporte", L"Humor", L"Romance", L"Salud", L"Ciencias sociales", L"Suspenso", L"Terror"
			});
			this->colCategoriaLibro->Name = L"colCategoriaLibro";
			// 
			// colEdicionLibro
			// 
			this->colEdicionLibro->HeaderText = L"Año de edicion";
			this->colEdicionLibro->Name = L"colEdicionLibro";
			// 
			// colVolumenLibro
			// 
			this->colVolumenLibro->HeaderText = L"Volumen";
			this->colVolumenLibro->Name = L"colVolumenLibro";
			// 
			// colNombreAutorLibro
			// 
			this->colNombreAutorLibro->HeaderText = L"Autor";
			this->colNombreAutorLibro->Name = L"colNombreAutorLibro";
			// 
			// colEditorialLibro
			// 
			this->colEditorialLibro->HeaderText = L"Editorial";
			this->colEditorialLibro->Name = L"colEditorialLibro";
			// 
			// frmListaLibros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ClientSize = System::Drawing::Size(917, 577);
			this->Controls->Add(this->dgvLibros);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Name = L"frmListaLibros";
			this->Text = L"frmListaLibros";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
