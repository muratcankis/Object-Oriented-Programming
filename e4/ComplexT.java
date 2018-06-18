// ComplexT.java e47
// passing objects as parameters in Java

class ComplexT{							// A class to define complex numbers
    private double re;					// real and imaginary part of a complex num
    private double im;
    public ComplexT(double re_in, double im_in)            // Constructor
    {
	   re = re_in;
	   im = im_in;
	   System.out.println ("Constructor");

    }
    public ComplexT()                                          // Default Constructor
	{
	   re = 0;
	   im = 0;
	   System.out.println ("Default Constructor");

    }
	public ComplexT add(ComplexT c )	              // A method takes an object by reference
	{
	  System.out.println ("Add function is called");
	  ComplexT result = new ComplexT ();
	  result.re = re + c.re;
	  result.im = im + c.im;
	  return result;
        }
	public void print()					// Prints complex numbers on the screen
	{
          System.out.println ("re= " + re + " , im= " + im);
        }

        // ----- Main Function -----
        public static void main(String[] args)
        {
	  ComplexT z1 = new ComplexT(1,2);                      // z1,z2 and z3 are references NOT objects
          ComplexT z2 = new ComplexT(0.5, -1);
          ComplexT z3 = new ComplexT();	                        // Three objects are defined
	  z3=z1.add(z2);					// z3 = z1 + z2
	  z3.print();
        }
}

