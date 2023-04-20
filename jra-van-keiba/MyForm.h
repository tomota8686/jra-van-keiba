#pragma once

namespace jravankeiba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxJVDTLabLib::AxJVLink^ axJVLink1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuConfig;
	private: System::Windows::Forms::ToolStripMenuItem^ menuConfJV;

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->axJVLink1 = (gcnew AxJVDTLabLib::AxJVLink());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuConfig = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuConfJV = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axJVLink1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// axJVLink1
			// 
			this->axJVLink1->Enabled = true;
			this->axJVLink1->Location = System::Drawing::Point(83, 68);
			this->axJVLink1->Name = L"axJVLink1";
			this->axJVLink1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axJVLink1.OcxState")));
			this->axJVLink1->Size = System::Drawing::Size(192, 192);
			this->axJVLink1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuConfig });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(280, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuConfig
			// 
			this->menuConfig->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuConfJV });
			this->menuConfig->Name = L"menuConfig";
			this->menuConfig->Size = System::Drawing::Size(58, 20);
			this->menuConfig->Text = L"設定(&C)";
			// 
			// menuConfJV
			// 
			this->menuConfJV->Name = L"menuConfJV";
			this->menuConfJV->Size = System::Drawing::Size(180, 22);
			this->menuConfJV->Text = L"JV-Link の設定(&J)...";
			this->menuConfJV->Click += gcnew System::EventHandler(this, &MyForm::menuConfJV_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 292);
			this->Controls->Add(this->axJVLink1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axJVLink1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuConfJV_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

		}
		catch (Exception *e) {

		}
	}
};
}
