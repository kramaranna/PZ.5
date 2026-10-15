#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace PZ5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-23, -46);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(200, 100);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(192, 74);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(192, 74);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(730, 488);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->checkedListBox1);
			this->tabPage3->Controls->Add(this->panel2);
			this->tabPage3->Controls->Add(this->panel1);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(722, 462);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Завдання 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент списку", L"Кількість елементів в стеці",
					L"Pop"
			});
			this->checkedListBox1->Location = System::Drawing::Point(427, 41);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(216, 94);
			this->checkedListBox1->TabIndex = 8;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(372, 176);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(320, 102);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(27, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 77);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Додати нові значення";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::Color::Purple;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(329, 456);
			this->panel1->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(37, 15);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(249, 283);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввести стек";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(499, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Очистити стек";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel3);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(722, 462);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Завдання 2";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Location = System::Drawing::Point(468, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 198);
			this->panel3->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(30, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 53);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Додати значення стеку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(30, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 55);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Видалити елементи стеку";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(304, 344);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(73, 141);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(185, 134);
			this->listBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(345, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(160, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір стеку";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel4);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Controls->Add(this->textBox3);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(722, 462);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Завдання 3";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SandyBrown;
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Location = System::Drawing::Point(435, 122);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 179);
			this->panel4->TabIndex = 12;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(47, 22);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 48);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Додати елементи стеку";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(47, 99);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 57);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Видалити елементи стеку";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(309, 369);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 44);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Обчислити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(44, 142);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(185, 134);
			this->listBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(382, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(197, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введіть розмір стеку";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 488);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Collections::Generic::Stack<int> numbersStack;
	System::Collections::Generic::Stack<int> myStack1;
	System::Collections::Generic::Stack<String^>^ StrStack;
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Push(10);
	numbersStack.Push(20);
	numbersStack.Push(30);

	richTextBox1->Clear();
	for each (int number in numbersStack) {
		richTextBox1->AppendText(number.ToString() + "\r\n");
	}

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox1->Text);

	numbersStack.Push(number);

	textBox1->Clear();
	richTextBox1->Clear();
	for each (int num in numbersStack) {
		richTextBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) { // "Верхній елемент стеку"
		if (numbersStack.Count > 0) {
			MessageBox::Show("Поточний верхній елемент: " + numbersStack.Peek().ToString());
		}
		else {
			MessageBox::Show("Стек пустий.");
		}
		checkedListBox1->SetItemChecked(0, false); // Знімаємо галочку з 0-го елемента
	}

	if (checkedListBox1->GetItemChecked(1)) { // "Кількість елементів в стеці"
		int count = numbersStack.Count;
		MessageBox::Show("Кількість елементів у стеку: " + count.ToString());
		checkedListBox1->SetItemChecked(1, false); // Знімаємо галочку з 1-го елемента
	}

	if (checkedListBox1->GetItemChecked(2)) { // "pop"
		if (numbersStack.Count > 0) {
			int removedElement = numbersStack.Pop();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
		}
		else {
			MessageBox::Show("Не можна видалити, стек пустий.");
		}
		checkedListBox1->SetItemChecked(2, false); // Знімаємо галочку з 2-го елемента
	}
	richTextBox1->Clear();

	for each (int num in numbersStack) {
		richTextBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Clear();

	richTextBox1->Clear();

	if (numbersStack.Count == 0) {
		MessageBox::Show("Стек порожній.");
	}
	else {
		MessageBox::Show("Стек не порожній.");
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox2->Text);

	for (int i = 0; i < size; ++i) {
		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент стеку", "Введіть значення елементів стеку", "", 200, 200));

		myStack1.Push(inputValue);

		listBox1->Items->Insert(0, inputValue.ToString());
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStack1.Count > 0) {
		myStack1.Pop();
		listBox1->Items->Clear();
		for each (int value in myStack1)
		{
			listBox1->Items->Add(value.ToString());
		}
	}
	else
	{
		listBox1->Items->Add(" Стек порожній");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	int sum = 0;
	int evenCount = 0;

	for each (int value in myStack1) {

		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}

	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
	}
	else {
		MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Перевірка на випадок, якщо стек не був ініціалізований
	if (StrStack == nullptr) {
		StrStack = gcnew System::Collections::Generic::Stack<String^>();
	}

	int size = Convert::ToInt32(textBox3->Text); // Використовуємо правильний textBox4

	while (StrStack->Count < size)
	{
		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Елемент стеку", "Введіть значення елементів стеку", "", 200, 200);

		StrStack->Push(inputValue);

		listBox2->Items->Insert(0, inputValue);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrStack->Count > 0) {
		StrStack->Pop();
		listBox2->Items->Clear();

		for each (String ^ value in StrStack)
		{
			listBox2->Items->Add(value);
		}
	}
	else
	{
		listBox2->Items->Add("Стек порожній");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int CountChars = 0;

	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		CountChars += value->Length;
	}

	MessageBox::Show("Загальна кількість символів: " + CountChars, "Підсумок символів");
}
};
}
