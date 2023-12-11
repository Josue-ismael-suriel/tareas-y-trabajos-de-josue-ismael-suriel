namespace Calculadora_josue
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.resultado = new System.Windows.Forms.TextBox();
            this.ptnuno = new System.Windows.Forms.Button();
            this.ptndos = new System.Windows.Forms.Button();
            this.ptnsinco = new System.Windows.Forms.Button();
            this.ptncuatro = new System.Windows.Forms.Button();
            this.ptntres = new System.Windows.Forms.Button();
            this.ptnseis = new System.Windows.Forms.Button();
            this.ptnnueve = new System.Windows.Forms.Button();
            this.ptnocho = new System.Windows.Forms.Button();
            this.ptnsiete = new System.Windows.Forms.Button();
            this.ptnquitar = new System.Windows.Forms.Button();
            this.ptnborrartodo = new System.Windows.Forms.Button();
            this.ptnborrar = new System.Windows.Forms.Button();
            this.ptncuadrado = new System.Windows.Forms.Button();
            this.ptnraizcuadrada = new System.Windows.Forms.Button();
            this.multiplicar = new System.Windows.Forms.Button();
            this.ptndivide = new System.Windows.Forms.Button();
            this.ptnresta = new System.Windows.Forms.Button();
            this.ptnsuma = new System.Windows.Forms.Button();
            this.ptnresultado = new System.Windows.Forms.Button();
            this.ptnpunto = new System.Windows.Forms.Button();
            this.ptncero = new System.Windows.Forms.Button();
            this.ptnsigno = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // resultado
            // 
            this.resultado.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.resultado.Location = new System.Drawing.Point(3, 1);
            this.resultado.MaxLength = 21;
            this.resultado.Multiline = true;
            this.resultado.Name = "resultado";
            this.resultado.ReadOnly = true;
            this.resultado.Size = new System.Drawing.Size(366, 48);
            this.resultado.TabIndex = 0;
            this.resultado.Text = "0";
            this.resultado.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // ptnuno
            // 
            this.ptnuno.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnuno.Location = new System.Drawing.Point(2, 212);
            this.ptnuno.Name = "ptnuno";
            this.ptnuno.Size = new System.Drawing.Size(45, 45);
            this.ptnuno.TabIndex = 1;
            this.ptnuno.Text = "1";
            this.ptnuno.UseVisualStyleBackColor = true;
            this.ptnuno.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptndos
            // 
            this.ptndos.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptndos.Location = new System.Drawing.Point(53, 212);
            this.ptndos.Name = "ptndos";
            this.ptndos.Size = new System.Drawing.Size(45, 45);
            this.ptndos.TabIndex = 2;
            this.ptndos.Text = "2";
            this.ptndos.UseVisualStyleBackColor = true;
            this.ptndos.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnsinco
            // 
            this.ptnsinco.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnsinco.Location = new System.Drawing.Point(53, 161);
            this.ptnsinco.Name = "ptnsinco";
            this.ptnsinco.Size = new System.Drawing.Size(45, 45);
            this.ptnsinco.TabIndex = 4;
            this.ptnsinco.Text = "5";
            this.ptnsinco.UseVisualStyleBackColor = true;
            this.ptnsinco.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptncuatro
            // 
            this.ptncuatro.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptncuatro.Location = new System.Drawing.Point(2, 161);
            this.ptncuatro.Name = "ptncuatro";
            this.ptncuatro.Size = new System.Drawing.Size(45, 45);
            this.ptncuatro.TabIndex = 3;
            this.ptncuatro.Text = "4";
            this.ptncuatro.UseVisualStyleBackColor = true;
            this.ptncuatro.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptntres
            // 
            this.ptntres.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptntres.Location = new System.Drawing.Point(104, 212);
            this.ptntres.Name = "ptntres";
            this.ptntres.Size = new System.Drawing.Size(45, 45);
            this.ptntres.TabIndex = 5;
            this.ptntres.Text = "3";
            this.ptntres.UseVisualStyleBackColor = true;
            this.ptntres.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnseis
            // 
            this.ptnseis.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnseis.Location = new System.Drawing.Point(104, 161);
            this.ptnseis.Name = "ptnseis";
            this.ptnseis.Size = new System.Drawing.Size(45, 45);
            this.ptnseis.TabIndex = 6;
            this.ptnseis.Text = "6";
            this.ptnseis.UseVisualStyleBackColor = true;
            this.ptnseis.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnnueve
            // 
            this.ptnnueve.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnnueve.Location = new System.Drawing.Point(104, 110);
            this.ptnnueve.Name = "ptnnueve";
            this.ptnnueve.Size = new System.Drawing.Size(45, 45);
            this.ptnnueve.TabIndex = 9;
            this.ptnnueve.Text = "9";
            this.ptnnueve.UseVisualStyleBackColor = true;
            this.ptnnueve.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnocho
            // 
            this.ptnocho.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnocho.Location = new System.Drawing.Point(53, 110);
            this.ptnocho.Name = "ptnocho";
            this.ptnocho.Size = new System.Drawing.Size(45, 45);
            this.ptnocho.TabIndex = 8;
            this.ptnocho.Text = "8";
            this.ptnocho.UseVisualStyleBackColor = true;
            this.ptnocho.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnsiete
            // 
            this.ptnsiete.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnsiete.Location = new System.Drawing.Point(2, 110);
            this.ptnsiete.Name = "ptnsiete";
            this.ptnsiete.Size = new System.Drawing.Size(45, 45);
            this.ptnsiete.TabIndex = 7;
            this.ptnsiete.Text = "7";
            this.ptnsiete.UseVisualStyleBackColor = true;
            this.ptnsiete.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnquitar
            // 
            this.ptnquitar.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnquitar.Location = new System.Drawing.Point(104, 59);
            this.ptnquitar.Name = "ptnquitar";
            this.ptnquitar.Size = new System.Drawing.Size(45, 45);
            this.ptnquitar.TabIndex = 12;
            this.ptnquitar.Text = "<-";
            this.ptnquitar.UseVisualStyleBackColor = true;
            this.ptnquitar.Click += new System.EventHandler(this.ptnquitar_Click);
            // 
            // ptnborrartodo
            // 
            this.ptnborrartodo.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnborrartodo.Location = new System.Drawing.Point(53, 59);
            this.ptnborrartodo.Name = "ptnborrartodo";
            this.ptnborrartodo.Size = new System.Drawing.Size(45, 45);
            this.ptnborrartodo.TabIndex = 11;
            this.ptnborrartodo.Text = "c";
            this.ptnborrartodo.UseVisualStyleBackColor = true;
            this.ptnborrartodo.Click += new System.EventHandler(this.ptnborrartodo_Click);
            // 
            // ptnborrar
            // 
            this.ptnborrar.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnborrar.Location = new System.Drawing.Point(2, 59);
            this.ptnborrar.Name = "ptnborrar";
            this.ptnborrar.Size = new System.Drawing.Size(45, 45);
            this.ptnborrar.TabIndex = 10;
            this.ptnborrar.Text = "E";
            this.ptnborrar.UseVisualStyleBackColor = true;
            this.ptnborrar.Click += new System.EventHandler(this.ptnborrar_Click);
            // 
            // ptncuadrado
            // 
            this.ptncuadrado.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptncuadrado.Location = new System.Drawing.Point(239, 59);
            this.ptncuadrado.Name = "ptncuadrado";
            this.ptncuadrado.Size = new System.Drawing.Size(45, 45);
            this.ptncuadrado.TabIndex = 14;
            this.ptncuadrado.Tag = "²";
            this.ptncuadrado.Text = "x²";
            this.ptncuadrado.UseVisualStyleBackColor = true;
            this.ptncuadrado.Click += new System.EventHandler(this.clickOperador);
            // 
            // ptnraizcuadrada
            // 
            this.ptnraizcuadrada.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnraizcuadrada.Location = new System.Drawing.Point(188, 59);
            this.ptnraizcuadrada.Name = "ptnraizcuadrada";
            this.ptnraizcuadrada.Size = new System.Drawing.Size(45, 45);
            this.ptnraizcuadrada.TabIndex = 13;
            this.ptnraizcuadrada.Tag = "√";
            this.ptnraizcuadrada.Text = "√";
            this.ptnraizcuadrada.UseVisualStyleBackColor = true;
            this.ptnraizcuadrada.Click += new System.EventHandler(this.clickOperador);
            // 
            // multiplicar
            // 
            this.multiplicar.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.multiplicar.Location = new System.Drawing.Point(239, 110);
            this.multiplicar.Name = "multiplicar";
            this.multiplicar.Size = new System.Drawing.Size(45, 45);
            this.multiplicar.TabIndex = 16;
            this.multiplicar.Tag = "X";
            this.multiplicar.Text = "X";
            this.multiplicar.UseVisualStyleBackColor = true;
            this.multiplicar.Click += new System.EventHandler(this.clickOperador);
            // 
            // ptndivide
            // 
            this.ptndivide.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptndivide.Location = new System.Drawing.Point(188, 110);
            this.ptndivide.Name = "ptndivide";
            this.ptndivide.Size = new System.Drawing.Size(45, 45);
            this.ptndivide.TabIndex = 15;
            this.ptndivide.Tag = "÷";
            this.ptndivide.Text = "÷";
            this.ptndivide.UseVisualStyleBackColor = true;
            this.ptndivide.Click += new System.EventHandler(this.clickOperador);
            // 
            // ptnresta
            // 
            this.ptnresta.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnresta.Location = new System.Drawing.Point(239, 161);
            this.ptnresta.Name = "ptnresta";
            this.ptnresta.Size = new System.Drawing.Size(45, 45);
            this.ptnresta.TabIndex = 18;
            this.ptnresta.Tag = "˗";
            this.ptnresta.Text = "˗";
            this.ptnresta.UseVisualStyleBackColor = true;
            this.ptnresta.Click += new System.EventHandler(this.clickOperador);
            // 
            // ptnsuma
            // 
            this.ptnsuma.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnsuma.Location = new System.Drawing.Point(188, 161);
            this.ptnsuma.Name = "ptnsuma";
            this.ptnsuma.Size = new System.Drawing.Size(45, 45);
            this.ptnsuma.TabIndex = 17;
            this.ptnsuma.Tag = "+";
            this.ptnsuma.Text = "+";
            this.ptnsuma.UseVisualStyleBackColor = true;
            this.ptnsuma.Click += new System.EventHandler(this.clickOperador);
            // 
            // ptnresultado
            // 
            this.ptnresultado.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnresultado.Location = new System.Drawing.Point(188, 212);
            this.ptnresultado.Name = "ptnresultado";
            this.ptnresultado.Size = new System.Drawing.Size(96, 45);
            this.ptnresultado.TabIndex = 19;
            this.ptnresultado.Text = "=";
            this.ptnresultado.UseVisualStyleBackColor = true;
            this.ptnresultado.Click += new System.EventHandler(this.ptnresultado_Click);
            // 
            // ptnpunto
            // 
            this.ptnpunto.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnpunto.Location = new System.Drawing.Point(104, 263);
            this.ptnpunto.Name = "ptnpunto";
            this.ptnpunto.Size = new System.Drawing.Size(45, 45);
            this.ptnpunto.TabIndex = 22;
            this.ptnpunto.Text = ".";
            this.ptnpunto.UseVisualStyleBackColor = true;
            this.ptnpunto.Click += new System.EventHandler(this.ptnpunto_Click);
            // 
            // ptncero
            // 
            this.ptncero.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptncero.Location = new System.Drawing.Point(53, 263);
            this.ptncero.Name = "ptncero";
            this.ptncero.Size = new System.Drawing.Size(45, 45);
            this.ptncero.TabIndex = 21;
            this.ptncero.Text = "0";
            this.ptncero.UseVisualStyleBackColor = true;
            this.ptncero.Click += new System.EventHandler(this.AgregarNumero);
            // 
            // ptnsigno
            // 
            this.ptnsigno.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ptnsigno.Location = new System.Drawing.Point(2, 263);
            this.ptnsigno.Name = "ptnsigno";
            this.ptnsigno.Size = new System.Drawing.Size(45, 45);
            this.ptnsigno.TabIndex = 20;
            this.ptnsigno.Text = "±";
            this.ptnsigno.UseVisualStyleBackColor = true;
            this.ptnsigno.Click += new System.EventHandler(this.ptnsigno_Click);
            // 
            // Form1
            // 
            this.ClientSize = new System.Drawing.Size(371, 371);
            this.Controls.Add(this.ptnpunto);
            this.Controls.Add(this.ptncero);
            this.Controls.Add(this.ptnsigno);
            this.Controls.Add(this.ptnresultado);
            this.Controls.Add(this.ptnresta);
            this.Controls.Add(this.ptnsuma);
            this.Controls.Add(this.multiplicar);
            this.Controls.Add(this.ptndivide);
            this.Controls.Add(this.ptncuadrado);
            this.Controls.Add(this.ptnraizcuadrada);
            this.Controls.Add(this.ptnquitar);
            this.Controls.Add(this.ptnborrartodo);
            this.Controls.Add(this.ptnborrar);
            this.Controls.Add(this.ptnnueve);
            this.Controls.Add(this.ptnocho);
            this.Controls.Add(this.ptnsiete);
            this.Controls.Add(this.ptnseis);
            this.Controls.Add(this.ptntres);
            this.Controls.Add(this.ptnsinco);
            this.Controls.Add(this.ptncuatro);
            this.Controls.Add(this.ptndos);
            this.Controls.Add(this.ptnuno);
            this.Controls.Add(this.resultado);
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtResultado;
        private System.Windows.Forms.Button btntres;
        private System.Windows.Forms.Button btn2;
        private System.Windows.Forms.Button btnuno;
        private System.Windows.Forms.Button seis;
        private System.Windows.Forms.Button btnsinco;
        private System.Windows.Forms.Button btncuatro;
        private System.Windows.Forms.Button btnquita;
        private System.Windows.Forms.Button btnborrartodo;
        private System.Windows.Forms.Button btnborrar;
        private System.Windows.Forms.Button btnnueve;
        private System.Windows.Forms.Button btnocho;
        private System.Windows.Forms.Button btnsiete;
        private System.Windows.Forms.Button btncuadrado;
        private System.Windows.Forms.Button btnraizcuadrada;
        private System.Windows.Forms.Button btnmultiplicacion;
        private System.Windows.Forms.Button btndivicion;
        private System.Windows.Forms.Button btnresta;
        private System.Windows.Forms.Button btnsuma;
        private System.Windows.Forms.Button btnresultado;
        private System.Windows.Forms.Button btnpunto;
        private System.Windows.Forms.Button btncero;
        private System.Windows.Forms.Button btnsigno;
        private System.Windows.Forms.TextBox resultado;
        private System.Windows.Forms.Button ptnuno;
        private System.Windows.Forms.Button ptndos;
        private System.Windows.Forms.Button ptnsinco;
        private System.Windows.Forms.Button ptncuatro;
        private System.Windows.Forms.Button ptntres;
        private System.Windows.Forms.Button ptnseis;
        private System.Windows.Forms.Button ptnnueve;
        private System.Windows.Forms.Button ptnocho;
        private System.Windows.Forms.Button ptnsiete;
        private System.Windows.Forms.Button ptnquitar;
        private System.Windows.Forms.Button ptnborrartodo;
        private System.Windows.Forms.Button ptnborrar;
        private System.Windows.Forms.Button ptncuadrado;
        private System.Windows.Forms.Button ptnraizcuadrada;
        private System.Windows.Forms.Button multiplicar;
        private System.Windows.Forms.Button ptndivide;
        private System.Windows.Forms.Button ptnresta;
        private System.Windows.Forms.Button ptnsuma;
        private System.Windows.Forms.Button ptnresultado;
        private System.Windows.Forms.Button ptnpunto;
        private System.Windows.Forms.Button ptncero;
        private System.Windows.Forms.Button ptnsigno;
    }
}

