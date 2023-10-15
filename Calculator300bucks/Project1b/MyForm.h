#pragma once

namespace Project1b {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Label^ label_res;
	private: System::Windows::Forms::Button^ button_ac;
	private: System::Windows::Forms::Button^ button_minus_plus;
	private: System::Windows::Forms::Button^ button_percent;






	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_multiplicate;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_mines;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button_equad;
	private: System::Windows::Forms::Button^ button_dot;




	private: System::Windows::Forms::Button^ button20;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;

	protected:

	protected:

	protected:





	protected:







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_res = (gcnew System::Windows::Forms::Label());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_minus_plus = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_multiplicate = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_mines = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button_equad = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_res
			// 
			this->label_res->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_res->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 28.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_res->ForeColor = System::Drawing::Color::White;
			this->label_res->Location = System::Drawing::Point(12, 9);
			this->label_res->Name = L"label_res";
			this->label_res->Size = System::Drawing::Size(391, 110);
			this->label_res->TabIndex = 1;
			this->label_res->Text = L"0";
			this->label_res->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::Color::DimGray;
			this->button_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->ForeColor = System::Drawing::Color::White;
			this->button_ac->Location = System::Drawing::Point(12, 122);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(85, 75);
			this->button_ac->TabIndex = 2;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_minus_plus
			// 
			this->button_minus_plus->BackColor = System::Drawing::Color::DimGray;
			this->button_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus_plus->ForeColor = System::Drawing::Color::White;
			this->button_minus_plus->Location = System::Drawing::Point(113, 122);
			this->button_minus_plus->Name = L"button_minus_plus";
			this->button_minus_plus->Size = System::Drawing::Size(85, 75);
			this->button_minus_plus->TabIndex = 3;
			this->button_minus_plus->Text = L"+/-";
			this->button_minus_plus->UseVisualStyleBackColor = false;
			this->button_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_plus_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::Color::DimGray;
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_percent->ForeColor = System::Drawing::Color::White;
			this->button_percent->Location = System::Drawing::Point(216, 122);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(85, 75);
			this->button_percent->TabIndex = 4;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::Gold;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::Color::White;
			this->button_divide->Location = System::Drawing::Point(318, 122);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(85, 75);
			this->button_divide->TabIndex = 5;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_multiplicate
			// 
			this->button_multiplicate->BackColor = System::Drawing::Color::Gold;
			this->button_multiplicate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_multiplicate->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_multiplicate->ForeColor = System::Drawing::Color::White;
			this->button_multiplicate->Location = System::Drawing::Point(318, 219);
			this->button_multiplicate->Name = L"button_multiplicate";
			this->button_multiplicate->Size = System::Drawing::Size(85, 75);
			this->button_multiplicate->TabIndex = 9;
			this->button_multiplicate->Text = L"*";
			this->button_multiplicate->UseVisualStyleBackColor = false;
			this->button_multiplicate->Click += gcnew System::EventHandler(this, &MyForm::button_multiplicate_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(216, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 75);
			this->button6->TabIndex = 8;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(113, 219);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 75);
			this->button7->TabIndex = 7;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(12, 219);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 75);
			this->button8->TabIndex = 6;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_mines
			// 
			this->button_mines->BackColor = System::Drawing::Color::Gold;
			this->button_mines->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mines->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mines->ForeColor = System::Drawing::Color::White;
			this->button_mines->Location = System::Drawing::Point(318, 313);
			this->button_mines->Name = L"button_mines";
			this->button_mines->Size = System::Drawing::Size(85, 75);
			this->button_mines->TabIndex = 13;
			this->button_mines->Text = L"-";
			this->button_mines->UseVisualStyleBackColor = false;
			this->button_mines->Click += gcnew System::EventHandler(this, &MyForm::button_mines_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(216, 313);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 75);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(113, 313);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 75);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(12, 313);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 75);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Gold;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(318, 409);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(85, 75);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(216, 409);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 75);
			this->button14->TabIndex = 16;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(113, 409);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 75);
			this->button15->TabIndex = 15;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(12, 409);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 75);
			this->button16->TabIndex = 14;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_equad
			// 
			this->button_equad->BackColor = System::Drawing::Color::Gold;
			this->button_equad->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equad->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equad->ForeColor = System::Drawing::Color::White;
			this->button_equad->Location = System::Drawing::Point(318, 501);
			this->button_equad->Name = L"button_equad";
			this->button_equad->Size = System::Drawing::Size(85, 75);
			this->button_equad->TabIndex = 21;
			this->button_equad->Text = L"=";
			this->button_equad->UseVisualStyleBackColor = false;
			this->button_equad->Click += gcnew System::EventHandler(this, &MyForm::button_equad_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::Gray;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(216, 501);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(85, 75);
			this->button_dot->TabIndex = 20;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(12, 501);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(186, 75);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(415, 611);
			this->Controls->Add(this->button_equad);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button_mines);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button_multiplicate);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_minus_plus);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->label_res);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator is 300 bucks";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			this->label_res->ForeColor = Color::White;
			Button^ button = safe_cast<Button^>(sender);

			if (this->label_res->Text == "0" || is_equal) {
				this->label_res->Text = button->Text;
				is_equal = false;
			}
			else {
				this->label_res->Text = this->label_res->Text + button->Text;
			}
		}
						
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void button_mines_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void button_multiplicate_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

		private: System::Void math_action(char action) {
			this->first_num = System::Convert::ToDouble(this->label_res->Text);
			this->user_action = action;
			this->label_res->Text = "0";
		}
	private: System::Void button_equad_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		
		float second = System::Convert::ToDouble(this->label_res->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if(second == 0) {
				res = 0;
				this->label_res->ForeColor = Color::Red;
				MessageBox::Show(this, "Дія ділення на 0 заборонена", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
			res = this->first_num / second;
			break;
			}
		}
		this->is_equal = true;
		this->label_res->Text = System::Convert::ToString(res);
	}
		private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
			this->label_res->Text = "0";
			this->label_res->ForeColor = Color::White;
			this->first_num = 0;
			this->user_action = ' ';
			is_equal = false;
		}
		private: System::Void button_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
			float num = System::Convert::ToDouble(this->label_res->Text);
			num *= -1;
			this->label_res->Text = System::Convert::ToString(num);
		}
		private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('%');
		}
	private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->label_res->Text;
		if (!text->Contains(",")) {
			this->label_res->Text = text + ",";
		}
	}
};
}
