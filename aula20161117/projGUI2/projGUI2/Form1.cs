using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace projGUI2
{
    public partial class Form1 : Form
    {

        double[] num=new double [10];
        int a = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button13_Click(object sender, EventArgs e)
        {
            num[a] = Convert.ToDouble(textBox1.Text);
            a++;
            textBox2.Text += textBox1.Text + " = ";
            textBox1.Text = "";
            double soma = 0;
            for (int i = 0; i < a; i++)
                soma += num[i];
            textBox1.Text = Convert.ToString(soma);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text += 1;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text += 9;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text += 2;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text += 3;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text += 4;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text += 5;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text += 6;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text += 7;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text += 8;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text += 0;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            textBox1.Text += ".";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button16_Click(object sender, EventArgs e)
        {
            num[a]=Convert.ToDouble(textBox1.Text);
            a++;
            textBox2.Text += textBox1.Text+" + ";
            textBox1.Text = "";
        }
    }
}
