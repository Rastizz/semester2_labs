using System;

namespace laba4_2
{
    public class StringProcessor
    {
        public static string ProcessString(string input)
        {
            if (input == null || input == "")
                return input;

            string temp = "";
            bool lastWasSpace = true;
            for (int i = 0; i < input.Length; i++)
            {
                char c = input[i];
                if (c == ' ')
                {
                    if (!lastWasSpace)
                    {
                        temp += c;
                        lastWasSpace = true;
                    }
                }
                else
                {
                    temp += c;
                    lastWasSpace = false;
                }
            }

            if (temp.Length > 0 && temp[temp.Length - 1] == ' ')
            {
                temp = temp.Substring(0, temp.Length - 1);
            }

            string[] words = SplitIntoWords(temp);
            string[] filteredWords = new string[words.Length];
            int count = 0;
            for (int i = 0; i < words.Length; i++)
            {
                if (words[i].Length > 1)
                {
                    filteredWords[count] = words[i];
                    count++;
                }
            }

            string result = "";
            for (int i = 0; i < count; i++)
            {
                if (i > 0)
                    result += " ";
                result += filteredWords[i];
            }

            return result;
        }

        private static string[] SplitIntoWords(string input)
        {
            int wordCount = 0;
            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] != ' ')
                {
                    if (i == 0 || input[i - 1] == ' ')
                    {
                        wordCount++;
                    }
                }
            }

            string[] words = new string[wordCount];
            int index = 0;
            string currentWord = "";
            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] != ' ')
                {
                    currentWord += input[i];
                }
                else
                {
                    if (currentWord != "")
                    {
                        words[index] = currentWord;
                        index++;
                        currentWord = "";
                    }
                }
            }
            if (currentWord != "")
            {
                words[index] = currentWord;
            }

            return words;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            string[] originalLines = InputLines();
            string[] correctedLines = CorrectLines(originalLines);

            PrintResults(originalLines, correctedLines);
        }

        static string[] InputLines()
        {
            Console.WriteLine("Введите строки (для завершения введите пустую строку):");
            string[] temp = new string[1000];
            int count = 0;
            string line;
            while ((line = Console.ReadLine()) != "")
            {
                temp[count] = line;
                count++;
            }

            string[] result = new string[count];
            for (int i = 0; i < count; i++)
            {
                result[i] = temp[i];
            }
            return result;
        }

        static string[] CorrectLines(string[] originalLines)
        {
            string[] corrected = new string[originalLines.Length];
            for (int i = 0; i < originalLines.Length; i++)
            {
                corrected[i] = StringProcessor.ProcessString(originalLines[i]);
            }
            return corrected;
        }

        static void PrintResults(string[] original, string[] corrected)
        {
            Console.WriteLine("\n--- Исходные строки ---");
            for (int i = 0; i < original.Length; i++)
            {
                Console.WriteLine($"\"{original[i]}\"");
            }

            Console.WriteLine("\n--- Скорректированные строки ---");
            for (int i = 0; i < corrected.Length; i++)
            {
                Console.WriteLine($"\"{corrected[i]}\"");
            }
        }
    }
}