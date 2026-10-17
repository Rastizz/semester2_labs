using System;
namespace laba4
{
public class Matrix
    {
        public int Size { get; private set; }
        private int[,] Elements;
        public Matrix(int n)
        {
            Size = n;
            Elements = new int[n, n];
        }
        public void Input()
        {
            Console.WriteLine($"Введите элементы матрицы {Size}x{Size} построчно (через пробел):");
            for (int i = 0; i < Size; i++)
            {
                string[] input = Console.ReadLine().Split();
                for (int j = 0; j < Size; j++)
                {
                    Elements[i, j] = int.Parse(input[j]);
                }
            }
        }
        public void Print()
        {
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < Size; j++)
                {
                    Console.Write($"{Elements[i, j],5}");
                }
                Console.WriteLine();
            }
        }
        public Matrix Multiply(Matrix other)
        {
            if (Size != other.Size)
                throw new ArgumentException("Размеры матриц должны совпадать для умножения");

            Matrix result = new Matrix(Size);
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < Size; j++)
                {
                    int sum = 0;
                    for (int k = 0; k < Size; k++)
                    {
                        sum += Elements[i, k] * other.Elements[k, j];
                    }
                    result.Elements[i, j] = sum;
                }
            }
            return result;
        }
        public Matrix Subtract(Matrix other)
        {
            if (Size != other.Size)
                throw new ArgumentException("Размеры матриц должны совпадать для вычитания");

            Matrix result = new Matrix(Size);
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < Size; j++)
                {
                    result.Elements[i, j] = Elements[i, j] - other.Elements[i, j];
                }
            }
            return result;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            int n = GetMatrixSize();
            Matrix A = InputMatrix("A", n);
            Matrix B = InputMatrix("B", n);
            Matrix AB = A.Multiply(B);
            Matrix BA = B.Multiply(A);
            Matrix result = AB.Subtract(BA);
            PrintResults(AB, BA, result);
        }

        static int GetMatrixSize()
        {
            Console.Write("Введите размерность матриц n: ");
            return int.Parse(Console.ReadLine());
        }

        static Matrix InputMatrix(string name, int size)
        {
            Console.WriteLine($"\nВвод матрицы {name}:");
            Matrix matrix = new Matrix(size);
            matrix.Input();
            return matrix;
        }

        static void PrintResults(Matrix AB, Matrix BA, Matrix result)
        {
            Console.WriteLine("\nМатрица AB:");
            AB.Print();
            
            Console.WriteLine("\nМатрица BA:");
            BA.Print();
            
            Console.WriteLine("\nРезультат AB - BA:");
            result.Print();
        }
    }
}