using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FrameWork
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        public delegate void SendMessageOutEventHandler(System.String strValue);
        public event SendMessageOutEventHandler SendMessageOut;
        private void button1_Click(object sender, EventArgs e)
        {
            this.SendMessageOut(this.textBox1.Text);
        }

        public void getMessage(System.String strValue)
        {
            this.richTextBox1.AppendText(strValue);
        }
    }
}
