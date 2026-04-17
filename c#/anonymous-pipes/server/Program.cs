using System.Diagnostics;
using System.IO.Pipes;

namespace server;

class Program
{
    static void Main(string[] args)
    {
        try
        {
            AnonymousPipeServerStream serverStream = new(PipeDirection.Out, HandleInheritability.Inheritable);
            StreamWriter writer = new StreamWriter(serverStream) 
            { 
                AutoFlush = true 
                
            };
            Process client = new Process()
            {
                StartInfo = new()
                {
                    FileName = "client",
                    UseShellExecute = false,
                    Arguments = serverStream.GetClientHandleAsString()

                }

            };

            client.Start();

            serverStream.DisposeLocalCopyOfClientHandle();

            Console.WriteLine($"[SERVER] Current transmission mode: {serverStream.TransmissionMode}");

            Console.WriteLine("[SERVER] Enter text: ");
            writer.WriteLine(Console.ReadLine());

            client.WaitForExit();
            client.Close();

            Console.WriteLine("[SERVER] Client terminated. Exiting server.");

        }
        catch (Exception ex)
        {
            Trace.WriteLine(ex);

        }

    }

}
