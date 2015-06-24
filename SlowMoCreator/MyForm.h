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
#include <vcclr.h>

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
using namespace Runtime::InteropServices;
 

namespace SlowMoCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// (c)  Zoubir AMEUR
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
	private: System::Windows::Forms::SaveFileDialog^  saveVideoDialog;

	private: System::Windows::Forms::Button^  saveVideo_button;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TrackBar^  fps_trackBar;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  cancel_button;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;




	private: System::ComponentModel::IContainer^  components;

		 
#pragma endregion


	 

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
			this->saveVideoDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveVideo_button = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->fps_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fps_trackBar))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// CreateSlowMo_button
			// 
			this->CreateSlowMo_button->Enabled = false;
			this->CreateSlowMo_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CreateSlowMo_button.Image")));
			this->CreateSlowMo_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CreateSlowMo_button->Location = System::Drawing::Point(165, 311);
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
			this->fps_Label->Size = System::Drawing::Size(66, 13);
			this->fps_Label->TabIndex = 1;
			this->fps_Label->Text = L"Frames/sec:";
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
			this->menuStrip1->Size = System::Drawing::Size(856, 24);
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
			this->panel1->Location = System::Drawing::Point(390, 77);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(218, 189);
			this->panel1->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(404, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Video\'s infos";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(27, 373);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(562, 26);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 15;
			// 
			// open_button
			// 
			this->open_button->Location = System::Drawing::Point(457, 311);
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
			this->statusStrip1->Location = System::Drawing::Point(0, 513);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(856, 22);
			this->statusStrip1->TabIndex = 17;
			this->statusStrip1->Text = L"Ready";
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
			this->openVideoDialog->Filter = L"\"Video GoPro .mp4|*.mp4|All Files|*.*\"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(361, 408);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(454, 27);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// saveVideoDialog
			// 
			this->saveVideoDialog->DefaultExt = L"avi";
			this->saveVideoDialog->FileName = L"MySlowMo";
			this->saveVideoDialog->Title = L"Save SlowMo Video";
			// 
			// saveVideo_button
			// 
			this->saveVideo_button->Enabled = false;
			this->saveVideo_button->Location = System::Drawing::Point(316, 311);
			this->saveVideo_button->Name = L"saveVideo_button";
			this->saveVideo_button->Size = System::Drawing::Size(117, 42);
			this->saveVideo_button->TabIndex = 19;
			this->saveVideo_button->Text = L"Destination File";
			this->saveVideo_button->UseVisualStyleBackColor = true;
			this->saveVideo_button->Click += gcnew System::EventHandler(this, &MyForm::saveFile_button_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(649, 373);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(166, 29);
			this->richTextBox2->TabIndex = 20;
			this->richTextBox2->Text = L"";
			// 
			// fps_trackBar
			// 
			this->fps_trackBar->Enabled = false;
			this->fps_trackBar->Location = System::Drawing::Point(29, 43);
			this->fps_trackBar->Maximum = 25;
			this->fps_trackBar->Minimum = 10;
			this->fps_trackBar->Name = L"fps_trackBar";
			this->fps_trackBar->Size = System::Drawing::Size(197, 45);
			this->fps_trackBar->TabIndex = 21;
			this->fps_trackBar->Value = 25;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->fps_trackBar);
			this->panel2->Location = System::Drawing::Point(71, 94);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 100);
			this->panel2->TabIndex = 22;
			// 
			// cancel_button
			// 
			this->cancel_button->Enabled = false;
			this->cancel_button->Location = System::Drawing::Point(27, 311);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(132, 42);
			this->cancel_button->TabIndex = 23;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &MyForm::cancel_button_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &MyForm::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker1_RunWorkerCompleted);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(678, 212);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(109, 54);
			this->richTextBox3->TabIndex = 24;
			this->richTextBox3->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 535);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->saveVideo_button);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fps_trackBar))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
				

		// Global Variables

		System::String^  videoToOpenName;
		System::String^  videoToSaveName;
		
		//std::string vidName ;

	  
#pragma endregion

		  //  A method to Convert from String^ to std::string

		void MarshalString(System::String ^ s, string& os) {
			const char* chars =	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}



	private: System::Void CreateSlowMo_Click(System::Object^  sender, System::EventArgs^  e) {

		 

		VideoCapture inputVideo(videoToOpenNameStr);
		if (!inputVideo.isOpened()) {
			MessageBox::Show(L"Error Video file"); 
		}

	 	
		fps =   int(inputVideo.get(CAP_PROP_FPS)); // get the frame rate of the video
		frames_number = int(inputVideo.get(CAP_PROP_FRAME_COUNT));	   // get the total frames in the video
	    resolution = cv::Size((int)inputVideo.get(CAP_PROP_FRAME_WIDTH), (int)inputVideo.get(CAP_PROP_FRAME_HEIGHT)); // get the resolution
	 
		this->progressBar1->Maximum = frames_number;	  // Initilize the progress bar's maximum to the number of frames
				
		outputVideo.open(name, CV_FOURCC('M', 'J', 'P', 'G'), fps_wanted, resolution, true);  // Create an output video named "Name
		
		
		
		if (outputVideo.isOpened())
		{

			CreateSlowMo_button->Enabled = false;
			this->open_button->Enabled = false;
			this->cancel_button->Enabled = true;
			this->saveVideo_button->Enabled = false;
			this->toolStripStatusLabel1->Text = "Creating SloMo";

			backgroundWorker1->RunWorkerAsync(1);	   // Delegating the blocking operations to the background worker
		     
			
			 /* ---------------------------  Converting   to selected fps by track bar  ---------------------------
			  for (int i = 0; i < frames_number; i++) 
				{
					inputVideo >> source; // read frame

					//this->progressBar1->Increment(1);
					this->progressBar1->Value = i;  
					if (cancel) {
						break;
						CreateSlowMo_button->Enabled = true;
					}

					if (source.empty()) {
						break;
						CreateSlowMo_button->Enabled = true;
					}
					outputVideo << source;
				}
				---------------------------------------------------------------------------------*/ 
   		}

		else {
			MessageBox::Show(L"Error creating the video");
			CreateSlowMo_button->Enabled = true;
		}

 		
 	}

		 

#pragma region  "Display Video data on the interface " 

			  
	 
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	 
	   if (videoOpen) {
		totalFrames_textBox->Text = Convert::ToString(frames_number);	// Display the total frames of the video
		fps_textBox->Text = Convert::ToString(fps);
		height_textBox->Text = Convert::ToString(resolution.height);
		width_textBox->Text = Convert::ToString(resolution.width);

	}
	
	 
	
	
		 
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

	// Convert the videoToOpen name from the dialog in Strong^ format and convert it to std::string	to be read by cv:: methods
	MarshalString(videoToOpenName, videoToOpenNameStr);

    // Verify if the video is MP4
	string::size_type pointAt = videoToOpenNameStr.find_last_of('.'); // find the extension point
	//std::string extension = videoToOpenNameStr.substr(pointAt, (videoToOpenNameStr.length()-1)) + "GoPro" + ".avi";
	std::string extension = videoToOpenNameStr.substr(pointAt, (videoToOpenNameStr.length() - 1));

	System::String^ extensionStr = gcnew System::String(extension.c_str());  // Convert the std:string to String^ to display it

	 
	this->richTextBox2->Text = extensionStr;

	if (extension != ".mp4" && extension != ".MP4"){
		MessageBox::Show(L"Please, select an 'MP4' video");
	}
	else {
		
		this->saveVideo_button->Enabled = true;
		videoOpen = true;
		this->fps_trackBar->Enabled = true;
		fps_wanted = fps_trackBar->Value;
	}
	

	//string::size_type pointAt = videoToOpenNameStr.find_last_of('.'); // find the extension point
	//name = videoToOpenNameStr.substr(pointAt, pAt) + "GoPro" + ".avi";

}




private: System::Void saveFile_button_Click(System::Object^  sender, System::EventArgs^  e) {

	//MessageBox::Show(L"Please Choose a Path to save the video");
	this->saveVideoDialog->Title = "Select where to save your SlowMo video";
	System::Windows::Forms::DialogResult result = this->saveVideoDialog->ShowDialog();

	 
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		videoToSaveName = saveVideoDialog->FileName;
		 
		if (File::Exists(videoToSaveName))  {
			MessageBox::Show(L"Error! A file with the same name exists. Please, change the file's name");

		}
		else {

			MarshalString(videoToSaveName, name);
			this->CreateSlowMo_button->Enabled = true;
		}
		    
	}
	 
}



private: System::Void cancel_button_Click(System::Object^  sender, System::EventArgs^  e) {
	cancel = true;
	backgroundWorker1->CancelAsync();
}


 //*****************************************************
 //						DO WORK
 //*****************************************************

private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	
	//////////////////// Converting to selected fps by track bar   ///////////////////
	
	for (i = 0; i < frames_number; i++)
	{
		inputVideo >> source; // read frame

		//this->progressBar1->Value = i;
		progress = System::Convert::ToInt32((100*(i / frames_number)));
		backgroundWorker1->ReportProgress(progress); // report progress to the backgroud worker in order to update the UI
		 
		 
		if (backgroundWorker1->CancellationPending) {	// check if the User clicked on "Cancel"
			e->Cancel = true;
			break;	  // Stop the convertion
		}
		if (source.empty()) {
			break;
			//	CreateSlowMo_button->Enabled = true;
		}
		outputVideo << source;

		/*
			if (cancel) 
			{
			break;
			CreateSlowMo_button->Enabled = true;
			}
		*/	  
		
	}

	//backgroundWorker1->ReportProgress(100);
	backgroundWorker1->ReportProgress(100);
	//e->Result;			 // WAY TO GO TOMOORW


	//////////////////////////////////////////////////////////// 


}


private: System::Void backgroundWorker1_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	
	this->progressBar1->Value = e->ProgressPercentage;

	toolStripStatusLabel1->Text = "Processing..." + progressBar1->Value.ToString() + "%";
	richTextBox3->Text = e->ProgressPercentage.ToString();

	/*
	   totalFrames_textBox->Text = Convert::ToString(frames_number);	// Display the total frames of the video
	fps_textBox->Text = Convert::ToString(fps);						// Display the fpss of the video
	height_textBox->Text = Convert::ToString(resolution.height);    // Display the height the video
	width_textBox->Text = Convert::ToString(resolution.width);	    // Display the  width of the video
	*/
	
}



private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
	 // in case the background process is finished with a cancel
	if (e->Cancelled) 
	{
		toolStripStatusLabel1->Text = "Task Cancelled";
	}

	// check if an error occurred in the backgroud process

	else if (e->Error != nullptr)
	{ 
		toolStripStatusLabel1->Text = "Error while creating the SlowMo";

	}
	else 
	{	// task completed normally
		toolStripStatusLabel1->Text = "SlowMo Created successfully!";
		this->cancel_button->Enabled = false;
		MessageBox::Show(L"Finished creating the sloMo");
		this->toolStripStatusLabel1->Text = "Done";
		CreateSlowMo_button->Enabled = true;   	
		 
		

	}

	



}



};
}
