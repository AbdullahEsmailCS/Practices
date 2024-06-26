using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinkLabel
{
    enum Gender
    {
        Male =1,
        Female =2,
    }

        
    struct Name
    {
         string firstname;
         string secondname;
         string thirdname;
         string lastname;
    }
    public class Persons
    {
        private int personId;
        private Name name;
        private DateTime dateofbirth;
        private Gender gender;

        internal Name Name { get => name; set => name = value; }
    }
}
