﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TicTacToe
{

    public class node{
        public string turn;
public char[,] state=new char[3,3];

        public int level;
        public int score;
     public   bool visited;
    public List<node>adjList=new List<node>();  
  

    }
    public class game
    {
        public game(string start)
        {
            //create a new node
            node n = new node();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    n.state[i, j] = ' ';
                }
            }
            n.turn = start;
            n.level = 0;


        }

        public List<node> Action(node n)
        {
            return n.adjList;
        }
        public bool Terminal(node n)
        {
            if ((n.state[0, 0] == n.state[0, 1] && n.state[0, 0] == n.state[0, 2]) ||
                (n.state[1, 0] == n.state[1, 1] && n.state[1, 0] == n.state[1, 2]) ||
             (n.state[2, 0] == n.state[2, 1] && n.state[2, 0] == n.state[2, 2]) ||
             (n.state[0, 0] == n.state[1, 0] && n.state[0, 0] == n.state[2, 0]) ||
              (n.state[0, 1] == n.state[1, 1] && n.state[0, 0] == n.state[2, 1]) ||
               (n.state[0, 2] == n.state[1, 2] && n.state[0, 2] == n.state[2, 2]) ||

                (n.state[0, 0] == n.state[1, 1] && n.state[0, 0] == n.state[2, 2]) ||
                 (n.state[0, 2] == n.state[1, 1] && n.state[0, 2] == n.state[2, 0]) ||
                  (n.state[0, 0] != ' ' && n.state[0, 1] != ' ' && n.state[0, 2] != ' ' &&
                  n.state[1, 0] != ' ' && n.state[1, 1] != ' ' && n.state[1, 2] != ' '
                  && n.state[2, 0] != ' ' && n.state[2, 1] != ' ' && n.state[2, 2] != ' ')
                  )
            {

                return true;
            }

              //return true;
            else return false;


        }

        public string Player(string start, int currentLevel)
        {

            //reurn the player who has return;
            if (start == "PC" && currentLevel % 2 == 0)
            {
                return "PC";

            }
            else return "player";
            //      }

            //func action/dfs{
            //}
            //func terminalTest{
            //}
            //func utility{
            //}
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            string initialState = "";
            string start="player";
            int player = 1;
            int opponent = 2;
            game g=new game(start);

        }
    }
}
