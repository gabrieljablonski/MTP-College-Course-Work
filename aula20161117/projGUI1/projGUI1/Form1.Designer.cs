namespace projGUI1
{
    partial class frmMain
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMain));
            this.btnBotao = new System.Windows.Forms.Button();
            this.chkEscolha = new System.Windows.Forms.CheckBox();
            this.txbCaixa = new System.Windows.Forms.TextBox();
            this.lblTexto = new System.Windows.Forms.Label();
            this.cmbSelecao = new System.Windows.Forms.ComboBox();
            this.grbBotoes = new System.Windows.Forms.GroupBox();
            this.rdbOpc2 = new System.Windows.Forms.RadioButton();
            this.rdbOpc1 = new System.Windows.Forms.RadioButton();
            this.picImagem = new System.Windows.Forms.PictureBox();
            this.grbBotoes.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picImagem)).BeginInit();
            this.SuspendLayout();
            // 
            // btnBotao
            // 
            this.btnBotao.Location = new System.Drawing.Point(155, 42);
            this.btnBotao.Name = "btnBotao";
            this.btnBotao.Size = new System.Drawing.Size(131, 23);
            this.btnBotao.TabIndex = 0;
            this.btnBotao.Text = "Faz alguma coisa";
            this.btnBotao.UseVisualStyleBackColor = true;
            this.btnBotao.Click += new System.EventHandler(this.btnBotao_Click);
            // 
            // chkEscolha
            // 
            this.chkEscolha.AutoSize = true;
            this.chkEscolha.Location = new System.Drawing.Point(12, 122);
            this.chkEscolha.Name = "chkEscolha";
            this.chkEscolha.Size = new System.Drawing.Size(131, 17);
            this.chkEscolha.TabIndex = 1;
            this.chkEscolha.Text = "Aparece alguma coisa";
            this.chkEscolha.UseVisualStyleBackColor = true;
            this.chkEscolha.CheckedChanged += new System.EventHandler(this.chkEscolha_CheckedChanged);
            // 
            // txbCaixa
            // 
            this.txbCaixa.Location = new System.Drawing.Point(13, 184);
            this.txbCaixa.Name = "txbCaixa";
            this.txbCaixa.Size = new System.Drawing.Size(134, 20);
            this.txbCaixa.TabIndex = 2;
            this.txbCaixa.TextChanged += new System.EventHandler(this.txbCaixa_TextChanged);
            // 
            // lblTexto
            // 
            this.lblTexto.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTexto.ForeColor = System.Drawing.Color.Black;
            this.lblTexto.Location = new System.Drawing.Point(12, 9);
            this.lblTexto.Name = "lblTexto";
            this.lblTexto.Size = new System.Drawing.Size(274, 25);
            this.lblTexto.TabIndex = 3;
            this.lblTexto.Text = "oi";
            this.lblTexto.Click += new System.EventHandler(this.lblTexto_Click);
            // 
            // cmbSelecao
            // 
            this.cmbSelecao.DisplayMember = "(none)";
            this.cmbSelecao.FormattingEnabled = true;
            this.cmbSelecao.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.cmbSelecao.Items.AddRange(new object[] {
            "0",
            "1",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9"});
            this.cmbSelecao.Location = new System.Drawing.Point(13, 146);
            this.cmbSelecao.Name = "cmbSelecao";
            this.cmbSelecao.Size = new System.Drawing.Size(134, 21);
            this.cmbSelecao.TabIndex = 4;
            // 
            // grbBotoes
            // 
            this.grbBotoes.Controls.Add(this.rdbOpc2);
            this.grbBotoes.Controls.Add(this.rdbOpc1);
            this.grbBotoes.Location = new System.Drawing.Point(165, 100);
            this.grbBotoes.Name = "grbBotoes";
            this.grbBotoes.Size = new System.Drawing.Size(121, 103);
            this.grbBotoes.TabIndex = 5;
            this.grbBotoes.TabStop = false;
            this.grbBotoes.Text = "Cor legal";
            // 
            // rdbOpc2
            // 
            this.rdbOpc2.AutoSize = true;
            this.rdbOpc2.Location = new System.Drawing.Point(16, 43);
            this.rdbOpc2.Name = "rdbOpc2";
            this.rdbOpc2.Size = new System.Drawing.Size(69, 17);
            this.rdbOpc2.TabIndex = 1;
            this.rdbOpc2.TabStop = true;
            this.rdbOpc2.Text = "Vermelho";
            this.rdbOpc2.UseVisualStyleBackColor = true;
            // 
            // rdbOpc1
            // 
            this.rdbOpc1.AutoSize = true;
            this.rdbOpc1.ForeColor = System.Drawing.SystemColors.ControlText;
            this.rdbOpc1.Location = new System.Drawing.Point(16, 20);
            this.rdbOpc1.Name = "rdbOpc1";
            this.rdbOpc1.Size = new System.Drawing.Size(45, 17);
            this.rdbOpc1.TabIndex = 0;
            this.rdbOpc1.TabStop = true;
            this.rdbOpc1.Text = "Azul";
            this.rdbOpc1.UseVisualStyleBackColor = true;
            // 
            // picImagem
            // 
            this.picImagem.Image = ((System.Drawing.Image)(resources.GetObject("picImagem.Image")));
            this.picImagem.Location = new System.Drawing.Point(12, 37);
            this.picImagem.Name = "picImagem";
            this.picImagem.Size = new System.Drawing.Size(134, 77);
            this.picImagem.SizeMode = System.Windows.Forms.PictureBoxSizeMode.CenterImage;
            this.picImagem.TabIndex = 6;
            this.picImagem.TabStop = false;
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(298, 216);
            this.Controls.Add(this.picImagem);
            this.Controls.Add(this.grbBotoes);
            this.Controls.Add(this.cmbSelecao);
            this.Controls.Add(this.lblTexto);
            this.Controls.Add(this.txbCaixa);
            this.Controls.Add(this.chkEscolha);
            this.Controls.Add(this.btnBotao);
            this.Name = "frmMain";
            this.Text = "t";
            this.Load += new System.EventHandler(this.frmMain_Load);
            this.grbBotoes.ResumeLayout(false);
            this.grbBotoes.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picImagem)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnBotao;
        private System.Windows.Forms.CheckBox chkEscolha;
        private System.Windows.Forms.TextBox txbCaixa;
        private System.Windows.Forms.Label lblTexto;
        private System.Windows.Forms.ComboBox cmbSelecao;
        private System.Windows.Forms.GroupBox grbBotoes;
        private System.Windows.Forms.RadioButton rdbOpc2;
        private System.Windows.Forms.RadioButton rdbOpc1;
        private System.Windows.Forms.PictureBox picImagem;
    }
}

