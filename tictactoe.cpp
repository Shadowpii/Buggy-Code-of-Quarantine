#include <iostream>
using namespace std;
char Player[2] = {'X','O'};
char Board[3][3] = {'1','2','3','4','5','6','7','8','9'};
void Draw();
char checkwin();
char input(int);
//We will make this this thing work
int main(){
	int a=0;
	while(1){	
//	b=Player[0];
	Draw();
//	TogglePlayer();
	input(a);
	checkwin();
	if(checkwin()=='X'){
		cout<<"Player 1 Wins"<<endl;
		break;
	}
	else if( checkwin()=='O'){
		cout<<"Player 2 Wins"<<endl;
		break;
	}
	a++;
	if(a>=2){
		a=a%2;
	}
}
	return 0;
}

void Draw(){
	system("cls");
	cout<<" TIC TAC TOE "<<endl;
	cout<<endl;
	cout<<"Player1 = X & Player2 = O"<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
		cout<<" "<<Board[i][j]<<" ";	
		}
		cout<<" "<<endl;
	}
	
}

char checkwin(){
	char z;
	if (Board[0][0] == Board[0][1] && Board[0][1] == Board[0][2] && Board[0][0] == Board[0][2]){
		z = Board[0][0];
	}
	else if (Board[1][0] == Board[1][1] && Board[1][1] == Board[1][2] && Board[1][0] == Board[1][2]){
		z = Board[1][0];
	}
	else if (Board[2][0] == Board[2][1] && Board[2][1] == Board[2][2] && Board[2][0] == Board[2][2]){
		z = Board[2][0];
	}
	else if (Board[0][0] == Board[1][0] && Board[1][0] == Board[2][0] && Board[0][0] == Board[2][0]){
		z = Board[0][0];
	}
	else if (Board[0][1] == Board[1][1] && Board[1][1] == Board[2][1] && Board[0][1] == Board[2][1]){
		z = Board[0][1];
	}
	else if (Board[0][2] == Board[1][2] && Board[1][2] == Board[2][2] && Board[0][2] == Board[2][2]){
		z = Board[0][2];
	}
	else if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] == Board[2][2]){
		z = Board[0][0];
	}
	else if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] == Board[2][0]){
		z = Board[0][2];
	}
	return z;
}

char input(int x){
	int player;
	cout<<"Player : ";
	cin>>player;
	//taking input from the pjfjdjfkldjfljf
	if(player == 1){
		if(x==0){
			Board[0][0]=Player[0];
		}
		else{
			Board[0][0]=Player[1];
		}
	}
	
	else if(player == 2){
		if(x==0){
			Board[0][1]=Player[0];
		}
		else{
			Board[0][1]=Player[1];
		}
	}
	
	else if(player == 3){
		if(x==0){
			Board[0][2]=Player[0];
		}
		else{
			Board[0][2]=Player[1];
		}
	}
	
	else if(player == 4){
		if(x==0){
			Board[1][0]=Player[0];
		}
		else{
			Board[1][0]=Player[1];
		}
	}
	
	else if(player == 5){
		if(x==0){
			Board[1][1]=Player[0];
		}
		else{
			Board[1][1]=Player[1];
		}
	}
	
	else if(player == 6){
		if(x==0){
			Board[1][2]=Player[0];
		}
		else{
			Board[1][2]=Player[1];
		}
	}
	
	else if(player == 7){
		if(x==0){
			Board[2][0]=Player[0];
		}
		else{
			Board[2][0]=Player[1];
		}
	}
	
	else if(player == 8){
		if(x==0){
			Board[2][1]=Player[0];
		}
		else{
			Board[2][1]=Player[1];
		}
	}
	
	else if(player == 9){
		if(x==0){
			Board[2][2]=Player[0];
		}
		else{
			Board[2][2]=Player[1];
		}
	}	
	return player;
}
