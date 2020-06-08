using System.IO.Ports;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace arduino_serial
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public void Form1_Load(object sender, EventArgs e)
        {

          
        
            serialPort1.PortName = "COM3";
            serialPort1.Open();
            serialPort1.Write("b");
        }

   
        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Write("1");
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("3");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("2");
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            serialPort1.Write("2");
        }
        public string okuma;
        public void timer1_Tick(object sender, EventArgs e)
        {
            okuma = serialPort1.ReadLine();

            if (okuma=="a")
            {
                MessageBox.Show("naber");
                this.Close();
            }
        }
    }
}
