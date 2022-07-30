#include<iostream>

using namespace std;

//Function to clear screen
void clear(){
	system("clear || cls");
}

//Main program
int main(){
	char ans1, ans2, ans3, ans4;  //variables to get user answer
	int choice = 1; //game loop variable

	clear();

	cout<< "#########################\n#     Psycho-Soft       #\n#  created by E.Kennedi #\n#########################\n\nPress < ENTER > to continue..."<< endl;
	getchar();
	
	//main game loop
	while(choice == 1){
		cout<< "Think of a number from 1 to 15 but don't tell me.\n\n\n\n< ENTER >"<< endl;
		getchar();
		clear();

		//card 1
		cout<< "'\n\n\n\n          1     3\n          5     7\n                    9     11\n                    13     15\n\n\n\n";
		cout<< "Is the number you thought of here? (y / n ) >>";
		cin>> ans1;
		clear();

		//card 2
		cout<< "\n\n\n\n           2     3\n          6     7\n                    10     11\n                    14     15\n\n\n\n";
		cout<< "Is the number you thought of here? (y / n )>>";
		cin>> ans2;
		clear();

		//card 3
		cout<< "\n\n\n\n           4     5\n          6     7\n                    12     13\n                    14     15\n\n\n\n";
		cout<< "Is the number you thought of here? (y / n ) >>";
		cin>> ans3;
		clear();

		//card 4
		cout<< "\n\n\n\n           8     9\n          10     11\n                  12     13\n                    14     15\n\n\n\n";
		cout<< "Is the number you thought of here? (y / n) >> ";
		cin>> ans4;
		clear();
		
		//magic logic...lulz
		//1
		if(ans1 == 'y'){
			if(ans2 == 'n'){
				if(ans3 == 'n'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   1   >>>\n\n\n\n";
					}
				}
			}
		}

		//2
		else if(ans1 == 'n'){
			if(ans2 == 'y'){
				if(ans3 == 'n'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   2   >>>\n\n\n\n";
					}
				}
			}
		}

		//3
		else if(ans1 == 'y'){
			if(ans2 == 'y'){
				if(ans3 == 'n'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   3   >>>\n\n\n\n";
					}
				}
			}
		}

		//4
		else if(ans1 ==  'n'){
			if(ans2 == 'n'){
				if(ans3 == 'y'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   4   >>>\n\n\n\n";
					}
				}
			}
		}

		//5
		else if(ans1 == 'y'){
			if(ans2 == 'n'){
				if(ans3 == 'y'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   5   >>>\n\n\n\n";
					}
				}
			}
		}

		//6
		else if(ans1 == 'n'){
			if(ans2 == 'y'){
				if(ans3 == 'y'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   6   >>>\n\n\n\n";
					}
				}
			}
		}

		//7
		else if(ans1 == 'y'){
			if(ans2 == 'y'){
				if(ans3 == 'y'){
					if(ans4 == 'n'){
						cout<< "\n\n\n\nThe number you thought of is            <<<   7   >>>\n\n\n\n";
					}
				}
			}
		}

		//8
		else if(ans1 == 'n'){
			if(ans2 == 'n'){
				if(ans3 == 'n'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   8   >>>\n\n\n\n";
					}
				}
			}
		}

		//9
		else if(ans2 == 'y'){
			if(ans2 == 'n'){
				if(ans3 == 'n'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   9   >>>\n\n\n\n";
					}
				}
			}
		}

		//10
		else if(ans1 == 'n'){
			if(ans2 == 'y'){
				if(ans3 == 'n'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   10   >>>\n\n\n\n";
					}
				}
			}
		}

		//11
		else if(ans1 == 'y'){
			if(ans2 == 'y'){
				if(ans3 == 'n'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   11   >>>\n\n\n\n";
					}
				}
			}
		}

		//12
		else if(ans1 == 'n'){
			if(ans2 == 'n'){
				if(ans3 == 'y'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   12   >>>\n\n\n\n";
					}
				}
			}
		}

		//13
		else if(ans1 == 'y'){
			if(ans2 == 'n'){
				if(ans3 == 'y'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   13   >>>\n\n\n\n";
					}
				}
			}
		}

		//14
		else if(ans1 == 'n'){
			if(ans2 == 'y'){
				if(ans3 == 'y'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<<   14   >>>\n\n\n\n";
					}
				}
			}
		}

		//15
		else if(ans1 == 'y'){
			if(ans2 == 'y'){
				if(ans3 == 'y'){
					if(ans4 == 'y'){
						cout<< "\n\n\n\nThe number you thought of is           <<< 15   >>>\n\n\n\n";
					}
				}
			}
		}

		cout<< "Enter 1 to try again or 0 to quit >> ";
		cin>> choice;
		clear();

	}
	clear();
	return 0;

}
