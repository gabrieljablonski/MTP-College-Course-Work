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

        double num, input;
        int flag=0, ponto=0;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = "0";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if(flag!=3)
                textBox2.Text += textBox1.Text;
         
            switch(flag)
            {
                case 0:
                    num = aaa;
                    break;
                case 1:
                    num +=aaa;
                    break;
                case 2:
                    num -= aaa;
                    break;
                case 4:
                    num *= aaa;
                    break;
                case 5:
                    if(aaa==0)
                    {
                        textBox1.Text = "Entrada inválida";
                        textBox2.Text = "Raíz negativa";
                        flag = -1;
                        return;
                    }
                    num /= aaa;
                    break;
                case 9:
                    textBox2.Text = Convert.ToString(num);
                    textBox1.Text = Convert.ToString(num);
                    break;
            }
            flag = 9;
            textBox1.Text = Convert.ToString(num);
            ponto = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0&&textBox1.Text!="0,")
                textBox1.Text = "";
            if(flag==9)
            {
                flag = 0;
                textBox1.Text = "";
                textBox2.Text = "";
                num = 0x0;
            }
            textBox1.Text += 1;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            ponto = 0;
            flag = 0;
            textBox1.Text = "0";
            textBox2.Text = "";
            num = 0x0;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if(flag==9)
            {
                flag = 0;
                textBox1.Text = "";
                num = 0x0;
                textBox2.Text = "";
            }
            textBox1.Text += 9;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 2;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 3;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 4;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 5;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 6;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 7;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "";
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "";
                textBox2.Text = "";
            }
            textBox1.Text += 8;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);
            if (input == 0 && textBox1.Text != "0,")
                textBox1.Text = "0";
            else
                textBox1.Text += 0;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            input = Convert.ToDouble(textBox1.Text);          
            if (flag == 9)
            {
                flag = 0;
                num = 0x0;
                textBox1.Text = "0";
                textBox2.Text = "";
            }
            if (ponto == 0)
            {
                textBox1.Text += ",";
                ponto=1;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button15_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if (num == 0x0)
                num = 0;
            if (flag == 9)
            {
                textBox2.Text = "";
                num = aaa;
                textBox2.Text += textBox1.Text + " - ";
            }
            else if (flag == 1)
            {
                num += aaa;
                textBox2.Text += textBox1.Text + " - ";
            }
            else if (flag == 0)
            {
                textBox2.Text += textBox1.Text + " - ";
                num = aaa;
            }
            else if (flag == 2)
            {
                num -= aaa;
                textBox2.Text += textBox1.Text + " - ";
            }
            else if (flag == 3)
            {
                num -= Math.Sqrt(aaa);
                textBox2.Text +="- ";
            }
            else if(flag==4)
            {
                num *= aaa;
                textBox2.Text += textBox1.Text + " - ";
            }
            else if (flag == 5)
            {
                if (aaa == 0)
                {
                    textBox1.Text = "Entrada inválida";
                    textBox2.Text = "Divisão por zero";
                    flag = -1;
                    return;
                }
                num /= aaa;
                textBox2.Text += " ÷ ";
            }
            textBox1.Text = "0";
            flag = 2;
            ponto = 0;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if (aaa < 0)
            { 
                textBox1.Text = "Entrada inválida";
                textBox2.Text = "Raíz Negativa";
                flag = -1;
                return;
            }
            else if (flag == 1)
            {
                num += Math.Sqrt(Convert.ToDouble(textBox1.Text));
                textBox1.Text = Convert.ToString(Math.Sqrt(aaa));
            }
            else if (flag == 2)
            {
                num -= Math.Sqrt(Convert.ToDouble(textBox1.Text));
                textBox1.Text = Convert.ToString(Math.Sqrt(aaa));
            }
            else if (flag == 0)
            {
                num = Math.Sqrt(aaa);
                textBox1.Text = Convert.ToString(num);
            }
            else if (flag == 3)
            {
                textBox2.Text = "";
                num = Math.Sqrt(num);
                textBox1.Text = Convert.ToString(num);
            }
            else if (flag == 9)
            {
                textBox2.Text = "";
                num = Math.Sqrt(num);
                textBox1.Text = Convert.ToString(num);
            }
            else if (flag == 4)
            {
                num *= Math.Sqrt(aaa);
                textBox1.Text = Convert.ToString(Math.Sqrt(aaa));
            }
            else if (flag == 5)
            {
                if (aaa == 0)
                {
                    textBox1.Text = "Entrada inválida";
                    textBox2.Text = "Divisão por zero";
                    flag = -1;
                    return;
                }
                num /= aaa;
                textBox1.Text = Convert.ToString(Math.Sqrt(aaa));
            }
            textBox2.Text +=  "sqrt("+ Convert.ToString(aaa) +") ";
            ponto = 0; 
            flag = 3;
        }

        private void button19_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            ponto = 0;
            textBox1.Text = "0";
        }

        private void button18_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if (flag == 9)
            {
                textBox2.Text = Convert.ToString(num) + " x ";
                textBox1.Text = "0";    
            }
            else if (flag == 1)
            {
                num += aaa;
                textBox2.Text += textBox1.Text + " x ";
            }
            else if (flag == 2)
            {
                num += aaa;
                textBox2.Text += textBox1.Text + " x ";
            }
            else if (flag == 0)
            {
                num = aaa; 
                textBox2.Text = textBox1.Text + " x ";
            }
            else if(flag==3)
            {

                textBox2.Text += textBox1.Text + " x ";
            }
            else if (flag == 4)
            {
                num *= aaa;
                textBox2.Text += textBox1.Text+  " x ";
            }
            else if (flag == 5)
            {
                if (aaa == 0)
                {
                    textBox1.Text = "Entrada inválida";
                    textBox2.Text = "Divisão por zero";
                    flag = -1;
                    return;
                }
                num /= aaa;
                textBox2.Text += " ÷ ";
            }
            textBox1.Text = "0";
            flag = 4;
            ponto = 0;
        }

        private void button20_Click(object sender, EventArgs e)
        {
            double aaa = Convert.ToDouble(textBox1.Text);
            textBox1.Text= Convert.ToString(-aaa);
        }

        private void button21_Click(object sender, EventArgs e)
        {
            int aaa = Convert.ToInt32(textBox1.Text), fat = 1;
            for (int i = 2; i <= aaa; i++)
                fat*=i;
            textBox1.Text = Convert.ToString(fat);
            textBox2.Text = Convert.ToString(fat);
            
        }

        private void button22_Click(object sender, EventArgs e)
        {

        }

        private void button17_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if (flag == 9)
            {
                textBox2.Text = Convert.ToString(num) + " ÷ ";
                textBox1.Text = "0";
            }
            else if (flag == 1)
            {
                num += aaa;
                textBox2.Text = textBox1.Text + " ÷ ";
            }
            else if (flag == 2)
            {
                num += aaa;
                textBox2.Text += textBox1.Text + " ÷ ";
            }
            else if (flag == 0)
            {
                num = aaa;
                textBox2.Text = textBox1.Text + " ÷ ";
            }
            else if (flag == 3)
            {

                textBox2.Text = textBox1.Text + " ÷ ";
            }
            else if (flag == 4)
            {
                num *= aaa;
                textBox2.Text += " ÷ ";
            }
            else if(flag==5)
            {
                if (aaa == 0)
                {
                    textBox1.Text = "Entrada inválida";
                    textBox2.Text = "Divisão por zero";
                    flag = -1;
                    return;
                }
                num /= aaa;
                textBox2.Text += " ÷ ";
            }
            textBox1.Text = "0";
            flag = 5;

            ponto = 0;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            if (flag == -1)
                return;
            double aaa = Convert.ToDouble(textBox1.Text);
            if (num == 0x0)
                num = 0;
            if (flag == 9)
            {
                textBox2.Text = "";
                num = aaa;
                textBox2.Text += textBox1.Text + " + ";
            }
            else if (flag == 1)
            {
                num += aaa;
                textBox2.Text += textBox1.Text + " + ";
            }
            else if (flag == 2)
            {
                num -= aaa;
                textBox2.Text += textBox1.Text + " + ";
            }
            else if (flag == 0)
            {
                num = aaa;
                textBox2.Text += textBox1.Text + " + ";
            }
            else if (flag == 3)
            {
                textBox2.Text +="+ ";
            }
            else if (flag == 4)
            {
                num *= aaa;
                textBox2.Text += " + ";
            }
            else if (flag == 5)
            {
                if(aaa==0)
                {
                    textBox1.Text = "Entrada inválida";
                    textBox2.Text = "Divisão por zero";
                    flag = -1;
                    return;
                }
                num /= aaa;
                textBox2.Text += " ÷ ";
            }
            textBox1.Text = "0";
            flag = 1;
            ponto = 0;
        }
    }
}
