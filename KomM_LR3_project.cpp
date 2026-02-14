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
        return 3 * a;
    }

        static void Main()
    {
        double a = 0;
        bool aEntered = false;

        while (true)
        {
            Console.WriteLine("\n=== Меню ===");
            Console.WriteLine("1. Ввести положительное число A");
            Console.WriteLine("2. Вычислить площадь равностороннего треугольника (S = a²√3/4)");
            Console.WriteLine("3. Вычислить периметр равностороннего треугольника (P = 3a)");
            Console.WriteLine("4. Выход");
            Console.Write("Выберите пункт меню (1-4): ");

            string choice = Console.ReadLine();

            switch (choice)
            {
                case "1":
                    a = InputPositiveNumber();
                    aEnter prepared = true;
                    Console.WriteLine($"Число A успешно введено: {a}");
                    break;

                case "2":
                    if (!aEntered)
                    {
                        Console.WriteLine("Ошибка: сначала введите число A (пункт 1)!");
                    }
                    else
                    {
                        double area = CalculateArea(a);
                        Console.WriteLine($"Площадь равностороннего треугольника: S = {area:F4}");
                    }
                    break;

                case "3":
                    if (!aEntered)
                    {
                        Console.WriteLine("Ошибка: сначала введите число A (пункт 1)!");
                    }
                    else
                    {
                        double perimeter = CalculatePerimeter(a);
                        Console.WriteLine($"Периметр равностороннего треугольника: P = {perimeter:F4}");
                    }
                    break;

                case "4":
                    Console.WriteLine("Программа завершена.");
                    return;

                default:
                    Console.WriteLine("Ошибка: неверный пункт меню! Введите число от 1 до 4.");
                    break;
            }

            Console.WriteLine(); // Пустая строка для разделения выводов
        }
    }
}
