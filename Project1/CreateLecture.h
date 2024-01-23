#pragma once
#include <fstream>
#include <msclr/marshal.h>
#include <string>
namespace Project1
{
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class CreateLecture
	{
	private:
		array<array<PictureBox^>^>^ picboxes;
		array<array<TextBox^>^>^ textix;
		TextBox^ stran1;
		FILE* f;
		ImageList^ imglst;
		int tempi = 170;
		int tempj = 185;
		//int lenght = 0;
	public:
		CreateLecture(char* path1, ImageList^ inputlist)
		{
			imglst = gcnew ImageList;
			imglst = inputlist;
			picboxes = gcnew array<array<PictureBox^>^>(4);
			textix = gcnew array<array<TextBox^>^>(4);
			for (int i = 0; i < 4; i++)
			{
				picboxes[i] = gcnew array<PictureBox^>(2);
				textix[i] = gcnew array<TextBox^>(2);
			}
			int temp = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					textix[i][j] = gcnew TextBox;
					textix[i][j]->ReadOnly = true;
					picboxes[i][j] = gcnew PictureBox;
					picboxes[i][j]->Size = Size(147, 156);
					picboxes[i][j]->Location = Point(50 + i * tempi, 20 + j * tempj);
					textix[i][j]->Size = Size(147, 20);
					textix[i][j]->Location = Point(50 + i * tempi,  30+picboxes[i][j]->Width+j*tempj);
					picboxes[i][j]->BackgroundImage = imglst->Images[temp];
					picboxes[i][j]->BackgroundImageLayout = ImageLayout::Stretch;
					textix[i][j]->Text = imglst->Images->Keys[temp]->ToString();
					textix[i][j]->Text = textix[i][j]->Text->Remove(textix[i][j]->Text->Length - 4);
					temp++;
				}
			}
			stran1 = gcnew TextBox;
			char texton[10000];
			this->stran1->ReadOnly = true;
			this->stran1->AutoSize = false;
			this->stran1->Multiline = true;
			this->stran1->ScrollBars = ScrollBars::Vertical;
			this->stran1->Location = System::Drawing::Point(21, 40);
			this->stran1->Size = System::Drawing::Size(700, 340);
			this->stran1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			f = fopen(path1,"r");
			while (fgets(texton,sizeof(texton),f))
			{
				stran1->Text += marshal_as<String^>(texton);
			}
			fclose(f);
		}
		TextBox^ Text()
		{
			return stran1;
		}
		array<array<PictureBox^>^>^ Pict()
		{
			return picboxes;
		}
		array<array<TextBox^>^>^ CreateZone()
		{
			return textix;
		}

	};

}