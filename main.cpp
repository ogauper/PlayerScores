#include <iostream>
#include <vector>
using std::string;

struct Player{
  string name;
  int score;
};

int main(int argc, char *argv[])
{
  vector<Player> Players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player x;
      x.name = argv[i];
      Players.push_back(x);
    }

    //Get player scores from user input
    scores.resize(Players.size());
    for(int i=0; i<Players.size(); i++)
    {
      std::cout<<"Score for "<<Player[i].name<<": ";
      int score;
      std::cin>>score;
      Player[i].score = score;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<names.size(); i++)
    {
      std::cout<<Players[i].name<<"  ";
      std::cout<<Players[i].score<<std::endl;
    }
  }
  else
  {
    std::cout<<"Usage: PlayerScores [players]\n"
             <<"\n\t[players] must specify one or more player names, "
             <<"each separated by space\n";
  }

  return 0;
}

