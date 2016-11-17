using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace projGUI1
{
    public partial class frmMain : Form
    {
        public frmMain()
        {
            InitializeComponent();
        }

        private void frmMain_Load(object sender, EventArgs e)
        {
            cmbSelecao.SelectedIndex = 0;
        }

        private void lblTexto_Click(object sender, EventArgs e)
        {

        }

        private void txbCaixa_TextChanged(object sender, EventArgs e)
        {

        }

        private void chkEscolha_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void btnBotao_Click(object sender, EventArgs e)
        {
            lblTexto.Text = "";
            lblTexto.Text += txbCaixa.Text +", "+ cmbSelecao.SelectedItem+".";
            if (rdbOpc1.Checked)
                lblTexto.ForeColor = Color.Blue;
            if(rdbOpc2.Checked)
                lblTexto.ForeColor = Color.Red;
        }
    }
}
