#pragma once
#include "Recursividad.h"

namespace Lab1JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonmulti;
	private: System::Windows::Forms::Label^ labelmulti;
	private: System::Windows::Forms::TextBox^ textBoxsegun;
	private: System::Windows::Forms::TextBox^ textBoxprimer;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonVeri;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxPal;
	private: System::Windows::Forms::Label^ labelveri;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ labelTransformado;
	private: System::Windows::Forms::Button^ ButtonDecimal;
	private: System::Windows::Forms::TextBox^ textBoxBi;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxBo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonCambio;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxBf;
	private: System::Windows::Forms::TextBox^ textBoxNuma;
	private: System::Windows::Forms::Label^ labelDecimaltrans;
	private: System::Windows::Forms::Label^ labelRespuesta;
	private: System::Windows::Forms::Button^ button3;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->labelTransformado = (gcnew System::Windows::Forms::Label());
			this->ButtonDecimal = (gcnew System::Windows::Forms::Button());
			this->textBoxBi = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->buttonmulti = (gcnew System::Windows::Forms::Button());
			this->labelmulti = (gcnew System::Windows::Forms::Label());
			this->textBoxsegun = (gcnew System::Windows::Forms::TextBox());
			this->textBoxprimer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->labelveri = (gcnew System::Windows::Forms::Label());
			this->buttonVeri = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxPal = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->labelRespuesta = (gcnew System::Windows::Forms::Label());
			this->labelDecimaltrans = (gcnew System::Windows::Forms::Label());
			this->buttonCambio = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxBf = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNuma = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxBo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(396, 237);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(388, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Fibonacci";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(279, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese La posicion de la secuencia Fibonacci que desea:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(388, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Factorial";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ingrese el factorial que desea ver";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->labelTransformado);
			this->tabPage3->Controls->Add(this->ButtonDecimal);
			this->tabPage3->Controls->Add(this->textBoxBi);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(388, 211);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Binario";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// labelTransformado
			// 
			this->labelTransformado->AutoSize = true;
			this->labelTransformado->Location = System::Drawing::Point(12, 92);
			this->labelTransformado->Name = L"labelTransformado";
			this->labelTransformado->Size = System::Drawing::Size(0, 13);
			this->labelTransformado->TabIndex = 3;
			// 
			// ButtonDecimal
			// 
			this->ButtonDecimal->Location = System::Drawing::Point(15, 52);
			this->ButtonDecimal->Name = L"ButtonDecimal";
			this->ButtonDecimal->Size = System::Drawing::Size(75, 23);
			this->ButtonDecimal->TabIndex = 2;
			this->ButtonDecimal->Text = L"Pasar";
			this->ButtonDecimal->UseVisualStyleBackColor = true;
			this->ButtonDecimal->Click += gcnew System::EventHandler(this, &MyForm::ButtonDecimal_Click);
			// 
			// textBoxBi
			// 
			this->textBoxBi->Location = System::Drawing::Point(15, 26);
			this->textBoxBi->Name = L"textBoxBi";
			this->textBoxBi->Size = System::Drawing::Size(137, 20);
			this->textBoxBi->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ingrese el numero en binario";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::Label8_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->buttonmulti);
			this->tabPage4->Controls->Add(this->labelmulti);
			this->tabPage4->Controls->Add(this->textBoxsegun);
			this->tabPage4->Controls->Add(this->textBoxprimer);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(388, 211);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Multiplicacion";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// buttonmulti
			// 
			this->buttonmulti->Location = System::Drawing::Point(184, 47);
			this->buttonmulti->Name = L"buttonmulti";
			this->buttonmulti->Size = System::Drawing::Size(75, 23);
			this->buttonmulti->TabIndex = 5;
			this->buttonmulti->Text = L"calcular";
			this->buttonmulti->UseVisualStyleBackColor = true;
			this->buttonmulti->Click += gcnew System::EventHandler(this, &MyForm::Buttonmulti_Click);
			// 
			// labelmulti
			// 
			this->labelmulti->AutoSize = true;
			this->labelmulti->Location = System::Drawing::Point(12, 113);
			this->labelmulti->Name = L"labelmulti";
			this->labelmulti->Size = System::Drawing::Size(0, 13);
			this->labelmulti->TabIndex = 4;
			// 
			// textBoxsegun
			// 
			this->textBoxsegun->Location = System::Drawing::Point(15, 73);
			this->textBoxsegun->Name = L"textBoxsegun";
			this->textBoxsegun->Size = System::Drawing::Size(100, 20);
			this->textBoxsegun->TabIndex = 3;
			// 
			// textBoxprimer
			// 
			this->textBoxprimer->Location = System::Drawing::Point(15, 31);
			this->textBoxprimer->Name = L"textBoxprimer";
			this->textBoxprimer->Size = System::Drawing::Size(100, 20);
			this->textBoxprimer->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Ingrese el segundo numero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ingrese el primer numero:";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->labelveri);
			this->tabPage5->Controls->Add(this->buttonVeri);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->textBoxPal);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(388, 211);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Palindromo";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// labelveri
			// 
			this->labelveri->AutoSize = true;
			this->labelveri->Location = System::Drawing::Point(20, 84);
			this->labelveri->Name = L"labelveri";
			this->labelveri->Size = System::Drawing::Size(0, 13);
			this->labelveri->TabIndex = 3;
			// 
			// buttonVeri
			// 
			this->buttonVeri->Location = System::Drawing::Point(23, 48);
			this->buttonVeri->Name = L"buttonVeri";
			this->buttonVeri->Size = System::Drawing::Size(75, 23);
			this->buttonVeri->TabIndex = 2;
			this->buttonVeri->Text = L"Verificar";
			this->buttonVeri->UseVisualStyleBackColor = true;
			this->buttonVeri->Click += gcnew System::EventHandler(this, &MyForm::ButtonVeri_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Palabra";
			// 
			// textBoxPal
			// 
			this->textBoxPal->Location = System::Drawing::Point(23, 22);
			this->textBoxPal->Name = L"textBoxPal";
			this->textBoxPal->Size = System::Drawing::Size(100, 20);
			this->textBoxPal->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->labelRespuesta);
			this->tabPage6->Controls->Add(this->labelDecimaltrans);
			this->tabPage6->Controls->Add(this->buttonCambio);
			this->tabPage6->Controls->Add(this->label11);
			this->tabPage6->Controls->Add(this->textBoxBf);
			this->tabPage6->Controls->Add(this->textBoxNuma);
			this->tabPage6->Controls->Add(this->label10);
			this->tabPage6->Controls->Add(this->textBoxBo);
			this->tabPage6->Controls->Add(this->label9);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(388, 211);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Cambiodebase";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// labelRespuesta
			// 
			this->labelRespuesta->AutoSize = true;
			this->labelRespuesta->Location = System::Drawing::Point(279, 127);
			this->labelRespuesta->Name = L"labelRespuesta";
			this->labelRespuesta->Size = System::Drawing::Size(0, 13);
			this->labelRespuesta->TabIndex = 8;
			// 
			// labelDecimaltrans
			// 
			this->labelDecimaltrans->AutoSize = true;
			this->labelDecimaltrans->Location = System::Drawing::Point(279, 48);
			this->labelDecimaltrans->Name = L"labelDecimaltrans";
			this->labelDecimaltrans->Size = System::Drawing::Size(0, 13);
			this->labelDecimaltrans->TabIndex = 7;
			// 
			// buttonCambio
			// 
			this->buttonCambio->Location = System::Drawing::Point(182, 92);
			this->buttonCambio->Name = L"buttonCambio";
			this->buttonCambio->Size = System::Drawing::Size(75, 23);
			this->buttonCambio->TabIndex = 6;
			this->buttonCambio->Text = L"Transformar";
			this->buttonCambio->UseVisualStyleBackColor = true;
			this->buttonCambio->Click += gcnew System::EventHandler(this, &MyForm::ButtonCambio_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 127);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Base Destino";
			// 
			// textBoxBf
			// 
			this->textBoxBf->Location = System::Drawing::Point(16, 143);
			this->textBoxBf->Name = L"textBoxBf";
			this->textBoxBf->Size = System::Drawing::Size(100, 20);
			this->textBoxBf->TabIndex = 4;
			// 
			// textBoxNuma
			// 
			this->textBoxNuma->Location = System::Drawing::Point(16, 92);
			this->textBoxNuma->Name = L"textBoxNuma";
			this->textBoxNuma->Size = System::Drawing::Size(100, 20);
			this->textBoxNuma->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Numero";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::Label10_Click);
			// 
			// textBoxBo
			// 
			this->textBoxBo->Location = System::Drawing::Point(16, 31);
			this->textBoxBo->Name = L"textBoxBo";
			this->textBoxBo->Size = System::Drawing::Size(100, 20);
			this->textBoxBo->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Base original";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(218, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Archivo Binario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 261);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Recursividad Objeto;
		label2->Text = Convert::ToString(Objeto.Fibonacci(int::Parse(textBox1->Text)));
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursividad Objeto;
	label4->Text = Convert::ToString(Objeto.Factorial(int::Parse(textBox2->Text)));
}
private: System::Void Buttonmulti_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursividad Objeto;
	labelmulti->Text = Convert::ToString(Objeto.Multiplicacion(int::Parse(textBoxprimer->Text), int::Parse(textBoxsegun->Text)));

}
private: System::Void ButtonVeri_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursividad Objeto;
	labelveri->Text = Convert::ToString(Objeto.Palabraspalindromas(textBoxPal->Text,0,false));
}
private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursividad Objeto;
	labelTransformado->Text = System::Convert::ToString(Objeto.binario(textBoxBi->Text,0,0));
}
private: System::Void Label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonCambio_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursividad Objeto;
	int numdec = Objeto.basea(Convert::ToInt32(textBoxBo->Text), textBoxNuma->Text, 0, 0);
	labelDecimaltrans ->Text = Convert::ToString(numdec);
	System::String^ Destino;
	labelRespuesta->Text = Objeto.abase(Convert::ToInt32(textBoxBf->Text), numdec, Destino);


}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ ruta = "..//Binario.txt";
	Recursividad Objeto;
	Objeto.Binarioarchivo(ruta);
}
};
}
