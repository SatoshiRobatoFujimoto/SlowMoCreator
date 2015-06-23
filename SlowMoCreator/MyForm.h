/*

SlowMo Creator v0.5
by: Zoubir AMEUR


*/

#pragma once

#include "AboutForm.h"


#include "variables.h"
#include "stdafx.h"
#include "math.h"
#include "variables.h"
#include "math.h"
#include <stdio.h>
#include <time.h>	  
#include <iostream>
#include <vector>
#include <random>
#include <functional>  
#include <algorithm>   
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <String.h>
#include <string>
#include <iostream>
#include <convert_system_string.cpp>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#using <system.dll>	
using namespace Threading ;
using namespace System;
using namespace cv;
using namespace std;

using namespace System::Reflection;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO::Ports;
using namespace System::IO;
using System::IO::File;
using System::Runtime::InteropServices::Marshal;
 
 
 




namespace SlowMoCreator {

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

#pragma region  "Declaring Controls " 


	private: System::Windows::Forms::Button^  CreateSlowMo_button;
	 

	private: System::Windows::Forms::Label^  fps_Label;

	private: System::Windows::Forms::Label^  totalFrames_Label;
	private: System::Windows::Forms::TextBox^  totalFrames_textBox;
	private: System::Windows::Forms::TextBox^  fps_textBox;

	private: System::Windows::Forms::TextBox^  width_textBox;
	private: System::Windows::Forms::TextBox^  height_textBox;
	private: System::Windows::Forms::Label^  width_label;
	private: System::Windows::Forms::Label^  height_label;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fichierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  takeASlowMoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  makeASlowMoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  open_button;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::OpenFileDialog^  openVideoDialog;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::ComponentModel::IContainer^  components;

		 
#pragma endregion


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->CreateSlowMo_button = (gcnew System::Windows::Forms::Button());
			this->fps_Label = (gcnew System::Windows::Forms::Label());
			this->totalFrames_Label = (gcnew System::Windows::Forms::Label());
			this->totalFrames_textBox = (gcnew System::Windows::Forms::TextBox());
			this->fps_textBox = (gcnew System::Windows::Forms::TextBox());
			this->width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->height_textBox = (gcnew System::Windows::Forms::TextBox());
			this->width_label = (gcnew System::Windows::Forms::Label());
			this->height_label = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->takeASlowMoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeASlowMoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->open_button = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openVideoDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// CreateSlowMo_button
			// 
			this->CreateSlowMo_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CreateSlowMo_button.Image")));
			this->CreateSlowMo_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CreateSlowMo_button->Location = System::Drawing::Point(29, 295);
			this->CreateSlowMo_button->Name = L"CreateSlowMo_button";
			this->CreateSlowMo_button->Size = System::Drawing::Size(132, 42);
			this->CreateSlowMo_button->TabIndex = 0;
			this->CreateSlowMo_button->Text = L"Create SlowMo";
			this->CreateSlowMo_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->CreateSlowMo_button->UseVisualStyleBackColor = true;
			this->CreateSlowMo_button->Click += gcnew System::EventHandler(this, &MyForm::CreateSlowMo_Click);
			// 
			// fps_Label
			// 
			this->fps_Label->AutoSize = true;
			this->fps_Label->Location = System::Drawing::Point(22, 28);
			this->fps_Label->Name = L"fps_Label";
			this->fps_Label->Size = System::Drawing::Size(61, 13);
			this->fps_Label->TabIndex = 1;
			this->fps_Label->Text = L"Frame/sec:";
			// 
			// totalFrames_Label
			// 
			this->totalFrames_Label->AutoSize = true;
			this->totalFrames_Label->Location = System::Drawing::Point(13, 62);
			this->totalFrames_Label->Name = L"totalFrames_Label";
			this->totalFrames_Label->Size = System::Drawing::Size(73, 13);
			this->totalFrames_Label->TabIndex = 4;
			this->totalFrames_Label->Text = L"Total Frames:";
			// 
			// totalFrames_textBox
			// 
			this->totalFrames_textBox->Location = System::Drawing::Point(98, 59);
			this->totalFrames_textBox->Name = L"totalFrames_textBox";
			this->totalFrames_textBox->Size = System::Drawing::Size(100, 20);
			this->totalFrames_textBox->TabIndex = 5;
			// 
			// fps_textBox
			// 
			this->fps_textBox->Location = System::Drawing::Point(98, 28);
			this->fps_textBox->Name = L"fps_textBox";
			this->fps_textBox->Size = System::Drawing::Size(100, 20);
			this->fps_textBox->TabIndex = 6;
			// 
			// width_textBox
			// 
			this->width_textBox->Location = System::Drawing::Point(98, 97);
			this->width_textBox->Name = L"width_textBox";
			this->width_textBox->Size = System::Drawing::Size(100, 20);
			this->width_textBox->TabIndex = 8;
			// 
			// height_textBox
			// 
			this->height_textBox->Location = System::Drawing::Point(98, 131);
			this->height_textBox->Name = L"height_textBox";
			this->height_textBox->Size = System::Drawing::Size(100, 20);
			this->height_textBox->TabIndex = 9;
			// 
			// width_label
			// 
			this->width_label->AutoSize = true;
			this->width_label->Location = System::Drawing::Point(48, 104);
			this->width_label->Name = L"width_label";
			this->width_label->Size = System::Drawing::Size(35, 13);
			this->width_label->TabIndex = 10;
			this->width_label->Text = L"Width";
			// 
			// height_label
			// 
			this->height_label->AutoSize = true;
			this->height_label->Location = System::Drawing::Point(45, 134);
			this->height_label->Name = L"height_label";
			this->height_label->Size = System::Drawing::Size(38, 13);
			this->height_label->TabIndex = 11;
			this->height_label->Text = L"Height";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fichierToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(746, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichierToolStripMenuItem
			// 
			this->fichierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->takeASlowMoToolStripMenuItem,
					this->makeASlowMoToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fichierToolStripMenuItem->Name = L"fichierToolStripMenuItem";
			this->fichierToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fichierToolStripMenuItem->Text = L"File";
			// 
			// takeASlowMoToolStripMenuItem
			// 
			this->takeASlowMoToolStripMenuItem->Name = L"takeASlowMoToolStripMenuItem";
			this->takeASlowMoToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->takeASlowMoToolStripMenuItem->Text = L"Take a SlowMo";
			// 
			// makeASlowMoToolStripMenuItem
			// 
			this->makeASlowMoToolStripMenuItem->Name = L"makeASlowMoToolStripMenuItem";
			this->makeASlowMoToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->makeASlowMoToolStripMenuItem->Text = L"Make a SlowMo...";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->aboutToolStripMenuItem->Text = L"about...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->fps_textBox);
			this->panel1->Controls->Add(this->height_label);
			this->panel1->Controls->Add(this->fps_Label);
			this->panel1->Controls->Add(this->width_label);
			this->panel1->Controls->Add(this->totalFrames_Label);
			this->panel1->Controls->Add(this->height_textBox);
			this->panel1->Controls->Add(this->totalFrames_textBox);
			this->panel1->Controls->Add(this->width_textBox);
			this->panel1->Location = System::Drawing::Point(239, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(218, 189);
			this->panel1->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(253, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Video\'s infos";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(50, 470);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(684, 18);
			this->progressBar1->TabIndex = 15;
			// 
			// open_button
			// 
			this->open_button->Location = System::Drawing::Point(277, 295);
			this->open_button->Name = L"open_button";
			this->open_button->Size = System::Drawing::Size(132, 42);
			this->open_button->TabIndex = 16;
			this->open_button->Text = L"Open";
			this->open_button->UseVisualStyleBackColor = true;
			this->open_button->Click += gcnew System::EventHandler(this, &MyForm::open_button_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 466);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(746, 22);
			this->statusStrip1->TabIndex = 17;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel1->Text = L"Ready";
			// 
			// openVideoDialog
			// 
			this->openVideoDialog->FileName = L"GoPro.mp4";
			this->openVideoDialog->Filter = L"\"Fichiers d\'aquisition .mp4|*.mp4|All Files|*.*\"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(29, 353);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(454, 27);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 488);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->open_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->CreateSlowMo_button);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"GoPro SlowMoCreator v0.5";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
				

		// Global Variables

		System::String^  videoToOpenName;
		
		//std::string vidName ;

	  
#pragma endregion



		void MarshalString(System::String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}



	private: System::Void CreateSlowMo_Click(System::Object^  sender, System::EventArgs^  e) {

	   	
		std::string videoToOpenNameStr;
		MarshalString(videoToOpenName, videoToOpenNameStr);
	    //VideoCapture inputVideo("GoPro.mp4");

		VideoCapture inputVideo(videoToOpenNameStr);
		 


		if (!inputVideo.isOpened()) {
			MessageBox::Show(L"Error video name"); 

		}

		fps =   int(inputVideo.get(CAP_PROP_FPS)); // get the frame rate of the vodep
		frames_number = int(inputVideo.get(CAP_PROP_FRAME_COUNT));	   // get the total frames in the video
	    resolution = cv::Size((int)inputVideo.get(CAP_PROP_FRAME_WIDTH), (int)inputVideo.get(CAP_PROP_FRAME_HEIGHT)); // get the resolution
	 	
		this->progressBar1->Maximum = frames_number;
		
	
		/*
		   System::String^ totalFrames_text;  
		System::String^  fps_text;
		System::String^  height_text;
		System::String^  width_text;
  		totalFrames_text  = Convert::ToString(frames_number);	 
		fps_text = Convert::ToString(fps);
		height_text  = Convert::ToString(resolution.height);
		width_text  = Convert::ToString(resolution.width);
		
		
		*/
		
	    
		
	   
		 

		outputVideo.open(name, CV_FOURCC('M', 'J', 'P', 'G'), 25, resolution, true);


		if (outputVideo.isOpened()) {

			CreateSlowMo_button->Enabled = false;
			this->toolStripStatusLabel1->Text = "Creating SloMo";
			  Thread::Sleep (1000);
			
			// Converting from 240fps to 25fps //////////////////////////

			 
			for (int i = 0; i < frames_number; i++) 
			{
				inputVideo >> source; // read frame

				this->progressBar1->Increment(1);
				if (source.empty()) {
					break;
					CreateSlowMo_button->Enabled = true;
				}
				outputVideo << source;
			}
			//////////////////////////////////////////////////////////// 

		}
		else {
			MessageBox::Show(L"Error creating the video");
			CreateSlowMo_button->Enabled = true;
		}
			 
		MessageBox::Show(L"Finished creating the sloMo");
		this->toolStripStatusLabel1->Text = "Done";
  		CreateSlowMo_button->Enabled = true;
		 
	    	  

	}

				   




#pragma region  "Display Video data on the interface " 

			  
	 
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	 
	totalFrames_textBox->Text = Convert::ToString(frames_number);	// Display the total frames of the video
	fps_textBox->Text = Convert::ToString(fps);
	height_textBox->Text = Convert::ToString(resolution.height);
	width_textBox->Text = Convert::ToString(resolution.width);	 
}



#pragma endregion

	



#pragma region  "Launch About Form " 
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 
	// Launch the about Form
	AboutForm^ aboutBox = gcnew AboutForm();
	aboutBox->ShowDialog();
	this->aboutToolStripMenuItem->Text = "à propos";
}


#pragma endregion	



private: System::Void open_button_Click(System::Object^  sender, System::EventArgs^  e) {




	this->openVideoDialog->RestoreDirectory = true;		 // keep the dialog on the last opened directory
	this->openVideoDialog->Title = "Open Video File...";   // Rename the Open Video Dialog 
	Windows::Forms::DialogResult result = this->openVideoDialog->ShowDialog();	   // Show the dialog and get the reasult 
	this->richTextBox1->Text = openVideoDialog->FileName;

	videoToOpenName = openVideoDialog->FileName;
	 

	 





}
};
}
