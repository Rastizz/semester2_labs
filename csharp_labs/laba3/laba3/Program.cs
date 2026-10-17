using System;
using System.Linq.Expressions;

namespace ConsoleApp1
{
     public class Program
    {
        public class NoRealRootsException : Exception
        {
            public NoRealRootsException(string message) : base(message) { }
        }
        private static void Main(string[] args)
        {
            Console.WriteLine("Enter an equation to solve. Example: ax^2 + bx + c = 0");
            Console.WriteLine("Enter the coefficient a:");
            if (!double.TryParse(Console.ReadLine(), out double a))
            {
                Console.WriteLine("Invalid input for coefficient a.");
                return;
            }

            Console.WriteLine("Enter the coefficient b:");
            if (!double.TryParse(Console.ReadLine(), out double b))
            {
                Console.WriteLine("Invalid input for coefficient b.");
                return;
            }

            Console.WriteLine("Enter the coefficient c:");
            if (!double.TryParse(Console.ReadLine(), out double c))
            {
                Console.WriteLine("Invalid input for coefficient c.");
                return;
            }
            double discriminant;
            try
            {
                discriminant = b * b - 4 * a * c;
                if (discriminant < 0)
                {
                    throw new  NoRealRootsException("The equation has no real roots.");
                }   
                else if (discriminant == 0)
                {
                    double root = -b / (2 * a);
                    Console.WriteLine($"The equation has one real root: {root}");
                }
                else
                {
                    double root1 = (-b + Math.Sqrt(discriminant)) / (2 * a);
                    double root2 = (-b - Math.Sqrt(discriminant)) / (2 * a);
                    Console.WriteLine($"The equation has two real roots: {root1} and {root2}");
                }
            }
            catch (ArithmeticException ex)
            {
                Console.WriteLine(ex.Message);
            }
            catch (NoRealRootsException ex2)
            {
                Console.WriteLine(ex2.Message);
            }
        }
    }
}
