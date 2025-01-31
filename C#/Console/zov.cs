using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace oop
{
    public class Class1
    {
        private int _x { get; set; }
        private int _y { get; set; }
        public Class1(int x, int y)
        {
            _x = x;
            _y = y;
        }

        public static Class1 operator +(Class1 first, Class1 second)
        {
            return new Class1(first._x + second._x,first._y + second._y);

        }

    }
}
