using System;
class Horse
{
    private string name;
    private double[] records;

    public Horse(string name, double[] records)
    {
        this.name = name;
        this.records = new double[5];
        for (int i = 0; i < 5; i++)
        {
            this.records[i] = records[i];
        }
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Кличка: {name}");
        Console.Write("Рекорды: ");
        for (int i = 0; i < 5; i++)
        {
            Console.Write($"{records[i]} ");
        }
        Console.WriteLine();
    }

    public double GetAverageTime()
    {
        double sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += records[i];
        }
        return sum / 5;
    }
}

class Stable
{
    private Horse[] horses;
    private int count;

    public Stable(int count)
    {
        this.count = count;
        horses = new Horse[count];
    }

    public void SetHorse(int index, Horse horse)
    {
        if (index >= 0 && index < count)
        {
            horses[index] = horse;
        }
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Количество лошадей: {count}");
        for (int i = 0; i < count; i++)
        {
            Console.WriteLine($"Лошадь {i + 1}:");
            horses[i].DisplayInfo();
        }
    }

    public double GetAverageTimeForStable()
    {
        double total = 0;
        for (int i = 0; i < count; i++)
        {
            total += horses[i].GetAverageTime();
        }
        return total / count;
    }
}

class Program
{
    static void Main()
    {
        double[] records1 = { 65.2, 64.8, 67.1, 66.0, 65.9 };
        double[] records2 = { 68.5, 67.3, 69.0, 68.2, 67.8 };
        double[] records3 = { 62.1, 63.4, 61.9, 62.7, 63.0 };

        Horse horse1 = new Horse("Ветер", records1);
        Horse horse2 = new Horse("Молния", records2);
        Horse horse3 = new Horse("Звезда", records3);

        Stable stable = new Stable(3);
        stable.SetHorse(0, horse1);
        stable.SetHorse(1, horse2);
        stable.SetHorse(2, horse3);

        stable.DisplayInfo();

        Console.WriteLine($"Среднее время лошадей в конюшне: {stable.GetAverageTimeForStable():F2}");
    }
}