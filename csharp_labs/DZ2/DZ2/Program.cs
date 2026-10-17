using System;

class ChocolateProduct
{
    private string name;
    private double weight;
    private double energyValuePer100g;

    public ChocolateProduct(string name, double weight, double energyValuePer100g)
    {
        this.name = name;
        this.weight = weight;
        this.energyValuePer100g = energyValuePer100g;
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Название: {name}");
        Console.WriteLine($"Масса: {weight} г");
        Console.WriteLine($"Энергетическая ценность на 100 г: {energyValuePer100g} ккал");
    }

    public double GetTotalEnergyValue()
    {
        return (weight / 100) * energyValuePer100g;
    }
}

class ChocolateBar : ChocolateProduct
{
    private int piecesCount;

    public ChocolateBar(string name, double weight, double energyValuePer100g, int piecesCount) : base(name, weight, energyValuePer100g)
    {
        this.piecesCount = piecesCount;
    }

    new public void DisplayInfo()
    {
        base.DisplayInfo();
        Console.WriteLine($"Число долек: {piecesCount}");
    }

    public double GetBarEnergyValue()
    {
        return GetTotalEnergyValue();
    }

    public double GetPieceEnergyValue()
    {
        if (piecesCount <= 0) return 0;
        return GetBarEnergyValue() / piecesCount;
    }
}

class Program
{
    static void Main()
    {
        ChocolateProduct product = new ChocolateProduct("Горький шоколад", 50, 546);
        Console.WriteLine("Шоколадное изделие:");
        product.DisplayInfo();
        Console.WriteLine($"Общая энергетическая ценность: {product.GetTotalEnergyValue()} ккал\n");

        ChocolateBar bar = new ChocolateBar("Молочный шоколад", 100, 535, 8);
        Console.WriteLine("Шоколадная плитка:");
        bar.DisplayInfo();
        Console.WriteLine($"Энергетическая ценность плитки: {bar.GetBarEnergyValue()} ккал");
        Console.WriteLine($"Энергетическая ценность одной дольки: {bar.GetPieceEnergyValue()} ккал");
    }
}