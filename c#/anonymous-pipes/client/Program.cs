using System.IO.Pipes;

namespace client;

class Program
{
    static void Main(string[] args)
    {
        if (args.Length <= 0)
        {
            return;
            
        }

        AnonymousPipeClientStream clientStream = new(PipeDirection.In, args[0]);

        Console.WriteLine($"[CLIENT] Current transmission mode: {clientStream.TransmissionMode}");

        StreamReader streamReader = new StreamReader(clientStream);

        string msg;

        while (!string.IsNullOrEmpty(msg = streamReader.ReadLine() ?? string.Empty))
        {
            Console.WriteLine("[CLIENT] Echo: " + msg);
            
        }

        Console.WriteLine("[CLIENT] Press Enter to continue...");
        Console.ReadLine();


    }

}
