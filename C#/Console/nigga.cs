using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace ConsoleApp1
{
    internal class LogicClass

    {
        private int _count = 0;
        private List<SingleTask> _tasksList = new List<SingleTask>();


        //Создать задачу
        public void CreateTask(string bobo)
        { 
        _count += 1;
        SingleTask task = new SingleTask(_count, bobo);
        _tasksList.Add(task);
        }

        //Удалить задачу
        public void DeleteTask(int deleteId)
        {
            _count -= 1;
            bool TaskFound = false;
            for (int i = 0; i < _tasksList.Count; i++)
            {
                if (_tasksList[i].Id == deleteId)
                {
                    _tasksList.RemoveAt(i);
                    TaskFound = true;
                    break;
                }
            }
            if (TaskFound == false) 
            { 
                Console.WriteLine("Элемента с таким id не сущестует"); 
            }

            //Пересчитываем id для элментов 
            for(int i =deleteId - 1;i<_tasksList.Count;i++)
            {
                _tasksList[i].Id -= 1;
            }

        }

        //Просмотреть весь список задач
        public void WatchAll()
        {
            if (_tasksList.Count > 0)
            {
                for (int i = 0; i < _tasksList.Count; i++)
                {
                    Console.WriteLine($"ID = {_tasksList[i].Id} Name = {_tasksList[i].Name}");
                }
            }
            else 
            { 
                Console.WriteLine("Ваш список задач пуст"); 
            }
        }

        //Найти в списке задачу по id или Тексту самой задачи
        public void SearchIn(string NAME)
        {
            bool TaskFound = false;
            for (int i = 0; i < _tasksList.Count; i++)
            {
               if( _tasksList[i].Name == NAME)
                {
                    Console.WriteLine($"Найден! \n id = {_tasksList[i].Id}");
                    TaskFound = true;
                }
            }
            if (TaskFound == false) { Console.WriteLine("Задача не найдена!"); };
        }

        public void SearchIn(int ID)
        {
            bool TaskFound = false;
            for (int i = 0; i < _tasksList.Count; i++)
            {
                if (_tasksList[i].Id == ID)
                {
                    Console.WriteLine($"Найден! \n Название = {_tasksList[i].Name}");
                    TaskFound = true;
                }
            }
            if (TaskFound == false) { Console.WriteLine("Задача не найдена!"); };
        }


    }

    //Класс, представляющий собой одну задачу
    internal class SingleTask
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public SingleTask(int id, string name)
        {
            Id = id;
            Name = name;
        }
    }
}
