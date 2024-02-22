#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  bool looping = true;
  string input;
  string temp;
  string songid;
  string artist;
  int duration;
  string title;
  int minutes;
  int seconds;
          cin >>  input;
 while (looping)
    {

  
      if(input == "quit")
	{
	  looping = false;
	    break;
	}
      
      else
	if (input == "song")
      {
	cin >> artist; // 1
	cin >> artist; //artist
	cin >> duration;
	cin >> title;
	minutes = duration /60;
	  seconds = duration %60;
	  if (seconds < 10)
	    cout << "new song " << title << " by " << artist << " " << minutes<< ":0" << seconds <<endl;
	      else
	cout << "new song " << title << " by " << artist << " " << minutes<< ":" << seconds <<endl;
	cin >> input;
      }
      else if (input == "remove")
	  {
	    cin >> artist;
	    cout <<"removing song " << artist << endl; 
	      cin >> input;
	  }
      else if (input == "playlist")
	  {
	    cin >>  artist;
	    cin >> title;
	    cout << "new playlist " << artist << " called " << title << endl;
	  cin >> input;
	  }
      else 	if (input == "add")
	  {
	    cin >> artist;
	    cin >> title;
	    cout << "add song "<< artist<< " to playlist "<< title<< endl;
	    cin >> input;
	  }
      else if (input == "drop")
	  {
	   cin >> artist;
	    cin >> title;
	    cout << "remove song "<< artist<< " from  playlist "<< title<< endl;
	    cin >> input;
    }
      else if (input == "seesong")
	  {
	  cin >> title;
	cout << "song " << title << endl;
	cin >> input;
    }
      else  if (input == "seeplaylist")
	  {
	    cin >> title;
	    cout << "songs in playlist " << title << endl;
	    cin >> input;
	  }
      else
	{
	  cout << "Command not recognized, please try again.\n";
	  cin.ignore(1000, '\n');
	  cin >> input;
						       
	}
	
       

    }
 	return 0;
    }


