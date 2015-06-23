#pragma once

namespace SlowMoCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  aboutLabel;
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
			this->aboutLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// aboutLabel
			// 
			this->aboutLabel->AutoSize = true;
			this->aboutLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->aboutLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->aboutLabel->Location = System::Drawing::Point(33, 45);
			this->aboutLabel->Name = L"aboutLabel";
			this->aboutLabel->Size = System::Drawing::Size(238, 24);
			this->aboutLabel->TabIndex = 1;
			this->aboutLabel->Text = L"GoPro SlowMoCreator v0.5";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 140);
			this->Controls->Add(this->aboutLabel);
			this->Name = L"AboutForm";
			this->Text = L"About GoPro SlowMoCreator ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
