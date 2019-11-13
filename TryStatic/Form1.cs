using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TryStatic
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            TestManager tm1 =  TestManager.getInstance();
            TestManager tm2 = TestManager.getInstance();
        }
    }

    public sealed class TestManager
    {

        static TestManager()
        {

        }

        TestManager()
        {

        }

        public static TestManager getInstance()
        {
            TestManager tm = new TestManager();
            return tm;
        }
    }
}
