using System;
using System.Threading;
using System.Threading.Tasks;

class Program
{
    static int counter = 0;
    static object lockObject = new object();

    static async Task Main()
    {
        // Synchronization with lock
        Thread t1 = new Thread(IncrementCounterWithLock);
        Thread t2 = new Thread(IncrementCounterWithLock);

        t1.Start();
        t2.Start();

        t1.Join();
        t2.Join();

        Console.WriteLine("Counter with lock: " + counter);

        // Concurrency with Task
        Task task1 = Task.Run(() => IncrementCounter());
        Task task2 = Task.Run(() => IncrementCounter());

        Task.WaitAll(task1, task2);

        Console.WriteLine("Counter with concurrency: " + counter);

        // Parallelism with Parallel.ForEach
        int[] numbers = { 1, 2, 3, 4, 5 };
        Parallel.ForEach(numbers, number =>
        {
            IncrementCounter();
        });

        Console.WriteLine("Counter with parallelism: " + counter);

        // Multithreading with ThreadPool
        ThreadPool.QueueUserWorkItem(state =>
        {
            IncrementCounter();
        });

        ThreadPool.QueueUserWorkItem(state =>
        {
            IncrementCounter();
        });

        Thread.Sleep(1000); // Wait for the thread pool tasks to complete

        Console.WriteLine("Counter with multithreading: " + counter);




        // Synchronous Execution
        Console.WriteLine("Synchronous Execution:");
        SyncMethod();
        Console.WriteLine();

        // Asynchronous Execution
        Console.WriteLine("Asynchronous Execution:");
        await AsyncMethod();
        Console.WriteLine();














      

        Console.ReadKey();
    }

    static void SyncMethod()
    {
        // Simulating a time-consuming operation
        Task.Delay(2000).Wait();
        Console.WriteLine("Synchronous Method: Task completed.");
    }

    static async Task AsyncMethod()
    {
        await Task.Delay(2000);
        Console.WriteLine("Asynchronous Method: Task completed.");
    }
    static void IncrementCounterWithLock()
    {
        for (int i = 0; i < 100000; i++)
        {
            lock (lockObject)
            {
                counter++;
            }
        }
    }

    static void IncrementCounter()
    {
        for (int i = 0; i < 100000; i++)
        {
            counter++;
        }
    }
}