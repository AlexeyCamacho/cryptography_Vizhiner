#pragma once
#include "Vizhiner.h"
#include "ABCModel.h"
#include "fstream"
#include <msclr\marshal_cppstd.h>

namespace cryptographyVizhiner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	const int SIZE_ABC = 33;


	const char ABC[SIZE_ABC] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н',
		'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я', ' ' };

	Vizhiner* encryptor = new Vizhiner(ABC);
	ABCModel* originalModel = new ABCModel(ABC);

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;



	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 29);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(349, 196);
			this->textBox1->TabIndex = 0;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный текст:";
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(384, 29);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(349, 196);
			this->textBox2->TabIndex = 2;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(381, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Шифр текст:";
			// 
			// textBox3
			// 
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 310);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(349, 196);
			this->textBox3->TabIndex = 4;
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(349, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Пример текста из исходного алфавита:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(382, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Расшифрованный/дешифрованный текст:";
			// 
			// textBox4
			// 
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox4->Location = System::Drawing::Point(384, 310);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(349, 196);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(1346, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Зашифровать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1346, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 24);
			this->textBox5->TabIndex = 9;
			this->textBox5->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1342, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ключ:";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(1346, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 31);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Дешифровать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1346, 153);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 31);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Анализ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(1346, 116);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 31);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Расшифровать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(1267, 247);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(829, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 22);
			this->label7->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(12, 589);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(349, 85);
			this->textBox6->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 566);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Слова из 1 буквы:";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->Interval = 1;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(574, 265);
			this->chart1->TabIndex = 16;
			this->chart1->Text = L"chart1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				82.75862F)));
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->chart1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35.33246F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 64.66753F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(580, 767);
			this->tableLayoutPanel1->TabIndex = 19;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 274);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(574, 490);
			this->dataGridView1->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(384, 589);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(349, 85);
			this->textBox7->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(384, 566);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 20);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Слова из 2-x букв:";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(12, 718);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(349, 85);
			this->textBox8->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(12, 695);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Слова из 3-x букв:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(349, 32);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Выбрать файл";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 512);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(349, 31);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Выбрать файл";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(747, 29);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(589, 799);
			this->tabControl1->TabIndex = 26;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(581, 770);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Анализ";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(581, 770);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Дешифрование";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(217, 16);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Индекса совпадения исходного:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(229, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 16);
			this->label12->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1479, 857);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Шифр Виженера";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // Зашифровать
		this->label7->ResetText();
		if (this->textBox5->TextLength <= 0) {
			this->label7->Text = "Введите ключ";
			return;
		}

		if (this->textBox1->TextLength <= 0) {
			this->label7->Text = "Введите текст";
			return;
		}

		this->textBox2->Text = gcnew System::String(encryptor->encrypt(
			msclr::interop::marshal_as<std::string>(this->textBox1->Text), 
			msclr::interop::marshal_as<std::string>(this->textBox5->Text)
		).c_str());
	}

	System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // Расшифровать
		this->label7->ResetText();
		if (this->textBox5->TextLength <= 0) {
			this->label7->Text = "Введите ключ";
			return;
		}

		if (this->textBox2->TextLength <= 0) {
			this->label7->Text = "Введите шифр текст";
			return;
		}

		this->textBox4->Text = gcnew System::String(encryptor->decrypt(
			msclr::interop::marshal_as<std::string>(this->textBox2->Text),
			msclr::interop::marshal_as<std::string>(this->textBox5->Text)
		).c_str());
	}

	System::Void TextValidate(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) { // Валидация
		TextBox^ textbox = safe_cast<TextBox^>(sender);
		textbox->Text = System::Text::RegularExpressions::Regex::Replace(textbox->Text, "[^а-я ]", "");
	}
	System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // Анализ
		this->label7->ResetText();

		if (this->textBox3->TextLength <= 0) {
			this->label7->Text = "Введите текст из исходного алфавита";
			return;
		}

		originalModel->Analyse(msclr::interop::marshal_as<std::string>(this->textBox3->Text));

		map<char, double> points = originalModel->GetDistribution();
		chart1->Series[0]->Points->Clear();

		map<char, double>::iterator itr;
		for (itr = points.begin(); itr != points.end(); itr++) {
			System::String^ x = gcnew System::String(string{ itr->first }.c_str());
			chart1->Series[0]->Points->AddXY(x, itr->second);
		}

		vector<vector<int>> bigrams = originalModel->GetBigrams();

		this->dataGridView1->ColumnCount = SIZE_ABC;
		this->dataGridView1->RowCount = SIZE_ABC;

		for (int i = 0; i < SIZE_ABC; i++) {
			this->dataGridView1->Columns[i]->HeaderText = gcnew System::String(string{ originalModel->GetCharABC(i) }.c_str());
			this->dataGridView1->Rows[i]->HeaderCell->Value = gcnew System::String(string{ originalModel->GetCharABC(i) }.c_str());
		}

		for (unsigned int i = 0; i < bigrams.size(); i++) {
			for (unsigned j = 0; j < bigrams[i].size(); j++) {
				this->dataGridView1->Rows[i]->Cells[j]->Value = bigrams[i][j];
			}
		}

		set<string> words = originalModel->GetwordsFromOneLetters();
		DisplayWords(words, this->textBox6);

		words = originalModel->GetwordsFromTwoLetters();
		DisplayWords(words, this->textBox7);

		words = originalModel->GetwordsFromThreeLetters();
		DisplayWords(words, this->textBox8);

	}

	template <class T>
	void DisplayWords(T words, System::Windows::Forms::TextBox^ textBox) { // Добавление слов в textBox
		System::String^ word;
		string wordBuffer;
;
		T::iterator itr;

		for (itr = words.begin(); itr != words.end(); itr++) {
			wordBuffer = *itr;
			word += gcnew System::String(wordBuffer.c_str());
			word += " ";
		}

		textBox->Text = word;
	}

	System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { // Открытие файла "исходный текст"
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }

		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

		vector<string> lines = ReadFile_(filename);

		DisplayWords(lines, this->textBox1);
	}

	System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // Открытие файла "пример текста"
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }

		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

		vector<string> lines = ReadFile_(filename);

		DisplayWords(lines, this->textBox3);
	}

	vector<string> ReadFile_(string filename) { // Чтение файла
		ifstream file;
		file.open(filename);

		vector<string> lines;

		string line;
		while (getline(file, line))
		{
			lines.push_back(line);
		}

		file.close();

		return lines;
	}

	System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // Дешифрование
		this->label12->ResetText();
		this->label12->Text = gcnew System::String(originalModel->GetIndexOfMathes().ToString());
	}
};
}
