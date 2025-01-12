using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using WindowsFormsApp1;



namespace WindowsFormsApp1
{

    public partial class Form1 : Form
    {
        private string user = "Fozu";
        private string password = "zxc";
        private string Tuser = "";
        private string Tpassword = "";
        Finances qwe = new Finances();
        bool AddOrLose = false;
        bool LoginOrRegistr = false;

        public Form1()
        {
            InitializeComponent();
        }

        public void TimerStart()
        {
            Timer timer = new Timer
            {
                Interval = 2000
            };
            timer.Tick += (s, e) =>
            {
                TrueVxod.Visible = false;
                timer.Stop();
                timer.Dispose();
            };
            timer.Start();
        }
        private void AntiCheck()
        {
            label3.Visible = false;
            MoneyChange.Visible = false;
            OK2.Visible = false;
            TrueVxod.Visible = false;
            label1.Visible = false;
            label2.Visible = false;
            Add.Visible = false;
            Lose.Visible = false;
            Username.Visible = true;
            Password.Visible = true;
            OK.Visible = true;
        }
        private void Check()
        {
            TrueVxod.Visible = true;
            label1.Visible = true;
            label2.Visible = true;
            Add.Visible = true;
            Lose.Visible = true;
            Username.Visible = false;
            Password.Visible = false;
            OK.Visible = false;
        }
        private void Login_Click(object sender, EventArgs e)
        {
            AntiCheck();
            Username.Visible = true;
            Password.Visible = true;
            OK.Visible = true;
            LoginOrRegistr = false;
        }

        private void Registr_Click(object sender, EventArgs e)
        {
            AntiCheck();
            Username.Visible = true;
            Password.Visible = true;
            OK.Visible = true;
            LoginOrRegistr = true;
        }

        private void OK_Click(object sender, EventArgs e)
        {
            if (LoginOrRegistr == false)
            {
                Tuser = Username.Text;
                Tpassword = Password.Text;
                if (Tuser == user && Tpassword == password)
                {
                    TimerStart();
                    Check();
                    TrueVxod.Text = "Вход выполнен успешно";
                }
            }
            if (LoginOrRegistr)
            {
                user = Username.Text;
                password = Password.Text;
                TimerStart();
                Check();
                TrueVxod.Text = "Регистрация прошла успешно";
            }
        }


        private void Add_Click(object sender, EventArgs e)
        {
            label3.Visible = true;
            MoneyChange.Visible = true;
            AddOrLose = false;
            OK2.Visible = true;
        }

        private void Lose_Click(object sender, EventArgs e)
        {
            label3.Visible = true;
            MoneyChange.Visible = true;
            AddOrLose = true;
            OK2.Visible = true;
        }

        private void OK2_Click(object sender, EventArgs e)
        {

            int b = Int32.Parse(MoneyChange.Text);
            if (AddOrLose == false)
            {
                qwe.AddMoney(b);
            }
            if (AddOrLose)
            {
                qwe.LoseMoney(b);
            }
            label2.Text = Convert.ToString(qwe.money);
        }
    }
}





