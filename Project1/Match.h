#pragma once
namespace Project1
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MatchPictAntText
	{
	private:
		int temp = 38;
		array<String^>^ mass;
		Convert^ converter;
		array<PictureBox^>^ arrpic;
		array<ComboBox^>^ arrspis;
		ImageList^ imglst;
		array<int>^ temp1;
		Random^ rand;
		array<int>^ used;
		array<int>^ used1;
		int goodansw = 0;
	public:
		// Конструктор
		MatchPictAntText(ImageList^ imginput)
		{
			mass = gcnew array<String^>(8);
			used = gcnew array<int>(4);
			used1 = gcnew array<int>(4);
			arrpic = gcnew array<PictureBox^>(4);
			arrspis = gcnew array<ComboBox^>(4);
			int tag_count = 0;
			imglst = imginput;
			rand = gcnew Random;
			for (int i = 0; i < 8; i++)
			{
				mass[i] = imglst->Images->Keys[i]->ToString();
				mass[i] = mass[i]->Remove(mass[i]->Length - 4);
			}
			for (int i = 0; i < 4; i++)
			{
				// создание игрового поля
				arrpic[i] = gcnew PictureBox;
				arrpic[i]->Location = Point(temp, 81);
				arrpic[i]->Size = Size(121, 127);
				arrpic[i]->BackgroundImageLayout = ImageLayout::Stretch;
				arrspis[i] = gcnew ComboBox;
				arrspis[i]->DropDownStyle = ComboBoxStyle::DropDownList;
				arrspis[i]->Location = Point(temp, 234);
				arrspis[i]->Items->AddRange(gcnew array<Object^>(8) { mass[0],mass[1],mass[2],mass[3],mass[4],mass[5],mass[6],mass[7]});
				arrspis[i]->Tag = tag_count;
				temp += 175;
				tag_count++;
				used1[i] = -1;
				used[i] = -1;
			}
			// Используем тасование Фишера-Йется для генерации случайных неповторяющихся чисел
			temp1 = gcnew array<int>(8);
			for (int i = 0; i < 8; i++)
			{
				int j = rand->Next(8) % (i + 1);
				temp1[i] = temp1[j];
				temp1[j] = i;
			}
			for (int i = 0; i < 4; i++)
			{
				arrpic[i]->Tag = temp1[i];
				arrpic[i]->BackgroundImage = imglst->Images[temp1[i]];
			}
		}
		// Возвращаемая функция, для работы на форме
		array<ComboBox^>^ Spiski()
		{
			return arrspis;
		}
		array<PictureBox^>^ PB()
		{
			return arrpic;
		}
		// Проверка ответов
		void Proverka(Object^ sender, EventArgs^ e)
		{
			ComboBox^ temptet = (ComboBox^)sender;
			// Хорошо подкована математически, логически и без багов
			for (int i = 0; i < 4; i++)
			{
				if (converter->ToInt32(temptet->Tag) == i && converter->ToInt32(arrpic[i]->Tag) == converter->ToInt32(temptet->SelectedIndex))
				{
					if (used[i] != converter->ToInt32(temptet->SelectedIndex))
					{
						goodansw += 1;
						used[i] = converter->ToInt32(temptet->SelectedIndex);
						used1[i] = converter->ToInt32(temptet->Tag);
						return;
					}
				}
				else if (used1[i] == converter->ToInt32(temptet->Tag) && converter->ToInt32(arrpic[i]->Tag) != converter->ToInt32(temptet->SelectedIndex))
				{
					used1[i] = -1;
					used[i] = -1;
					goodansw -= 1;
					return;
				}
			}
		}
		// Проверка полного ответа
		bool PrinudProverka()
		{
			if (goodansw == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	};
}
