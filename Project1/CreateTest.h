#pragma once
#include <msclr/marshal.h>
namespace Project1
{
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class CreateTest
	{
	private:
		Convert^ converter;
		array<String^>^ goodansw;
		int goodanswcount = 0;
		array<array<RadioButton^>^>^ answ;
		array<GroupBox^>^ groups;
		String^ temp;
		array<String^>^ used;
		FILE* f;
		int tempi = 20;
		array<Label^>^ questions;
	public:
		CreateTest(char* path,char* path2,char* path3)
		{
			used = gcnew array<String^>(8);
			char quest[80];
			f = fopen(path, "r");
			answ = gcnew array<array<RadioButton^>^>(4);
			int j = 0;
			for (int i = 0; i < 4; i++)
			{
				answ[i] = gcnew array<RadioButton^>(8);
			}
			questions = gcnew array<Label^>(8);
			groups = gcnew array<GroupBox^>(8);
			goodansw = gcnew array<String^>(8);
			for (int i = 0; i < 8; i++)
			{
				used[i] = L"";
				groups[i] = gcnew GroupBox;
				groups[i]->BackColor = System::Drawing::Color::Transparent;
				groups[i]->Location = System::Drawing::Point(22, 10+tempi+i*tempi*2.5);
				groups[i]->Size = System::Drawing::Size(500, 35);
				groups[i]->Tag = i;
				questions[i] = gcnew Label;
				questions[i]->BackColor = System::Drawing::Color::Transparent;
				questions[i]->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				questions[i]->Location = System::Drawing::Point(22, tempi + i*tempi*2.5);
				questions[i]->Size = System::Drawing::Size(696, 25);
				fgets(quest, sizeof(quest), f);
				temp = marshal_as<String^>(quest);
				questions[i]->Text = temp;
			}
			fclose(f);
			f = fopen(path2, "r");
			for (int j = 0; j < 8; j++)
			{
				for (int i = 0; i < 4; i++)
				{
					answ[i][j] = gcnew RadioButton;
					answ[i][j]->AutoSize = true;
					answ[i][j]->BackColor = System::Drawing::Color::Transparent;
					answ[i][j]->Location = System::Drawing::Point(15+110*i, 15);
					answ[i][j]->Size = System::Drawing::Size(83, 19);
					fgets(quest, sizeof(quest), f);
					if(quest[0] =='-' && quest[1] == '-')
						fgets(quest, sizeof(quest), f);
					temp = marshal_as<String^>(quest);
					answ[i][j]->Text = temp;
					answ[i][j]->Name = temp;
					answ[i][j]->UseVisualStyleBackColor = false;
					groups[j]->Controls->Add(answ[i][j]);
				}
			}
			fclose(f);
			f = fopen(path3, "r");
			for (int i = 0; i < 8; i++)
			{
				fgets(quest, sizeof(quest), f);
				goodansw[i] = marshal_as<String^>(quest);
			}
		}
		
		array<Label^>^ CreateQuest()
		{
			return questions;
		}
		array<GroupBox^>^ CreateGroup()
		{
			return groups;
		}
		void CheckAnsw(Object^ sender, EventArgs^ e)
		{
			GroupBox^ g = (GroupBox^)sender;
			for (int i = 0; i < 4; i++)
			{
				RadioButton^ r = (RadioButton^)g->Controls[i];
				if (r->Checked == true)
				{
					if (r->Text == goodansw[converter->ToInt32(g->Tag)] && used[converter->ToInt32(g->Tag)] == L"")
					{
						goodanswcount += 1;
						used[converter->ToInt32(g->Tag)] = r->Text;
					}
					else if (r->Text != goodansw[converter->ToInt32(g->Tag)] && used[converter->ToInt32(g->Tag)] != L"")
					{
						goodanswcount -= 1;
						used[converter->ToInt32(g->Tag)] = L"";
					}
				}
			}
		}
		int Result()
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					answ[j][i]->Enabled = false;
					if (answ[j][i]->Text == goodansw[i])
					{
						answ[j][i]->BackColor = Color::Green;
					}
				}
			}
			return goodanswcount;
		}
	};
}
