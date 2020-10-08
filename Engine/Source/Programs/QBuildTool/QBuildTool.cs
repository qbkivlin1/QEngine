using System;
using System.Collection.Generic;

namespace QBuildTool {
    public interface ITask
    {
        string Help();
        void Execute(string[] args);
    }

    public static class Program {

        public static void Main(string[] args) {
            Dictionary<string, ITask> task;
            task.add("-Sln", GenerateSolution);
            
            while(true)
            {
                
            }
        }
    }

    public class GenerateSolution : ITask
    {
        string Help()
        {
            return "-Sln (Generate Solution file)"
        }

        void Execute(string[] args)
        {

        }
    }
}