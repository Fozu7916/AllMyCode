using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApp1
{
    internal class Finances
    {
        public int money = 10000;
        public int plus = 0;
        public int minus = 0;
        public void  AddMoney(int summa)
        {
            money += summa;
        }
        public void LoseMoney(int summa)
        {
            money -= summa;
        }

    };
}
