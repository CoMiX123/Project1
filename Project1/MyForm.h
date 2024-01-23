#pragma once
#include <fstream>
#include <msclr/marshal.h>
#include "CreateLecture.h"
#include "FindPair.h"
#include "Match.h"
#include "CreateTest.h"
namespace Project1 {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Login;
	protected:

	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ AnimalsTheme;
	private: System::Windows::Forms::Button^ PlantsTheme;
	private: System::Windows::Forms::Button^ TestBut;
	private: System::Windows::Forms::Button^ TeorAnimal;
	private: System::Windows::Forms::Button^ PairAnimal;
	private: System::Windows::Forms::Button^ SopostAnim;
	private: System::Windows::Forms::Button^ backtoThemes;

	private: System::Windows::Forms::ImageList^ AnimalsList;
	private: System::Windows::Forms::Button^ BackToAnimalTheme;
	private: System::Windows::Forms::Button^ ForwToPict;
	private: System::Windows::Forms::Button^ BackToAnimLecture;
	private: System::Windows::Forms::Button^ ForwardToAnimTheme;
	private: System::Windows::Forms::Button^ StartPairAnimal;
	private: System::Windows::Forms::Button^ RulesPair;
	private: System::Windows::Forms::Button^ StartSopostAnim;
	private: System::Windows::Forms::Button^ RulesSopost;
	private: System::Windows::Forms::Button^ CheckButton;
	private: System::Windows::Forms::Button^ backtoFindPairAnimal;
	private: System::Windows::Forms::Button^ backtoSopostAnimal;
	private: System::Windows::Forms::Button^ TeorPlants;
	private: System::Windows::Forms::Button^ PairPlants;
	private: System::Windows::Forms::Button^ SopostPlants;
	private: System::Windows::Forms::ImageList^ PlantsList;
	private: System::Windows::Forms::Button^ ForwToPicPlants;
	private: System::Windows::Forms::Button^ backtoPlantsLecture;
	private: System::Windows::Forms::Button^ backtoPlantsTheme;
	private: System::Windows::Forms::Button^ backtoPairPlants;
	private: System::Windows::Forms::Button^ backtoSopostPlants;
	private: System::Windows::Forms::Button^ forwtoPlantsTheme;
	private: System::Windows::Forms::Button^ StartPairPlants;
	private: System::Windows::Forms::Button^ StartSopostPlants;
	private: System::ComponentModel::IContainer^ components;




	private: FindPair^ pair1;
	private: FindPair^ pair2;
	private: CreateLecture^ lect;
	private: CreateLecture^ lect2;
	private: MatchPictAntText^ match;
	private: System::Windows::Forms::Button^ CheckButton1;
	private: MatchPictAntText^ match2;
	private: System::Windows::Forms::Button^ EndTest;
	private: System::Windows::Forms::Button^ backtoThemesFromTest;
	private:CreateTest^ test;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::TextBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->AnimalsTheme = (gcnew System::Windows::Forms::Button());
			this->PlantsTheme = (gcnew System::Windows::Forms::Button());
			this->TestBut = (gcnew System::Windows::Forms::Button());
			this->TeorAnimal = (gcnew System::Windows::Forms::Button());
			this->PairAnimal = (gcnew System::Windows::Forms::Button());
			this->SopostAnim = (gcnew System::Windows::Forms::Button());
			this->backtoThemes = (gcnew System::Windows::Forms::Button());
			this->AnimalsList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->BackToAnimalTheme = (gcnew System::Windows::Forms::Button());
			this->ForwToPict = (gcnew System::Windows::Forms::Button());
			this->BackToAnimLecture = (gcnew System::Windows::Forms::Button());
			this->ForwardToAnimTheme = (gcnew System::Windows::Forms::Button());
			this->StartPairAnimal = (gcnew System::Windows::Forms::Button());
			this->RulesPair = (gcnew System::Windows::Forms::Button());
			this->StartSopostAnim = (gcnew System::Windows::Forms::Button());
			this->RulesSopost = (gcnew System::Windows::Forms::Button());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->backtoFindPairAnimal = (gcnew System::Windows::Forms::Button());
			this->backtoSopostAnimal = (gcnew System::Windows::Forms::Button());
			this->TeorPlants = (gcnew System::Windows::Forms::Button());
			this->PairPlants = (gcnew System::Windows::Forms::Button());
			this->SopostPlants = (gcnew System::Windows::Forms::Button());
			this->PlantsList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ForwToPicPlants = (gcnew System::Windows::Forms::Button());
			this->backtoPlantsLecture = (gcnew System::Windows::Forms::Button());
			this->backtoPlantsTheme = (gcnew System::Windows::Forms::Button());
			this->backtoPairPlants = (gcnew System::Windows::Forms::Button());
			this->backtoSopostPlants = (gcnew System::Windows::Forms::Button());
			this->forwtoPlantsTheme = (gcnew System::Windows::Forms::Button());
			this->StartPairPlants = (gcnew System::Windows::Forms::Button());
			this->StartSopostPlants = (gcnew System::Windows::Forms::Button());
			this->CheckButton1 = (gcnew System::Windows::Forms::Button());
			this->EndTest = (gcnew System::Windows::Forms::Button());
			this->backtoThemesFromTest = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(267, 84);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите имя";
			// 
			// Login
			// 
			this->Login->Location = System::Drawing::Point(236, 160);
			this->Login->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(229, 22);
			this->Login->TabIndex = 1;
			// 
			// StartButton
			// 
			this->StartButton->BackColor = System::Drawing::SystemColors::Info;
			this->StartButton->Location = System::Drawing::Point(285, 242);
			this->StartButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(132, 55);
			this->StartButton->TabIndex = 2;
			this->StartButton->Text = L"Начать";
			this->StartButton->UseVisualStyleBackColor = false;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// AnimalsTheme
			// 
			this->AnimalsTheme->BackColor = System::Drawing::SystemColors::Highlight;
			this->AnimalsTheme->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AnimalsTheme->Location = System::Drawing::Point(29, 33);
			this->AnimalsTheme->Name = L"AnimalsTheme";
			this->AnimalsTheme->Size = System::Drawing::Size(200, 357);
			this->AnimalsTheme->TabIndex = 3;
			this->AnimalsTheme->Text = L"Животные";
			this->AnimalsTheme->UseVisualStyleBackColor = false;
			this->AnimalsTheme->Click += gcnew System::EventHandler(this, &MyForm::AnimalsTheme_Click);
			// 
			// PlantsTheme
			// 
			this->PlantsTheme->BackColor = System::Drawing::SystemColors::Highlight;
			this->PlantsTheme->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlantsTheme->Location = System::Drawing::Point(273, 33);
			this->PlantsTheme->Name = L"PlantsTheme";
			this->PlantsTheme->Size = System::Drawing::Size(200, 357);
			this->PlantsTheme->TabIndex = 4;
			this->PlantsTheme->Text = L"Растения";
			this->PlantsTheme->UseVisualStyleBackColor = false;
			this->PlantsTheme->Click += gcnew System::EventHandler(this, &MyForm::PlantsTheme_Click);
			// 
			// TestBut
			// 
			this->TestBut->BackColor = System::Drawing::SystemColors::Highlight;
			this->TestBut->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TestBut->Location = System::Drawing::Point(524, 33);
			this->TestBut->Name = L"TestBut";
			this->TestBut->Size = System::Drawing::Size(200, 357);
			this->TestBut->TabIndex = 5;
			this->TestBut->Text = L"Тест";
			this->TestBut->UseVisualStyleBackColor = false;
			this->TestBut->Click += gcnew System::EventHandler(this, &MyForm::TestBut_Click);
			// 
			// TeorAnimal
			// 
			this->TeorAnimal->BackColor = System::Drawing::Color::Orange;
			this->TeorAnimal->Location = System::Drawing::Point(29, 33);
			this->TeorAnimal->Name = L"TeorAnimal";
			this->TeorAnimal->Size = System::Drawing::Size(200, 357);
			this->TeorAnimal->TabIndex = 3;
			this->TeorAnimal->Text = L"Теория";
			this->TeorAnimal->UseVisualStyleBackColor = false;
			this->TeorAnimal->Click += gcnew System::EventHandler(this, &MyForm::TeorAnimal_Click);
			// 
			// PairAnimal
			// 
			this->PairAnimal->BackColor = System::Drawing::Color::Orange;
			this->PairAnimal->Location = System::Drawing::Point(273, 33);
			this->PairAnimal->Name = L"PairAnimal";
			this->PairAnimal->Size = System::Drawing::Size(200, 357);
			this->PairAnimal->TabIndex = 4;
			this->PairAnimal->Text = L"Мини-игра \"Угадай пару\"";
			this->PairAnimal->UseVisualStyleBackColor = false;
			this->PairAnimal->Click += gcnew System::EventHandler(this, &MyForm::PairAnimal_Click);
			// 
			// SopostAnim
			// 
			this->SopostAnim->BackColor = System::Drawing::Color::Orange;
			this->SopostAnim->Location = System::Drawing::Point(524, 33);
			this->SopostAnim->Name = L"SopostAnim";
			this->SopostAnim->Size = System::Drawing::Size(200, 357);
			this->SopostAnim->TabIndex = 3;
			this->SopostAnim->Text = L"Мини-игра \"Сопоставь\"";
			this->SopostAnim->UseVisualStyleBackColor = false;
			this->SopostAnim->Click += gcnew System::EventHandler(this, &MyForm::SopostAnim_Click);
			// 
			// backtoThemes
			// 
			this->backtoThemes->Location = System::Drawing::Point(12, 392);
			this->backtoThemes->Name = L"backtoThemes";
			this->backtoThemes->Size = System::Drawing::Size(65, 22);
			this->backtoThemes->TabIndex = 3;
			this->backtoThemes->Text = L"Назад";
			this->backtoThemes->UseVisualStyleBackColor = true;
			this->backtoThemes->Click += gcnew System::EventHandler(this, &MyForm::backtoThemes_Click);
			// 
			// AnimalsList
			// 
			this->AnimalsList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"AnimalsList.ImageStream")));
			this->AnimalsList->TransparentColor = System::Drawing::Color::Transparent;
			this->AnimalsList->Images->SetKeyName(0, L"Волк.png");
			this->AnimalsList->Images->SetKeyName(1, L"Лиса.png");
			this->AnimalsList->Images->SetKeyName(2, L"Медведь.png");
			this->AnimalsList->Images->SetKeyName(3, L"Лось.png");
			this->AnimalsList->Images->SetKeyName(4, L"Гусь.png");
			this->AnimalsList->Images->SetKeyName(5, L"Кошка.png");
			this->AnimalsList->Images->SetKeyName(6, L"Кролик.png");
			this->AnimalsList->Images->SetKeyName(7, L"Собака.png");
			this->AnimalsList->Images->SetKeyName(8, L"5.jpg");
			// 
			// BackToAnimalTheme
			// 
			this->BackToAnimalTheme->Location = System::Drawing::Point(12, 384);
			this->BackToAnimalTheme->Name = L"BackToAnimalTheme";
			this->BackToAnimalTheme->Size = System::Drawing::Size(78, 30);
			this->BackToAnimalTheme->TabIndex = 3;
			this->BackToAnimalTheme->Text = L"Назад";
			this->BackToAnimalTheme->UseVisualStyleBackColor = true;
			this->BackToAnimalTheme->Click += gcnew System::EventHandler(this, &MyForm::BackToAnimalTheme_Click);
			// 
			// ForwToPict
			// 
			this->ForwToPict->Location = System::Drawing::Point(658, 384);
			this->ForwToPict->Name = L"ForwToPict";
			this->ForwToPict->Size = System::Drawing::Size(78, 30);
			this->ForwToPict->TabIndex = 4;
			this->ForwToPict->Text = L"Вперед";
			this->ForwToPict->UseVisualStyleBackColor = true;
			this->ForwToPict->Click += gcnew System::EventHandler(this, &MyForm::ForwToPict_Click);
			// 
			// BackToAnimLecture
			// 
			this->BackToAnimLecture->Location = System::Drawing::Point(12, 384);
			this->BackToAnimLecture->Name = L"BackToAnimLecture";
			this->BackToAnimLecture->Size = System::Drawing::Size(78, 30);
			this->BackToAnimLecture->TabIndex = 5;
			this->BackToAnimLecture->Text = L"Назад";
			this->BackToAnimLecture->UseVisualStyleBackColor = true;
			this->BackToAnimLecture->Click += gcnew System::EventHandler(this, &MyForm::BackToAnimLecture_Click);
			// 
			// ForwardToAnimTheme
			// 
			this->ForwardToAnimTheme->Location = System::Drawing::Point(658, 384);
			this->ForwardToAnimTheme->Name = L"ForwardToAnimTheme";
			this->ForwardToAnimTheme->Size = System::Drawing::Size(78, 30);
			this->ForwardToAnimTheme->TabIndex = 6;
			this->ForwardToAnimTheme->Text = L"Вперед";
			this->ForwardToAnimTheme->UseVisualStyleBackColor = true;
			this->ForwardToAnimTheme->Click += gcnew System::EventHandler(this, &MyForm::ForwardToAnimTheme_Click);
			// 
			// StartPairAnimal
			// 
			this->StartPairAnimal->Location = System::Drawing::Point(269, 102);
			this->StartPairAnimal->Name = L"StartPairAnimal";
			this->StartPairAnimal->Size = System::Drawing::Size(169, 80);
			this->StartPairAnimal->TabIndex = 3;
			this->StartPairAnimal->Text = L"Начать игру";
			this->StartPairAnimal->UseVisualStyleBackColor = true;
			this->StartPairAnimal->Click += gcnew System::EventHandler(this, &MyForm::StartPairAnimal_Click);
			// 
			// RulesPair
			// 
			this->RulesPair->Location = System::Drawing::Point(269, 217);
			this->RulesPair->Name = L"RulesPair";
			this->RulesPair->Size = System::Drawing::Size(169, 80);
			this->RulesPair->TabIndex = 4;
			this->RulesPair->Text = L"Правила";
			this->RulesPair->UseVisualStyleBackColor = true;
			this->RulesPair->Click += gcnew System::EventHandler(this, &MyForm::RulesPair_Click);
			// 
			// StartSopostAnim
			// 
			this->StartSopostAnim->Location = System::Drawing::Point(269, 102);
			this->StartSopostAnim->Name = L"StartSopostAnim";
			this->StartSopostAnim->Size = System::Drawing::Size(169, 80);
			this->StartSopostAnim->TabIndex = 3;
			this->StartSopostAnim->Text = L"Начать";
			this->StartSopostAnim->UseVisualStyleBackColor = true;
			this->StartSopostAnim->Click += gcnew System::EventHandler(this, &MyForm::StartSopostAnim_Click);
			// 
			// RulesSopost
			// 
			this->RulesSopost->Location = System::Drawing::Point(269, 217);
			this->RulesSopost->Name = L"RulesSopost";
			this->RulesSopost->Size = System::Drawing::Size(169, 80);
			this->RulesSopost->TabIndex = 4;
			this->RulesSopost->Text = L"Правила";
			this->RulesSopost->UseVisualStyleBackColor = true;
			this->RulesSopost->Click += gcnew System::EventHandler(this, &MyForm::RulesSopost_Click);
			// 
			// CheckButton
			// 
			this->CheckButton->Location = System::Drawing::Point(285, 333);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->Size = System::Drawing::Size(134, 44);
			this->CheckButton->TabIndex = 3;
			this->CheckButton->Text = L"Проверить";
			this->CheckButton->UseVisualStyleBackColor = true;
			this->CheckButton->Click += gcnew System::EventHandler(this, &MyForm::CheckButton_Click);
			// 
			// backtoFindPairAnimal
			// 
			this->backtoFindPairAnimal->Location = System::Drawing::Point(12, 391);
			this->backtoFindPairAnimal->Name = L"backtoFindPairAnimal";
			this->backtoFindPairAnimal->Size = System::Drawing::Size(75, 23);
			this->backtoFindPairAnimal->TabIndex = 3;
			this->backtoFindPairAnimal->Text = L"Назад";
			this->backtoFindPairAnimal->UseVisualStyleBackColor = true;
			this->backtoFindPairAnimal->Click += gcnew System::EventHandler(this, &MyForm::PairAnimal_Click);
			// 
			// backtoSopostAnimal
			// 
			this->backtoSopostAnimal->Location = System::Drawing::Point(12, 391);
			this->backtoSopostAnimal->Name = L"backtoSopostAnimal";
			this->backtoSopostAnimal->Size = System::Drawing::Size(75, 23);
			this->backtoSopostAnimal->TabIndex = 4;
			this->backtoSopostAnimal->Text = L"Назад";
			this->backtoSopostAnimal->UseVisualStyleBackColor = true;
			this->backtoSopostAnimal->Click += gcnew System::EventHandler(this, &MyForm::SopostAnim_Click);
			// 
			// TeorPlants
			// 
			this->TeorPlants->BackColor = System::Drawing::Color::YellowGreen;
			this->TeorPlants->Location = System::Drawing::Point(29, 33);
			this->TeorPlants->Name = L"TeorPlants";
			this->TeorPlants->Size = System::Drawing::Size(200, 357);
			this->TeorPlants->TabIndex = 3;
			this->TeorPlants->Text = L"Теория";
			this->TeorPlants->UseVisualStyleBackColor = false;
			this->TeorPlants->Click += gcnew System::EventHandler(this, &MyForm::TeorPlants_Click);
			// 
			// PairPlants
			// 
			this->PairPlants->BackColor = System::Drawing::Color::YellowGreen;
			this->PairPlants->Location = System::Drawing::Point(273, 33);
			this->PairPlants->Name = L"PairPlants";
			this->PairPlants->Size = System::Drawing::Size(200, 357);
			this->PairPlants->TabIndex = 4;
			this->PairPlants->Text = L"Мини-игра \"Угадай пару\"";
			this->PairPlants->UseVisualStyleBackColor = false;
			this->PairPlants->Click += gcnew System::EventHandler(this, &MyForm::PairPlants_Click);
			// 
			// SopostPlants
			// 
			this->SopostPlants->BackColor = System::Drawing::Color::YellowGreen;
			this->SopostPlants->Location = System::Drawing::Point(524, 33);
			this->SopostPlants->Name = L"SopostPlants";
			this->SopostPlants->Size = System::Drawing::Size(200, 357);
			this->SopostPlants->TabIndex = 5;
			this->SopostPlants->Text = L"Мини-игра \"Сопоставь\"";
			this->SopostPlants->UseVisualStyleBackColor = false;
			this->SopostPlants->Click += gcnew System::EventHandler(this, &MyForm::SopostPlants_Click);
			// 
			// PlantsList
			// 
			this->PlantsList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"PlantsList.ImageStream")));
			this->PlantsList->TransparentColor = System::Drawing::Color::Transparent;
			this->PlantsList->Images->SetKeyName(0, L"Водоросли.png");
			this->PlantsList->Images->SetKeyName(1, L"Мох.png");
			this->PlantsList->Images->SetKeyName(2, L"Папоротник.png");
			this->PlantsList->Images->SetKeyName(3, L"Хвощ.png");
			this->PlantsList->Images->SetKeyName(4, L"Ель.png");
			this->PlantsList->Images->SetKeyName(5, L"Сосна.png");
			this->PlantsList->Images->SetKeyName(6, L"Яблоня.png");
			this->PlantsList->Images->SetKeyName(7, L"Роза.png");
			this->PlantsList->Images->SetKeyName(8, L"5.jpg");
			// 
			// ForwToPicPlants
			// 
			this->ForwToPicPlants->Location = System::Drawing::Point(661, 391);
			this->ForwToPicPlants->Name = L"ForwToPicPlants";
			this->ForwToPicPlants->Size = System::Drawing::Size(75, 23);
			this->ForwToPicPlants->TabIndex = 3;
			this->ForwToPicPlants->Text = L"Вперед";
			this->ForwToPicPlants->UseVisualStyleBackColor = true;
			this->ForwToPicPlants->Click += gcnew System::EventHandler(this, &MyForm::ForwToPicPlants_Click);
			// 
			// backtoPlantsLecture
			// 
			this->backtoPlantsLecture->Location = System::Drawing::Point(12, 391);
			this->backtoPlantsLecture->Name = L"backtoPlantsLecture";
			this->backtoPlantsLecture->Size = System::Drawing::Size(75, 23);
			this->backtoPlantsLecture->TabIndex = 4;
			this->backtoPlantsLecture->Text = L"Назад";
			this->backtoPlantsLecture->UseVisualStyleBackColor = true;
			this->backtoPlantsLecture->Click += gcnew System::EventHandler(this, &MyForm::backtoPlantsLecture_Click);
			// 
			// backtoPlantsTheme
			// 
			this->backtoPlantsTheme->Location = System::Drawing::Point(12, 391);
			this->backtoPlantsTheme->Name = L"backtoPlantsTheme";
			this->backtoPlantsTheme->Size = System::Drawing::Size(75, 23);
			this->backtoPlantsTheme->TabIndex = 5;
			this->backtoPlantsTheme->Text = L"Назад";
			this->backtoPlantsTheme->UseVisualStyleBackColor = true;
			this->backtoPlantsTheme->Click += gcnew System::EventHandler(this, &MyForm::backtoPlantsTheme_Click);
			// 
			// backtoPairPlants
			// 
			this->backtoPairPlants->Location = System::Drawing::Point(12, 391);
			this->backtoPairPlants->Name = L"backtoPairPlants";
			this->backtoPairPlants->Size = System::Drawing::Size(75, 23);
			this->backtoPairPlants->TabIndex = 6;
			this->backtoPairPlants->Text = L"Назад";
			this->backtoPairPlants->UseVisualStyleBackColor = true;
			this->backtoPairPlants->Click += gcnew System::EventHandler(this, &MyForm::backtoPairPlants_Click);
			// 
			// backtoSopostPlants
			// 
			this->backtoSopostPlants->Location = System::Drawing::Point(12, 391);
			this->backtoSopostPlants->Name = L"backtoSopostPlants";
			this->backtoSopostPlants->Size = System::Drawing::Size(75, 23);
			this->backtoSopostPlants->TabIndex = 7;
			this->backtoSopostPlants->Text = L"Назад";
			this->backtoSopostPlants->UseVisualStyleBackColor = true;
			this->backtoSopostPlants->Click += gcnew System::EventHandler(this, &MyForm::backtoSopostPlants_Click);
			// 
			// forwtoPlantsTheme
			// 
			this->forwtoPlantsTheme->Location = System::Drawing::Point(661, 391);
			this->forwtoPlantsTheme->Name = L"forwtoPlantsTheme";
			this->forwtoPlantsTheme->Size = System::Drawing::Size(75, 23);
			this->forwtoPlantsTheme->TabIndex = 8;
			this->forwtoPlantsTheme->Text = L"Вперед";
			this->forwtoPlantsTheme->UseVisualStyleBackColor = true;
			this->forwtoPlantsTheme->Click += gcnew System::EventHandler(this, &MyForm::forwtoPlantsTheme_Click);
			// 
			// StartPairPlants
			// 
			this->StartPairPlants->Location = System::Drawing::Point(269, 102);
			this->StartPairPlants->Name = L"StartPairPlants";
			this->StartPairPlants->Size = System::Drawing::Size(169, 80);
			this->StartPairPlants->TabIndex = 3;
			this->StartPairPlants->Text = L"Начать";
			this->StartPairPlants->UseVisualStyleBackColor = true;
			this->StartPairPlants->Click += gcnew System::EventHandler(this, &MyForm::StartPairPlants_Click);
			// 
			// StartSopostPlants
			// 
			this->StartSopostPlants->Location = System::Drawing::Point(269, 102);
			this->StartSopostPlants->Name = L"StartSopostPlants";
			this->StartSopostPlants->Size = System::Drawing::Size(169, 80);
			this->StartSopostPlants->TabIndex = 4;
			this->StartSopostPlants->Text = L"Начать";
			this->StartSopostPlants->UseVisualStyleBackColor = true;
			this->StartSopostPlants->Click += gcnew System::EventHandler(this, &MyForm::StartSopostPlants_Click);
			// 
			// CheckButton1
			// 
			this->CheckButton1->Location = System::Drawing::Point(285, 333);
			this->CheckButton1->Name = L"CheckButton1";
			this->CheckButton1->Size = System::Drawing::Size(134, 44);
			this->CheckButton1->TabIndex = 3;
			this->CheckButton1->Text = L"Проверить";
			this->CheckButton1->UseVisualStyleBackColor = true;
			this->CheckButton1->Click += gcnew System::EventHandler(this, &MyForm::CheckButton1_Click);
			// 
			// EndTest
			// 
			this->EndTest->Location = System::Drawing::Point(556, 26);
			this->EndTest->Name = L"EndTest";
			this->EndTest->Size = System::Drawing::Size(157, 175);
			this->EndTest->TabIndex = 3;
			this->EndTest->Text = L"Закончить";
			this->EndTest->UseVisualStyleBackColor = true;
			this->EndTest->Click += gcnew System::EventHandler(this, &MyForm::EndTest_Click);
			// 
			// backtoThemesFromTest
			// 
			this->backtoThemesFromTest->Enabled = false;
			this->backtoThemesFromTest->Location = System::Drawing::Point(556, 229);
			this->backtoThemesFromTest->Name = L"backtoThemesFromTest";
			this->backtoThemesFromTest->Size = System::Drawing::Size(157, 175);
			this->backtoThemesFromTest->TabIndex = 4;
			this->backtoThemesFromTest->Text = L"Назад";
			this->backtoThemesFromTest->UseVisualStyleBackColor = true;
			this->backtoThemesFromTest->Click += gcnew System::EventHandler(this, &MyForm::backtoThemesFromTest_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(748, 426);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			test = gcnew CreateTest("test.txt", "answ.txt", "goodansw.txt");
			lect = gcnew CreateLecture("lect1anim.txt", AnimalsList);
			lect2 = gcnew CreateLecture("lect1plants.txt", PlantsList);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* f = fopen("Users.txt","w");
		String^ users = Login->Text;
		users = users->Trim();
		if (users == L"")
		{
			MessageBox::Show(L"Введите имя!");
			return;
		}
		const char* user;
		int checkint = 0;
		char check[40];
		marshal_context^ ctx = gcnew marshal_context();
		user = ctx->marshal_as<const char*>(users);
		int length = users->Length;
		for (int i = 0; i < length; i++)
		{
			fputc(user[i], f);
		}
		fclose(f);
		Controls->Clear();
		Controls->Add(AnimalsTheme);
		Controls->Add(PlantsTheme);
		Controls->Add(TestBut);
	}

	private: System::Void AnimalsTheme_Click(System::Object^ sender, System::EventArgs^ e) {
		Controls->Clear();
		Controls->Add(TeorAnimal);
		Controls->Add(PairAnimal);
		Controls->Add(SopostAnim);
		Controls->Add(backtoThemes);
	}
	private: System::Void backtoThemes_Click(System::Object^ sender, System::EventArgs^ e) {
		Controls->Clear();
		Controls->Add(AnimalsTheme);
		Controls->Add(PlantsTheme);
		Controls->Add(TestBut);
	}
private: System::Void TeorAnimal_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(lect->Text());
	Controls->Add(BackToAnimalTheme);
	Controls->Add(ForwToPict);
}
private: System::Void BackToAnimalTheme_Click(System::Object^ sender, System::EventArgs^ e) {
	AnimalsTheme_Click(nullptr, nullptr);
}
private: System::Void ForwardToAnimTheme_Click(System::Object^ sender, System::EventArgs^ e) {
	AnimalsTheme_Click(nullptr, nullptr);
}

private: System::Void ForwToPict_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(BackToAnimLecture);
	Controls->Add(ForwardToAnimTheme);
	array<array<PictureBox^>^>^ pics;
	array<array<TextBox^>^>^ text;
	pics = lect->Pict();
	text = lect->CreateZone();
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++)
		{
			Controls->Add(pics[i][j]);
			Controls->Add(text[i][j]);
		}
}
private: System::Void BackToAnimLecture_Click(System::Object^ sender, System::EventArgs^ e) {
	TeorAnimal_Click(nullptr, nullptr);
}
private: System::Void PairAnimal_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(StartPairAnimal);
	Controls->Add(RulesPair);
	Controls->Add(BackToAnimalTheme);
}
	   void OnClick1(System::Object^ sender, System::EventArgs^ e);
private: System::Void SopostAnim_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(BackToAnimalTheme);
	Controls->Add(StartSopostAnim);
	Controls->Add(RulesSopost);
}
	   void OnSelectedIndexChanged1(System::Object^ sender, System::EventArgs^ e);
private: System::Void RulesPair_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"В данной игре вам надо будет найти \nодинаковые пары картинок, нажимая на них.\nКак только игровое поле станет пустым\nвы победите!");
}
private: System::Void StartPairAnimal_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoFindPairAnimal);
	pair1 = gcnew FindPair(AnimalsList);
	array<array<PictureBox^>^>^ pics;
	pics = pair1->CreatePictureBoxes();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Controls->Add(pics[i][j]);
			pics[i][j]->Click += gcnew System::EventHandler(this, &Project1::MyForm::OnClick1);
		}
	}
}
private: System::Void StartSopostAnim_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoSopostAnimal);
	Controls->Add(CheckButton);
	match = gcnew MatchPictAntText(AnimalsList);
	array<PictureBox^>^ pics;
	array<ComboBox^>^ combs;
	pics = match->PB();
	combs = match->Spiski();
	for (int i = 0; i < 4; i++)
	{
		Controls->Add(pics[i]);
		Controls->Add(combs[i]);
		combs[i]->SelectedIndexChanged += gcnew System::EventHandler(this, &Project1::MyForm::OnSelectedIndexChanged1);
	}
}
private: System::Void RulesSopost_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Перед вами появиться 4 картинки,\nвы должны сопоставить то, что\nизображено на них с названиями");
}
private: System::Void TestBut_Click(System::Object^ sender, System::EventArgs^ e) {
		Controls->Clear();
		Controls->Add(EndTest);
		Controls->Add(backtoThemesFromTest);
		array<Label^>^ questions = test->CreateQuest();
		array<GroupBox^>^ group = test->CreateGroup();
		for (int i = 0; i < 8; i++)
		{
			Controls->Add(questions[i]);
			Controls->Add(group[i]);
			group[i]->Validated += gcnew System::EventHandler(this, &Project1::MyForm::OnValidated);
		}
}
private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (match->PrinudProverka())
	{
		MessageBox::Show(L"Молодец!");
	}
	else
	{
		MessageBox::Show(L"Попробуй еще раз!");
	}
}
private: System::Void PlantsTheme_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(TeorPlants);
	Controls->Add(PairPlants);
	Controls->Add(SopostPlants);
	Controls->Add(backtoThemes);
}
private: System::Void TeorPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(lect2->Text());
	Controls->Add(backtoPlantsTheme);
	Controls->Add(ForwToPicPlants);
}
private: System::Void PairPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoPlantsTheme);
	Controls->Add(StartPairPlants);
	Controls->Add(RulesPair);
}
private: System::Void SopostPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(StartSopostPlants);
	Controls->Add(RulesSopost);
	Controls->Add(backtoPlantsTheme);
}
private: System::Void ForwToPicPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoPlantsLecture);
	Controls->Add(forwtoPlantsTheme);
	array<array<PictureBox^>^>^ pics;
	array<array<TextBox^>^>^ text;
	pics = lect2->Pict();
	text = lect2->CreateZone();
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++)
		{
			Controls->Add(pics[i][j]);
			Controls->Add(text[i][j]);
		}
}
private: System::Void StartPairPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoPairPlants);
	pair2 = gcnew FindPair(PlantsList);
	array<array<PictureBox^>^>^ pics;
	pics = pair2->CreatePictureBoxes();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Controls->Add(pics[i][j]);
			pics[i][j]->Click += gcnew System::EventHandler(this, &Project1::MyForm::OnClick);
		}
	}
}
	   void OnClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void StartSopostPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	Controls->Clear();
	Controls->Add(backtoSopostPlants);
	Controls->Add(CheckButton1);
	match2 = gcnew MatchPictAntText(PlantsList);
	array<PictureBox^>^ pics;
	array<ComboBox^>^ combs;
	pics = match2->PB();
	combs = match2->Spiski();
	for (int i = 0; i < 4; i++)
	{
		Controls->Add(pics[i]);
		Controls->Add(combs[i]);
		combs[i]->SelectedIndexChanged += gcnew System::EventHandler(this, &Project1::MyForm::OnSelectedIndexChanged);
	}
}
	   void OnSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void CheckButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (match2->PrinudProverka())
	{
		MessageBox::Show(L"Молодец!");
	}
	else
	{
		MessageBox::Show(L"Попробуй еще раз!");
	}
}
private: System::Void backtoPlantsLecture_Click(System::Object^ sender, System::EventArgs^ e) {
	TeorPlants_Click(nullptr, nullptr);
}
private: System::Void backtoPlantsTheme_Click(System::Object^ sender, System::EventArgs^ e) {
	PlantsTheme_Click(nullptr, nullptr);
}
private: System::Void backtoSopostPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	SopostPlants_Click(nullptr, nullptr);
}
private: System::Void backtoPairPlants_Click(System::Object^ sender, System::EventArgs^ e) {
	PairPlants_Click(nullptr, nullptr);
}
private: System::Void forwtoPlantsTheme_Click(System::Object^ sender, System::EventArgs^ e) {
	PlantsTheme_Click(nullptr, nullptr);
}
	   void OnValidated(System::Object^ sender, System::EventArgs^ e);
private: System::Void EndTest_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show(L"Вы уверены что хотите закончить тест?", L"", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		FILE* f;
		char name[40];
		Convert^ tostr;
		int result = test->Result();
		char resultch[1];
		MessageBox::Show(tostr->ToString(result),L"Ваш результат");
		EndTest->Enabled = false;
		f = fopen("Users.txt", "r");
		fgets(name, sizeof(name), f);
		fclose(f);
		f = fopen("result.txt", "a");
		itoa(result, resultch, 10);
		int i = 0;
		while (name[i] != 0) {
			fputc(name[i], f);
			i++;
		}
		fputc(' ', f);
		fputc(resultch[0], f);
		fputc('\n', f);
		fclose(f);
		backtoThemesFromTest->Enabled = true;
	}
}
private: System::Void backtoThemesFromTest_Click(System::Object^ sender, System::EventArgs^ e) {
	backtoThemes_Click(nullptr, nullptr);
}
};
}


void Project1::MyForm::OnClick1(System::Object^ sender, System::EventArgs^ e)
{
	pair1->PicClick(sender, e);
}


void Project1::MyForm::OnSelectedIndexChanged1(System::Object^ sender, System::EventArgs^ e)
{
	match->Proverka(sender, e);
}


void Project1::MyForm::OnClick(System::Object^ sender, System::EventArgs^ e)
{
	pair2->PicClick(sender, e);
}


void Project1::MyForm::OnSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	match2->Proverka(sender, e);
}


void Project1::MyForm::OnValidated(System::Object^ sender, System::EventArgs^ e)
{
	test->CheckAnsw(sender, e);
}
