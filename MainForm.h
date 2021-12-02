#pragma once
#include "memory.h"
#include "Functions.h"

namespace IWBTJG_Trainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm에 대한 요약입니다.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Player_gb;
	protected:
	private: System::Windows::Forms::GroupBox^ Gravity_gb;
	private: System::Windows::Forms::Label^ FallSpeed_lb;
	private: System::Windows::Forms::CheckBox^ Gravity_cb;
	private: System::Windows::Forms::TextBox^ Gravity_tb;
	private: System::Windows::Forms::GroupBox^ Jump_gb;
	private: System::Windows::Forms::RadioButton^ Jump1_rb;
	private: System::Windows::Forms::RadioButton^ Jump0_rb;
	private: System::Windows::Forms::RadioButton^ JumpNone_rb;
	private: System::Windows::Forms::Button^ HP_bt;
	private: System::Windows::Forms::Label^ HP_lb;
	private: System::Windows::Forms::TextBox^ HP_tb;
	private: System::Windows::Forms::CheckBox^ GodMode_cb;
	private: System::Windows::Forms::Label^ Slide_lb;

	private: System::Windows::Forms::CheckBox^ FallSpeed_cb;
	private: System::Windows::Forms::TextBox^ FallSpeed_tb;
	private: System::Windows::Forms::CheckBox^ Slide_cb;
	private: System::Windows::Forms::TextBox^ Slide_tb;
	private: System::Windows::Forms::GroupBox^ Character_gb;
	private: System::Windows::Forms::GroupBox^ Weapon_gb;
	private: System::Windows::Forms::CheckBox^ Weapon_cb;
	private: System::Windows::Forms::Button^ BG_bt;
	private: System::Windows::Forms::Button^ TTT_bt;
	private: System::Windows::Forms::GroupBox^ World_gb;

	private: System::Windows::Forms::GroupBox^ Boss_gb;
	private: System::Windows::Forms::CheckBox^ MoveCount_cb;
	private: System::Windows::Forms::TextBox^ MoveCount_tb;


	private: System::Windows::Forms::Label^ MoveCount_lb;

	private: System::Windows::Forms::Button^ KillBoss_bt;
	private: System::Windows::Forms::Button^ BossHP_bt;
	private: System::Windows::Forms::Label^ BossHP_lb;
	private: System::Windows::Forms::TextBox^ BossHP_tb;
	private: System::Windows::Forms::GroupBox^ Save_gb;

	private: System::Windows::Forms::GroupBox^ StageTime1_gb;
	private: System::Windows::Forms::CheckBox^ StageTime1_cb;


	private: System::Windows::Forms::Button^ StageTime1_bt;

	private: System::Windows::Forms::TextBox^ StageTime1_tb;

	private: System::Windows::Forms::GroupBox^ Death1_gb;
	private: System::Windows::Forms::CheckBox^ Death1_cb;
	private: System::Windows::Forms::Button^ Death1_bt;
	private: System::Windows::Forms::TextBox^ Death1_tb;
	private: System::Windows::Forms::GroupBox^ Save1__gb;
	private: System::Windows::Forms::CheckBox^ Time1_cb;

	private: System::Windows::Forms::Button^ Time1_bt;

	private: System::Windows::Forms::TextBox^ Time1_tb;
	private: System::Windows::Forms::GroupBox^ StageDeath1_gb;
	private: System::Windows::Forms::CheckBox^ StageDeath1_cb;
	private: System::Windows::Forms::Button^ StageDeath1_bt;
	private: System::Windows::Forms::TextBox^ StageDeath1_tb;
	private: System::Windows::Forms::GroupBox^ Status_gb;

	private: System::Windows::Forms::CheckBox^ MoveCount2_cb;
	private: System::Windows::Forms::TextBox^ MoveCount2_tb;
	private: System::Windows::Forms::Label^ MoveCount2_lb;
	private: System::Windows::Forms::RadioButton^ Save3_rb;
	private: System::Windows::Forms::RadioButton^ Save2_rb;
	private: System::Windows::Forms::RadioButton^ Save1_rb;
	private: System::Windows::Forms::Button^ HideStatus_bt;
	private: System::Windows::Forms::Button^ ShowStatus_bt;
	private: System::Windows::Forms::LinkLabel^ JuChanMin_llb;
	private: System::Windows::Forms::Label^ Welcome_lb;
	private: System::Windows::Forms::Button^ Restart_bt;
	private: System::Windows::Forms::Timer^ Start_tm;
	private: System::Windows::Forms::Timer^ Refresh_tm;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Player_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Status_gb = (gcnew System::Windows::Forms::GroupBox());
			this->HideStatus_bt = (gcnew System::Windows::Forms::Button());
			this->ShowStatus_bt = (gcnew System::Windows::Forms::Button());
			this->Weapon_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Weapon_cb = (gcnew System::Windows::Forms::CheckBox());
			this->Character_gb = (gcnew System::Windows::Forms::GroupBox());
			this->BG_bt = (gcnew System::Windows::Forms::Button());
			this->TTT_bt = (gcnew System::Windows::Forms::Button());
			this->Slide_cb = (gcnew System::Windows::Forms::CheckBox());
			this->Slide_tb = (gcnew System::Windows::Forms::TextBox());
			this->Slide_lb = (gcnew System::Windows::Forms::Label());
			this->Gravity_gb = (gcnew System::Windows::Forms::GroupBox());
			this->FallSpeed_cb = (gcnew System::Windows::Forms::CheckBox());
			this->FallSpeed_tb = (gcnew System::Windows::Forms::TextBox());
			this->FallSpeed_lb = (gcnew System::Windows::Forms::Label());
			this->Gravity_cb = (gcnew System::Windows::Forms::CheckBox());
			this->Gravity_tb = (gcnew System::Windows::Forms::TextBox());
			this->Jump_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Jump1_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Jump0_rb = (gcnew System::Windows::Forms::RadioButton());
			this->JumpNone_rb = (gcnew System::Windows::Forms::RadioButton());
			this->HP_bt = (gcnew System::Windows::Forms::Button());
			this->HP_lb = (gcnew System::Windows::Forms::Label());
			this->HP_tb = (gcnew System::Windows::Forms::TextBox());
			this->GodMode_cb = (gcnew System::Windows::Forms::CheckBox());
			this->World_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Boss_gb = (gcnew System::Windows::Forms::GroupBox());
			this->MoveCount2_cb = (gcnew System::Windows::Forms::CheckBox());
			this->MoveCount2_tb = (gcnew System::Windows::Forms::TextBox());
			this->MoveCount2_lb = (gcnew System::Windows::Forms::Label());
			this->MoveCount_cb = (gcnew System::Windows::Forms::CheckBox());
			this->MoveCount_tb = (gcnew System::Windows::Forms::TextBox());
			this->MoveCount_lb = (gcnew System::Windows::Forms::Label());
			this->KillBoss_bt = (gcnew System::Windows::Forms::Button());
			this->BossHP_bt = (gcnew System::Windows::Forms::Button());
			this->BossHP_lb = (gcnew System::Windows::Forms::Label());
			this->BossHP_tb = (gcnew System::Windows::Forms::TextBox());
			this->Save_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Save3_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Save2_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Save1_rb = (gcnew System::Windows::Forms::RadioButton());
			this->StageDeath1_gb = (gcnew System::Windows::Forms::GroupBox());
			this->StageDeath1_cb = (gcnew System::Windows::Forms::CheckBox());
			this->StageDeath1_bt = (gcnew System::Windows::Forms::Button());
			this->StageDeath1_tb = (gcnew System::Windows::Forms::TextBox());
			this->StageTime1_gb = (gcnew System::Windows::Forms::GroupBox());
			this->StageTime1_cb = (gcnew System::Windows::Forms::CheckBox());
			this->StageTime1_bt = (gcnew System::Windows::Forms::Button());
			this->StageTime1_tb = (gcnew System::Windows::Forms::TextBox());
			this->Death1_gb = (gcnew System::Windows::Forms::GroupBox());
			this->Death1_cb = (gcnew System::Windows::Forms::CheckBox());
			this->Death1_bt = (gcnew System::Windows::Forms::Button());
			this->Death1_tb = (gcnew System::Windows::Forms::TextBox());
			this->Save1__gb = (gcnew System::Windows::Forms::GroupBox());
			this->Time1_cb = (gcnew System::Windows::Forms::CheckBox());
			this->Time1_bt = (gcnew System::Windows::Forms::Button());
			this->Time1_tb = (gcnew System::Windows::Forms::TextBox());
			this->JuChanMin_llb = (gcnew System::Windows::Forms::LinkLabel());
			this->Welcome_lb = (gcnew System::Windows::Forms::Label());
			this->Restart_bt = (gcnew System::Windows::Forms::Button());
			this->Start_tm = (gcnew System::Windows::Forms::Timer(this->components));
			this->Refresh_tm = (gcnew System::Windows::Forms::Timer(this->components));
			this->Player_gb->SuspendLayout();
			this->Status_gb->SuspendLayout();
			this->Weapon_gb->SuspendLayout();
			this->Character_gb->SuspendLayout();
			this->Gravity_gb->SuspendLayout();
			this->Jump_gb->SuspendLayout();
			this->World_gb->SuspendLayout();
			this->Boss_gb->SuspendLayout();
			this->Save_gb->SuspendLayout();
			this->StageDeath1_gb->SuspendLayout();
			this->StageTime1_gb->SuspendLayout();
			this->Death1_gb->SuspendLayout();
			this->Save1__gb->SuspendLayout();
			this->SuspendLayout();
			// 
			// Player_gb
			// 
			this->Player_gb->Controls->Add(this->Status_gb);
			this->Player_gb->Controls->Add(this->Weapon_gb);
			this->Player_gb->Controls->Add(this->Character_gb);
			this->Player_gb->Controls->Add(this->Slide_cb);
			this->Player_gb->Controls->Add(this->Slide_tb);
			this->Player_gb->Controls->Add(this->Slide_lb);
			this->Player_gb->Controls->Add(this->Gravity_gb);
			this->Player_gb->Controls->Add(this->Jump_gb);
			this->Player_gb->Controls->Add(this->HP_bt);
			this->Player_gb->Controls->Add(this->HP_lb);
			this->Player_gb->Controls->Add(this->HP_tb);
			this->Player_gb->Controls->Add(this->GodMode_cb);
			this->Player_gb->Location = System::Drawing::Point(12, 54);
			this->Player_gb->Name = L"Player_gb";
			this->Player_gb->Size = System::Drawing::Size(260, 499);
			this->Player_gb->TabIndex = 0;
			this->Player_gb->TabStop = false;
			this->Player_gb->Text = L"Player";
			// 
			// Status_gb
			// 
			this->Status_gb->Controls->Add(this->HideStatus_bt);
			this->Status_gb->Controls->Add(this->ShowStatus_bt);
			this->Status_gb->Location = System::Drawing::Point(8, 411);
			this->Status_gb->Name = L"Status_gb";
			this->Status_gb->Size = System::Drawing::Size(245, 79);
			this->Status_gb->TabIndex = 9;
			this->Status_gb->TabStop = false;
			this->Status_gb->Text = L"Status Bar";
			// 
			// HideStatus_bt
			// 
			this->HideStatus_bt->Location = System::Drawing::Point(6, 49);
			this->HideStatus_bt->Name = L"HideStatus_bt";
			this->HideStatus_bt->Size = System::Drawing::Size(233, 23);
			this->HideStatus_bt->TabIndex = 1;
			this->HideStatus_bt->Text = L"Disable Status";
			this->HideStatus_bt->UseVisualStyleBackColor = true;
			this->HideStatus_bt->Click += gcnew System::EventHandler(this, &MainForm::HideStatus_bt_Click);
			// 
			// ShowStatus_bt
			// 
			this->ShowStatus_bt->Location = System::Drawing::Point(6, 20);
			this->ShowStatus_bt->Name = L"ShowStatus_bt";
			this->ShowStatus_bt->Size = System::Drawing::Size(233, 23);
			this->ShowStatus_bt->TabIndex = 0;
			this->ShowStatus_bt->Text = L"Enable Status";
			this->ShowStatus_bt->UseVisualStyleBackColor = true;
			this->ShowStatus_bt->Click += gcnew System::EventHandler(this, &MainForm::ShowStatus_bt_Click);
			// 
			// Weapon_gb
			// 
			this->Weapon_gb->Controls->Add(this->Weapon_cb);
			this->Weapon_gb->Location = System::Drawing::Point(8, 126);
			this->Weapon_gb->Name = L"Weapon_gb";
			this->Weapon_gb->Size = System::Drawing::Size(245, 47);
			this->Weapon_gb->TabIndex = 1;
			this->Weapon_gb->TabStop = false;
			this->Weapon_gb->Text = L"Weapon";
			// 
			// Weapon_cb
			// 
			this->Weapon_cb->AutoSize = true;
			this->Weapon_cb->Location = System::Drawing::Point(6, 20);
			this->Weapon_cb->Name = L"Weapon_cb";
			this->Weapon_cb->Size = System::Drawing::Size(177, 16);
			this->Weapon_cb->TabIndex = 0;
			this->Weapon_cb->Text = L"Disable Weapon CoolDown";
			this->Weapon_cb->UseVisualStyleBackColor = true;
			this->Weapon_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Weapon_cb_CheckedChanged);
			// 
			// Character_gb
			// 
			this->Character_gb->Controls->Add(this->BG_bt);
			this->Character_gb->Controls->Add(this->TTT_bt);
			this->Character_gb->Location = System::Drawing::Point(7, 348);
			this->Character_gb->Name = L"Character_gb";
			this->Character_gb->Size = System::Drawing::Size(246, 57);
			this->Character_gb->TabIndex = 1;
			this->Character_gb->TabStop = false;
			this->Character_gb->Text = L"Character";
			// 
			// BG_bt
			// 
			this->BG_bt->Location = System::Drawing::Point(148, 21);
			this->BG_bt->Name = L"BG_bt";
			this->BG_bt->Size = System::Drawing::Size(92, 23);
			this->BG_bt->TabIndex = 1;
			this->BG_bt->Text = L"Best Guy";
			this->BG_bt->UseVisualStyleBackColor = true;
			this->BG_bt->Click += gcnew System::EventHandler(this, &MainForm::BG_bt_Click);
			// 
			// TTT_bt
			// 
			this->TTT_bt->Location = System::Drawing::Point(7, 21);
			this->TTT_bt->Name = L"TTT_bt";
			this->TTT_bt->Size = System::Drawing::Size(92, 23);
			this->TTT_bt->TabIndex = 0;
			this->TTT_bt->Text = L"Timemachine";
			this->TTT_bt->UseVisualStyleBackColor = true;
			this->TTT_bt->Click += gcnew System::EventHandler(this, &MainForm::TTT_bt_Click);
			// 
			// Slide_cb
			// 
			this->Slide_cb->AutoSize = true;
			this->Slide_cb->Location = System::Drawing::Point(14, 314);
			this->Slide_cb->Name = L"Slide_cb";
			this->Slide_cb->Size = System::Drawing::Size(56, 16);
			this->Slide_cb->TabIndex = 7;
			this->Slide_cb->Text = L"Apply";
			this->Slide_cb->UseVisualStyleBackColor = true;
			this->Slide_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Slide_cb_CheckedChanged);
			// 
			// Slide_tb
			// 
			this->Slide_tb->Location = System::Drawing::Point(83, 312);
			this->Slide_tb->Name = L"Slide_tb";
			this->Slide_tb->Size = System::Drawing::Size(164, 21);
			this->Slide_tb->TabIndex = 6;
			// 
			// Slide_lb
			// 
			this->Slide_lb->Location = System::Drawing::Point(6, 291);
			this->Slide_lb->Name = L"Slide_lb";
			this->Slide_lb->Size = System::Drawing::Size(100, 23);
			this->Slide_lb->TabIndex = 5;
			this->Slide_lb->Text = L"Sliding Duration";
			this->Slide_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Gravity_gb
			// 
			this->Gravity_gb->Controls->Add(this->FallSpeed_cb);
			this->Gravity_gb->Controls->Add(this->FallSpeed_tb);
			this->Gravity_gb->Controls->Add(this->FallSpeed_lb);
			this->Gravity_gb->Controls->Add(this->Gravity_cb);
			this->Gravity_gb->Controls->Add(this->Gravity_tb);
			this->Gravity_gb->Location = System::Drawing::Point(8, 186);
			this->Gravity_gb->Name = L"Gravity_gb";
			this->Gravity_gb->Size = System::Drawing::Size(245, 102);
			this->Gravity_gb->TabIndex = 1;
			this->Gravity_gb->TabStop = false;
			this->Gravity_gb->Text = L"Gravity";
			// 
			// FallSpeed_cb
			// 
			this->FallSpeed_cb->AutoSize = true;
			this->FallSpeed_cb->Location = System::Drawing::Point(6, 71);
			this->FallSpeed_cb->Name = L"FallSpeed_cb";
			this->FallSpeed_cb->Size = System::Drawing::Size(56, 16);
			this->FallSpeed_cb->TabIndex = 8;
			this->FallSpeed_cb->Text = L"Apply";
			this->FallSpeed_cb->UseVisualStyleBackColor = true;
			this->FallSpeed_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::FallSpeed_cb_CheckedChanged);
			// 
			// FallSpeed_tb
			// 
			this->FallSpeed_tb->Location = System::Drawing::Point(75, 69);
			this->FallSpeed_tb->Name = L"FallSpeed_tb";
			this->FallSpeed_tb->Size = System::Drawing::Size(164, 21);
			this->FallSpeed_tb->TabIndex = 7;
			// 
			// FallSpeed_lb
			// 
			this->FallSpeed_lb->AutoSize = true;
			this->FallSpeed_lb->Location = System::Drawing::Point(6, 54);
			this->FallSpeed_lb->Name = L"FallSpeed_lb";
			this->FallSpeed_lb->Size = System::Drawing::Size(65, 12);
			this->FallSpeed_lb->TabIndex = 6;
			this->FallSpeed_lb->Text = L"Fall Speed";
			// 
			// Gravity_cb
			// 
			this->Gravity_cb->AutoSize = true;
			this->Gravity_cb->Location = System::Drawing::Point(6, 24);
			this->Gravity_cb->Name = L"Gravity_cb";
			this->Gravity_cb->Size = System::Drawing::Size(56, 16);
			this->Gravity_cb->TabIndex = 5;
			this->Gravity_cb->Text = L"Apply";
			this->Gravity_cb->UseVisualStyleBackColor = true;
			this->Gravity_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Gravity_cb_CheckedChanged);
			// 
			// Gravity_tb
			// 
			this->Gravity_tb->Location = System::Drawing::Point(75, 22);
			this->Gravity_tb->Name = L"Gravity_tb";
			this->Gravity_tb->Size = System::Drawing::Size(164, 21);
			this->Gravity_tb->TabIndex = 4;
			// 
			// Jump_gb
			// 
			this->Jump_gb->Controls->Add(this->Jump1_rb);
			this->Jump_gb->Controls->Add(this->Jump0_rb);
			this->Jump_gb->Controls->Add(this->JumpNone_rb);
			this->Jump_gb->Location = System::Drawing::Point(8, 69);
			this->Jump_gb->Name = L"Jump_gb";
			this->Jump_gb->Size = System::Drawing::Size(245, 46);
			this->Jump_gb->TabIndex = 4;
			this->Jump_gb->TabStop = false;
			this->Jump_gb->Text = L"Infinity Jump";
			// 
			// Jump1_rb
			// 
			this->Jump1_rb->AutoSize = true;
			this->Jump1_rb->Location = System::Drawing::Point(181, 20);
			this->Jump1_rb->Name = L"Jump1_rb";
			this->Jump1_rb->Size = System::Drawing::Size(58, 16);
			this->Jump1_rb->TabIndex = 2;
			this->Jump1_rb->Text = L"Twice";
			this->Jump1_rb->UseVisualStyleBackColor = true;
			this->Jump1_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::JumpNone_rb_CheckedChanged);
			// 
			// Jump0_rb
			// 
			this->Jump0_rb->AutoSize = true;
			this->Jump0_rb->Location = System::Drawing::Point(94, 20);
			this->Jump0_rb->Name = L"Jump0_rb";
			this->Jump0_rb->Size = System::Drawing::Size(47, 16);
			this->Jump0_rb->TabIndex = 1;
			this->Jump0_rb->Text = L"First";
			this->Jump0_rb->UseVisualStyleBackColor = true;
			this->Jump0_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::JumpNone_rb_CheckedChanged);
			// 
			// JumpNone_rb
			// 
			this->JumpNone_rb->AutoSize = true;
			this->JumpNone_rb->Checked = true;
			this->JumpNone_rb->Location = System::Drawing::Point(6, 20);
			this->JumpNone_rb->Name = L"JumpNone_rb";
			this->JumpNone_rb->Size = System::Drawing::Size(53, 16);
			this->JumpNone_rb->TabIndex = 0;
			this->JumpNone_rb->TabStop = true;
			this->JumpNone_rb->Text = L"None";
			this->JumpNone_rb->UseVisualStyleBackColor = true;
			this->JumpNone_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::JumpNone_rb_CheckedChanged);
			// 
			// HP_bt
			// 
			this->HP_bt->Location = System::Drawing::Point(205, 40);
			this->HP_bt->Name = L"HP_bt";
			this->HP_bt->Size = System::Drawing::Size(48, 23);
			this->HP_bt->TabIndex = 3;
			this->HP_bt->Text = L"Apply";
			this->HP_bt->UseVisualStyleBackColor = true;
			this->HP_bt->Click += gcnew System::EventHandler(this, &MainForm::HP_bt_Click);
			// 
			// HP_lb
			// 
			this->HP_lb->Location = System::Drawing::Point(6, 40);
			this->HP_lb->Name = L"HP_lb";
			this->HP_lb->Size = System::Drawing::Size(100, 23);
			this->HP_lb->TabIndex = 2;
			this->HP_lb->Text = L"Angel Mode HP";
			this->HP_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// HP_tb
			// 
			this->HP_tb->Location = System::Drawing::Point(112, 41);
			this->HP_tb->Name = L"HP_tb";
			this->HP_tb->Size = System::Drawing::Size(87, 21);
			this->HP_tb->TabIndex = 1;
			// 
			// GodMode_cb
			// 
			this->GodMode_cb->AutoSize = true;
			this->GodMode_cb->Location = System::Drawing::Point(7, 21);
			this->GodMode_cb->Name = L"GodMode_cb";
			this->GodMode_cb->Size = System::Drawing::Size(79, 16);
			this->GodMode_cb->TabIndex = 0;
			this->GodMode_cb->Text = L"GodMode";
			this->GodMode_cb->UseVisualStyleBackColor = true;
			this->GodMode_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::GodMode_cb_CheckedChanged);
			// 
			// World_gb
			// 
			this->World_gb->Controls->Add(this->Boss_gb);
			this->World_gb->Controls->Add(this->Save_gb);
			this->World_gb->Location = System::Drawing::Point(312, 54);
			this->World_gb->Name = L"World_gb";
			this->World_gb->Size = System::Drawing::Size(260, 499);
			this->World_gb->TabIndex = 8;
			this->World_gb->TabStop = false;
			this->World_gb->Text = L"World";
			// 
			// Boss_gb
			// 
			this->Boss_gb->Controls->Add(this->MoveCount2_cb);
			this->Boss_gb->Controls->Add(this->MoveCount2_tb);
			this->Boss_gb->Controls->Add(this->MoveCount2_lb);
			this->Boss_gb->Controls->Add(this->MoveCount_cb);
			this->Boss_gb->Controls->Add(this->MoveCount_tb);
			this->Boss_gb->Controls->Add(this->MoveCount_lb);
			this->Boss_gb->Controls->Add(this->KillBoss_bt);
			this->Boss_gb->Controls->Add(this->BossHP_bt);
			this->Boss_gb->Controls->Add(this->BossHP_lb);
			this->Boss_gb->Controls->Add(this->BossHP_tb);
			this->Boss_gb->Location = System::Drawing::Point(8, 15);
			this->Boss_gb->Name = L"Boss_gb";
			this->Boss_gb->Size = System::Drawing::Size(245, 177);
			this->Boss_gb->TabIndex = 2;
			this->Boss_gb->TabStop = false;
			this->Boss_gb->Text = L"Stage Boss";
			// 
			// MoveCount2_cb
			// 
			this->MoveCount2_cb->AutoSize = true;
			this->MoveCount2_cb->Location = System::Drawing::Point(6, 148);
			this->MoveCount2_cb->Name = L"MoveCount2_cb";
			this->MoveCount2_cb->Size = System::Drawing::Size(56, 16);
			this->MoveCount2_cb->TabIndex = 14;
			this->MoveCount2_cb->Text = L"Apply";
			this->MoveCount2_cb->UseVisualStyleBackColor = true;
			this->MoveCount2_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::MoveCount2_cb_CheckedChanged);
			// 
			// MoveCount2_tb
			// 
			this->MoveCount2_tb->Location = System::Drawing::Point(75, 146);
			this->MoveCount2_tb->Name = L"MoveCount2_tb";
			this->MoveCount2_tb->Size = System::Drawing::Size(164, 21);
			this->MoveCount2_tb->TabIndex = 13;
			// 
			// MoveCount2_lb
			// 
			this->MoveCount2_lb->AutoSize = true;
			this->MoveCount2_lb->Location = System::Drawing::Point(6, 131);
			this->MoveCount2_lb->Name = L"MoveCount2_lb";
			this->MoveCount2_lb->Size = System::Drawing::Size(83, 12);
			this->MoveCount2_lb->TabIndex = 12;
			this->MoveCount2_lb->Text = L"Move Count 2";
			// 
			// MoveCount_cb
			// 
			this->MoveCount_cb->AutoSize = true;
			this->MoveCount_cb->Location = System::Drawing::Point(6, 100);
			this->MoveCount_cb->Name = L"MoveCount_cb";
			this->MoveCount_cb->Size = System::Drawing::Size(56, 16);
			this->MoveCount_cb->TabIndex = 11;
			this->MoveCount_cb->Text = L"Apply";
			this->MoveCount_cb->UseVisualStyleBackColor = true;
			this->MoveCount_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::MoveCount_cb_CheckedChanged);
			// 
			// MoveCount_tb
			// 
			this->MoveCount_tb->Location = System::Drawing::Point(75, 98);
			this->MoveCount_tb->Name = L"MoveCount_tb";
			this->MoveCount_tb->Size = System::Drawing::Size(164, 21);
			this->MoveCount_tb->TabIndex = 10;
			// 
			// MoveCount_lb
			// 
			this->MoveCount_lb->AutoSize = true;
			this->MoveCount_lb->Location = System::Drawing::Point(6, 83);
			this->MoveCount_lb->Name = L"MoveCount_lb";
			this->MoveCount_lb->Size = System::Drawing::Size(73, 12);
			this->MoveCount_lb->TabIndex = 9;
			this->MoveCount_lb->Text = L"Move Count";
			// 
			// KillBoss_bt
			// 
			this->KillBoss_bt->Location = System::Drawing::Point(6, 47);
			this->KillBoss_bt->Name = L"KillBoss_bt";
			this->KillBoss_bt->Size = System::Drawing::Size(233, 23);
			this->KillBoss_bt->TabIndex = 7;
			this->KillBoss_bt->Text = L"KILL BOSS";
			this->KillBoss_bt->UseVisualStyleBackColor = true;
			this->KillBoss_bt->Click += gcnew System::EventHandler(this, &MainForm::KillBoss_bt_Click);
			// 
			// BossHP_bt
			// 
			this->BossHP_bt->Location = System::Drawing::Point(191, 19);
			this->BossHP_bt->Name = L"BossHP_bt";
			this->BossHP_bt->Size = System::Drawing::Size(48, 23);
			this->BossHP_bt->TabIndex = 6;
			this->BossHP_bt->Text = L"Apply";
			this->BossHP_bt->UseVisualStyleBackColor = true;
			this->BossHP_bt->Click += gcnew System::EventHandler(this, &MainForm::BossHP_bt_Click);
			// 
			// BossHP_lb
			// 
			this->BossHP_lb->Location = System::Drawing::Point(4, 19);
			this->BossHP_lb->Name = L"BossHP_lb";
			this->BossHP_lb->Size = System::Drawing::Size(56, 23);
			this->BossHP_lb->TabIndex = 5;
			this->BossHP_lb->Text = L"Boss HP";
			this->BossHP_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// BossHP_tb
			// 
			this->BossHP_tb->Location = System::Drawing::Point(66, 20);
			this->BossHP_tb->Name = L"BossHP_tb";
			this->BossHP_tb->Size = System::Drawing::Size(117, 21);
			this->BossHP_tb->TabIndex = 4;
			// 
			// Save_gb
			// 
			this->Save_gb->Controls->Add(this->Save3_rb);
			this->Save_gb->Controls->Add(this->Save2_rb);
			this->Save_gb->Controls->Add(this->Save1_rb);
			this->Save_gb->Controls->Add(this->StageDeath1_gb);
			this->Save_gb->Controls->Add(this->StageTime1_gb);
			this->Save_gb->Controls->Add(this->Death1_gb);
			this->Save_gb->Controls->Add(this->Save1__gb);
			this->Save_gb->Location = System::Drawing::Point(8, 198);
			this->Save_gb->Name = L"Save_gb";
			this->Save_gb->Size = System::Drawing::Size(245, 292);
			this->Save_gb->TabIndex = 1;
			this->Save_gb->TabStop = false;
			this->Save_gb->Text = L"Save";
			// 
			// Save3_rb
			// 
			this->Save3_rb->AutoSize = true;
			this->Save3_rb->Location = System::Drawing::Point(182, 17);
			this->Save3_rb->Name = L"Save3_rb";
			this->Save3_rb->Size = System::Drawing::Size(57, 16);
			this->Save3_rb->TabIndex = 13;
			this->Save3_rb->TabStop = true;
			this->Save3_rb->Text = L"Save3";
			this->Save3_rb->UseVisualStyleBackColor = true;
			this->Save3_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Save1_rb_CheckedChanged);
			// 
			// Save2_rb
			// 
			this->Save2_rb->AutoSize = true;
			this->Save2_rb->Location = System::Drawing::Point(93, 17);
			this->Save2_rb->Name = L"Save2_rb";
			this->Save2_rb->Size = System::Drawing::Size(57, 16);
			this->Save2_rb->TabIndex = 12;
			this->Save2_rb->TabStop = true;
			this->Save2_rb->Text = L"Save2";
			this->Save2_rb->UseVisualStyleBackColor = true;
			this->Save2_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Save1_rb_CheckedChanged);
			// 
			// Save1_rb
			// 
			this->Save1_rb->AutoSize = true;
			this->Save1_rb->Checked = true;
			this->Save1_rb->Location = System::Drawing::Point(3, 17);
			this->Save1_rb->Name = L"Save1_rb";
			this->Save1_rb->Size = System::Drawing::Size(57, 16);
			this->Save1_rb->TabIndex = 11;
			this->Save1_rb->TabStop = true;
			this->Save1_rb->Text = L"Save1";
			this->Save1_rb->UseVisualStyleBackColor = true;
			this->Save1_rb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Save1_rb_CheckedChanged);
			// 
			// StageDeath1_gb
			// 
			this->StageDeath1_gb->Controls->Add(this->StageDeath1_cb);
			this->StageDeath1_gb->Controls->Add(this->StageDeath1_bt);
			this->StageDeath1_gb->Controls->Add(this->StageDeath1_tb);
			this->StageDeath1_gb->Location = System::Drawing::Point(8, 229);
			this->StageDeath1_gb->Name = L"StageDeath1_gb";
			this->StageDeath1_gb->Size = System::Drawing::Size(231, 55);
			this->StageDeath1_gb->TabIndex = 10;
			this->StageDeath1_gb->TabStop = false;
			this->StageDeath1_gb->Text = L"Stage Death Count";
			// 
			// StageDeath1_cb
			// 
			this->StageDeath1_cb->AutoSize = true;
			this->StageDeath1_cb->Location = System::Drawing::Point(162, 23);
			this->StageDeath1_cb->Name = L"StageDeath1_cb";
			this->StageDeath1_cb->Size = System::Drawing::Size(63, 16);
			this->StageDeath1_cb->TabIndex = 9;
			this->StageDeath1_cb->Text = L"Freeze";
			this->StageDeath1_cb->UseVisualStyleBackColor = true;
			this->StageDeath1_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::StageDeath1_cb_CheckedChanged);
			// 
			// StageDeath1_bt
			// 
			this->StageDeath1_bt->Location = System::Drawing::Point(99, 19);
			this->StageDeath1_bt->Name = L"StageDeath1_bt";
			this->StageDeath1_bt->Size = System::Drawing::Size(57, 23);
			this->StageDeath1_bt->TabIndex = 5;
			this->StageDeath1_bt->Text = L"Apply";
			this->StageDeath1_bt->UseVisualStyleBackColor = true;
			this->StageDeath1_bt->Click += gcnew System::EventHandler(this, &MainForm::StageDeath1_bt_Click);
			// 
			// StageDeath1_tb
			// 
			this->StageDeath1_tb->Location = System::Drawing::Point(6, 20);
			this->StageDeath1_tb->Name = L"StageDeath1_tb";
			this->StageDeath1_tb->Size = System::Drawing::Size(87, 21);
			this->StageDeath1_tb->TabIndex = 4;
			// 
			// StageTime1_gb
			// 
			this->StageTime1_gb->Controls->Add(this->StageTime1_cb);
			this->StageTime1_gb->Controls->Add(this->StageTime1_bt);
			this->StageTime1_gb->Controls->Add(this->StageTime1_tb);
			this->StageTime1_gb->Location = System::Drawing::Point(8, 166);
			this->StageTime1_gb->Name = L"StageTime1_gb";
			this->StageTime1_gb->Size = System::Drawing::Size(231, 57);
			this->StageTime1_gb->TabIndex = 2;
			this->StageTime1_gb->TabStop = false;
			this->StageTime1_gb->Text = L"Stage Time Count";
			// 
			// StageTime1_cb
			// 
			this->StageTime1_cb->AutoSize = true;
			this->StageTime1_cb->Location = System::Drawing::Point(162, 23);
			this->StageTime1_cb->Name = L"StageTime1_cb";
			this->StageTime1_cb->Size = System::Drawing::Size(63, 16);
			this->StageTime1_cb->TabIndex = 9;
			this->StageTime1_cb->Text = L"Freeze";
			this->StageTime1_cb->UseVisualStyleBackColor = true;
			this->StageTime1_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::StageTime1_cb_CheckedChanged);
			// 
			// StageTime1_bt
			// 
			this->StageTime1_bt->Location = System::Drawing::Point(99, 19);
			this->StageTime1_bt->Name = L"StageTime1_bt";
			this->StageTime1_bt->Size = System::Drawing::Size(57, 23);
			this->StageTime1_bt->TabIndex = 5;
			this->StageTime1_bt->Text = L"Apply";
			this->StageTime1_bt->UseVisualStyleBackColor = true;
			this->StageTime1_bt->Click += gcnew System::EventHandler(this, &MainForm::StageTime1_bt_Click);
			// 
			// StageTime1_tb
			// 
			this->StageTime1_tb->Location = System::Drawing::Point(6, 20);
			this->StageTime1_tb->Name = L"StageTime1_tb";
			this->StageTime1_tb->Size = System::Drawing::Size(87, 21);
			this->StageTime1_tb->TabIndex = 4;
			// 
			// Death1_gb
			// 
			this->Death1_gb->Controls->Add(this->Death1_cb);
			this->Death1_gb->Controls->Add(this->Death1_bt);
			this->Death1_gb->Controls->Add(this->Death1_tb);
			this->Death1_gb->Location = System::Drawing::Point(8, 103);
			this->Death1_gb->Name = L"Death1_gb";
			this->Death1_gb->Size = System::Drawing::Size(231, 57);
			this->Death1_gb->TabIndex = 1;
			this->Death1_gb->TabStop = false;
			this->Death1_gb->Text = L"Death Count";
			// 
			// Death1_cb
			// 
			this->Death1_cb->AutoSize = true;
			this->Death1_cb->Location = System::Drawing::Point(162, 23);
			this->Death1_cb->Name = L"Death1_cb";
			this->Death1_cb->Size = System::Drawing::Size(63, 16);
			this->Death1_cb->TabIndex = 9;
			this->Death1_cb->Text = L"Freeze";
			this->Death1_cb->UseVisualStyleBackColor = true;
			this->Death1_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Death1_cb_CheckedChanged);
			// 
			// Death1_bt
			// 
			this->Death1_bt->Location = System::Drawing::Point(99, 19);
			this->Death1_bt->Name = L"Death1_bt";
			this->Death1_bt->Size = System::Drawing::Size(57, 23);
			this->Death1_bt->TabIndex = 5;
			this->Death1_bt->Text = L"Apply";
			this->Death1_bt->UseVisualStyleBackColor = true;
			this->Death1_bt->Click += gcnew System::EventHandler(this, &MainForm::Death1_bt_Click);
			// 
			// Death1_tb
			// 
			this->Death1_tb->Location = System::Drawing::Point(6, 20);
			this->Death1_tb->Name = L"Death1_tb";
			this->Death1_tb->Size = System::Drawing::Size(87, 21);
			this->Death1_tb->TabIndex = 4;
			// 
			// Save1__gb
			// 
			this->Save1__gb->Controls->Add(this->Time1_cb);
			this->Save1__gb->Controls->Add(this->Time1_bt);
			this->Save1__gb->Controls->Add(this->Time1_tb);
			this->Save1__gb->Location = System::Drawing::Point(8, 40);
			this->Save1__gb->Name = L"Save1__gb";
			this->Save1__gb->Size = System::Drawing::Size(231, 57);
			this->Save1__gb->TabIndex = 0;
			this->Save1__gb->TabStop = false;
			this->Save1__gb->Text = L"Time Count";
			// 
			// Time1_cb
			// 
			this->Time1_cb->AutoSize = true;
			this->Time1_cb->Location = System::Drawing::Point(162, 23);
			this->Time1_cb->Name = L"Time1_cb";
			this->Time1_cb->Size = System::Drawing::Size(63, 16);
			this->Time1_cb->TabIndex = 9;
			this->Time1_cb->Text = L"Freeze";
			this->Time1_cb->UseVisualStyleBackColor = true;
			this->Time1_cb->CheckedChanged += gcnew System::EventHandler(this, &MainForm::Time1_cb_CheckedChanged);
			// 
			// Time1_bt
			// 
			this->Time1_bt->Location = System::Drawing::Point(99, 19);
			this->Time1_bt->Name = L"Time1_bt";
			this->Time1_bt->Size = System::Drawing::Size(57, 23);
			this->Time1_bt->TabIndex = 5;
			this->Time1_bt->Text = L"Apply";
			this->Time1_bt->UseVisualStyleBackColor = true;
			this->Time1_bt->Click += gcnew System::EventHandler(this, &MainForm::Time1_bt_Click);
			// 
			// Time1_tb
			// 
			this->Time1_tb->Location = System::Drawing::Point(6, 20);
			this->Time1_tb->Name = L"Time1_tb";
			this->Time1_tb->Size = System::Drawing::Size(87, 21);
			this->Time1_tb->TabIndex = 4;
			// 
			// JuChanMin_llb
			// 
			this->JuChanMin_llb->Location = System::Drawing::Point(-2, 552);
			this->JuChanMin_llb->Name = L"JuChanMin_llb";
			this->JuChanMin_llb->Size = System::Drawing::Size(52, 23);
			this->JuChanMin_llb->TabIndex = 9;
			this->JuChanMin_llb->TabStop = true;
			this->JuChanMin_llb->Text = L"Github";
			this->JuChanMin_llb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->JuChanMin_llb->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::JuChanMin_llb_LinkClicked);
			// 
			// Welcome_lb
			// 
			this->Welcome_lb->Font = (gcnew System::Drawing::Font(L"굴림", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Welcome_lb->Location = System::Drawing::Point(10, 9);
			this->Welcome_lb->Name = L"Welcome_lb";
			this->Welcome_lb->Size = System::Drawing::Size(262, 38);
			this->Welcome_lb->TabIndex = 10;
			this->Welcome_lb->Text = L"Wait Game..";
			this->Welcome_lb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Restart_bt
			// 
			this->Restart_bt->Location = System::Drawing::Point(312, 12);
			this->Restart_bt->Name = L"Restart_bt";
			this->Restart_bt->Size = System::Drawing::Size(260, 35);
			this->Restart_bt->TabIndex = 11;
			this->Restart_bt->Text = L"If you relaunch the game, click this";
			this->Restart_bt->UseVisualStyleBackColor = true;
			this->Restart_bt->Click += gcnew System::EventHandler(this, &MainForm::Restart_bt_Click);
			// 
			// Start_tm
			// 
			this->Start_tm->Interval = 1000;
			this->Start_tm->Tick += gcnew System::EventHandler(this, &MainForm::Start_tm_Tick);
			// 
			// Refresh_tm
			// 
			this->Refresh_tm->Interval = 1;
			this->Refresh_tm->Tick += gcnew System::EventHandler(this, &MainForm::Refresh_tm_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(584, 573);
			this->Controls->Add(this->Restart_bt);
			this->Controls->Add(this->Welcome_lb);
			this->Controls->Add(this->JuChanMin_llb);
			this->Controls->Add(this->World_gb);
			this->Controls->Add(this->Player_gb);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IWBTJG Trainer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Player_gb->ResumeLayout(false);
			this->Player_gb->PerformLayout();
			this->Status_gb->ResumeLayout(false);
			this->Weapon_gb->ResumeLayout(false);
			this->Weapon_gb->PerformLayout();
			this->Character_gb->ResumeLayout(false);
			this->Gravity_gb->ResumeLayout(false);
			this->Gravity_gb->PerformLayout();
			this->Jump_gb->ResumeLayout(false);
			this->Jump_gb->PerformLayout();
			this->World_gb->ResumeLayout(false);
			this->Boss_gb->ResumeLayout(false);
			this->Boss_gb->PerformLayout();
			this->Save_gb->ResumeLayout(false);
			this->Save_gb->PerformLayout();
			this->StageDeath1_gb->ResumeLayout(false);
			this->StageDeath1_gb->PerformLayout();
			this->StageTime1_gb->ResumeLayout(false);
			this->StageTime1_gb->PerformLayout();
			this->Death1_gb->ResumeLayout(false);
			this->Death1_gb->PerformLayout();
			this->Save1__gb->ResumeLayout(false);
			this->Save1__gb->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int Save = 0;

		bool GodMode = false;
		int JumpCount = -1;
		bool InfinityShoot = false;
		bool Gravity = false;
		bool FallSpeed = false;
		bool Sliding = false;
		bool Time = false;
		bool Death = false;
		bool StageTime = false;
		bool StageDeath = false;


	private: System::Void GodMode_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (GodMode_cb->Checked)
		{
			GodMode = true;
		}
		else
		{
			GodMode = false;
		}
	}
private: System::Void HP_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (HP_tb->Text == "")
	{
		return;
	}

	FN::SET_HP(System::Double(Convert::ToDouble(HP_tb->Text)));
}
private: System::Void JumpNone_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (JumpNone_rb->Checked)
	{
		JumpCount = -1;
	}
	else if (Jump0_rb->Checked)
	{
		JumpCount = 2;
	}
	else if (Jump1_rb->Checked)
	{
		JumpCount = 1;
	}
}
private: System::Void Weapon_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Weapon_cb->Checked)
	{
		InfinityShoot = true;
	}
	else
	{
		InfinityShoot = false;
	}
}
private: System::Void Gravity_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Gravity_cb->Checked)
	{
		Gravity = true;
	}
	else
	{
		Gravity = false;
	}
}
private: System::Void FallSpeed_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (FallSpeed_cb->Checked)
	{
		FallSpeed = true;
	}
	else
	{
		FallSpeed = false;
	}
}
private: System::Void Slide_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Slide_cb->Checked)
	{
		Sliding = true;
	}
	else
	{
		Sliding = false;
	}
}
private: System::Void TTT_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	FN::SET_CHARACTER(1);
}
private: System::Void BG_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	FN::SET_CHARACTER(2);
}
private: System::Void ShowStatus_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	FN::HIDE_STATUS(false);
}
private: System::Void HideStatus_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	FN::HIDE_STATUS(true);
}
private: System::Void BossHP_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (BossHP_tb->Text == "")
	{
		return;
	}

	FN::SET_BOSS_HP(Convert::ToDouble(BossHP_tb->Text));
}
private: System::Void KillBoss_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	FN::KILL_BOSS();
}
private: System::Void MoveCount_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MoveCount_tb->Text == "")
	{
		return;
	}

	FN::SET_BOSS_MOVECOUNT(Convert::ToDouble(MoveCount_tb));
}
private: System::Void MoveCount2_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MoveCount2_tb->Text == "")
	{
		return;
	}

	FN::SET_BOSS_MOVECOUNT_(Convert::ToDouble(MoveCount2_tb));
}
private: System::Void Save1_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Save1_rb->Checked)
	{
		Save = 0;
	}
	else if (Save2_rb->Checked)
	{
		Save = 1;
	}
	else if (Save3_rb->Checked)
	{
		Save = 2;
	}
}
private: System::Void Time1_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Time1_tb->Text == "")
	{
		return;
	}

	FN::SET_TIME(Save, Convert::ToDouble(Time1_tb->Text));
}
private: System::Void Time1_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Time1_cb->Checked)
	{
		Time = true;
	}
	else
	{
		Time = false;
	}
}
private: System::Void Death1_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Death1_tb->Text == "")
	{
		return;
	}

	FN::SET_DEATH(Save, Convert::ToDouble(Death1_tb->Text));
}
private: System::Void Death1_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Death1_cb->Checked)
	{
		Death = true;
	}
	else
	{
		Death = false;
	}
}
private: System::Void StageTime1_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StageTime1_tb->Text == "")
	{
		return;
	}

	FN::SET_STAGE_TIME(Save, Convert::ToDouble(StageTime1_tb->Text));
}
private: System::Void StageTime1_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (StageTime1_cb->Checked)
	{
		StageTime = true;
	}
	else
	{
		StageTime = false;
	}
}
private: System::Void StageDeath1_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StageDeath1_tb->Text == "")
	{
		return;
	}

	FN::SET_STAGE_DEATH(Save, Convert::ToDouble(StageDeath1_tb->Text));
}
private: System::Void StageDeath1_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (StageDeath1_cb->Checked)
	{
		StageDeath = true;
	}
	else
	{
		StageDeath = false;
	}
}
private: System::Void Start_tm_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (MEM::IS_TRAINER_READY())
	{
		Welcome_lb->ForeColor = Color::Green;
		Welcome_lb->Text = "GAME IS RUNNING";
		MEM::GET_ADDRESS();
		Start_tm->Stop();
		Refresh_tm->Start();
	}
}
private: System::Void Refresh_tm_Tick(System::Object^ sender, System::EventArgs^ e) {
	MEM::GET_ADDRESS_TICK();

	if (GodMode)
	{
		FN::SET_GOD();
	}

	if (JumpCount != -1)
	{
		FN::SET_JUMP_COUNT(JumpCount);
	}

	if (InfinityShoot)
	{
		FN::SET_WEAPON_COOLDOWN(0);
	}

	if (Gravity && Gravity_tb->Text != "")
	{
		FN::SET_GRAVITY(Convert::ToDouble(Gravity_tb->Text));
	}

	if (FallSpeed && FallSpeed_tb->Text != "")
	{
		FN::SET_FALL_SPEED(Convert::ToDouble(FallSpeed_tb->Text));
	}

	if (Sliding && Slide_tb->Text != "")
	{
		FN::SET_SLIDING_DURATION(Convert::ToDouble(Slide_tb->Text));
	}

	if (Time && Time1_tb->Text != "")
	{
		FN::SET_TIME(Save, Convert::ToDouble(Time1_tb->Text));
	}

	if (Death && Death1_tb->Text != "")
	{
		FN::SET_DEATH(Save, Convert::ToDouble(Death1_tb->Text));
	}

	if (StageTime && StageTime1_tb->Text != "")
	{
		FN::SET_STAGE_TIME(Save, Convert::ToDouble(StageTime1_tb->Text));
	}

	if (StageDeath && StageDeath1_tb->Text != "")
	{
		FN::SET_STAGE_DEATH(Save, Convert::ToDouble(StageDeath1_tb->Text));
	}
}
private: System::Void Restart_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	MEM::REFRESH();
	Application::Restart();
}

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Start_tm->Start();
}
private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	MEM::REFRESH();
}
private: System::Void JuChanMin_llb_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	ShellExecute(NULL, NULL, L"https://github.com/JuChanMin/IWannaBeTheJusticeGuy-Trainer", NULL, NULL, SW_SHOWNORMAL);
}
};
}
