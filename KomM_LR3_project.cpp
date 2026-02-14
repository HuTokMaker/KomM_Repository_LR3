using System;

class Program
{
    //Разрабатывается Комляковом Максимом
    static double InputPositiveNumber()
    {
        double a;
        while (true)
        {
            Console.Write("Введите положительное число A: ");
            if (double.TryParse(Console.ReadLine(), out a) && a > 0)
            {
                return a;
            }
            else
            {
                Console.WriteLine("Ошибка: введите положительное число!");
            }
        }
    }

    //Разрабатывается Комляковом Максимом
    static double CalculateArea(double a)
    {
        return (a * a * Math.Sqrt(3)) / 4;
    }

    //Разрабатывается Комляковом Максимом
    static double CalculatePerimeter(double a)
    {

    }
}
