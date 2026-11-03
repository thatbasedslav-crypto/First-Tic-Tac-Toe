#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> row1{" "," "," "};
std::vector<std::string> row2{" "," "," "};
std::vector<std::string> row3{" "," "," "};
char choice1pl;
char choice2pl;
int rowOne;
int rowTwo;
int columnOne;
int columnTwo;
bool gamerunning = true;
bool gamestopped = false;
bool gameerror = false;

void printboard() {
    std::cout<<"+---+---+---+"<<"\n";
    std::cout<<"| "<<row1[0]<<" | "<<row1[1]<<" | "<<row1[2]<<" |"<<"\n";
    std::cout<<"+---+---+---+"<<"\n";
    std::cout<<"| "<<row2[0]<<" | "<<row2[1]<<" | "<<row2[2]<<" |"<<"\n";
    std::cout<<"+---+---+---+"<<"\n";
    std::cout<<"| "<<row3[0]<<" | "<<row3[1]<<" | "<<row3[2]<<" |"<<"\n";
    std::cout<<"+---+---+---+"<<"\n";
}

void askgame() {
    std::cout<<"Player 1, do you want ot be X or O? ";
    std::cin>>choice1pl;
    switch (choice1pl) {
        case 'X':
        case 'x': 
        choice1pl = 'X';
        break;
        case 'O':
        case 'o':
        choice1pl = 'O';
        break;
        default:
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"An error occured when trying to fetch players inputs. RESTART THE GAME!!!";
        choice2pl = '-';
        gameerror = true;

    }
}
void askinput1() {
    std::cout<<"Player 1, your turn"<<"\n";
    std::cout<<"Row?: ";
    std::cin>>rowOne;"\n";
    std::cout<<"Column?: ";
    std::cin>>columnOne;"\n";
    if (rowOne==0) {
        row1[columnOne] = choice1pl;
    }
    else if (rowOne==1) {
        row2[columnOne] = choice1pl;
    }
    else if (rowOne==2) {
        row3[columnOne] = choice1pl;
    } else {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Input out of range. RESTART THE GAME!!!"<<"\n\n";
        gameerror = true;
    }
}
void askinput2() {
    std::cout<<"Player 2, your turn"<<"\n";
    std::cout<<"Row?: ";
    std::cin>>rowTwo;"\n";
    std::cout<<"Column?: ";
    std::cin>>columnTwo;"\n";
    if (rowTwo==0) {
        row1[columnTwo] = choice2pl;
    }
    else if (rowTwo==1) {
        row2[columnTwo] = choice2pl;
    }
    else if (rowTwo==2) {
        row3[columnTwo] = choice2pl;
    } else {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Input out of range. RESTART THE GAME!!!"<<"\n\n";
        gameerror = true;
    }
    if (rowOne==rowTwo && columnOne==columnTwo) {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Invalid input. RESTART THE GAME!!!"<<"\n\n";
        gameerror=true;
    }
}
void checkwin() {
    if (row1[0]==row1[1] && row1[1]==row1[2] && row1[0]!=" " && row1[1]!=" " && row1[2]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[0]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row2[0]==row2[1] && row2[1]==row2[2] && row2[0]!=" " && row2[1]!=" " && row2[2]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row2[0]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row3[0]==row3[1] && row3[1]==row3[2] && row3[0]!=" " && row3[1]!=" " && row3[2]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row3[0]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row1[0]==row2[0] && row2[0]==row3[0] && row1[0]!=" " && row2[0]!=" " && row3[0]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[0]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row1[1]==row2[1] && row2[1]==row3[1] && row1[0]!=" " && row2[0]!=" " && row3[0]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[1]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row1[2]==row2[2] && row2[2]==row3[2] && row1[0]!=" " && row2[0]!=" " && row3[0]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[2]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row1[0]==row2[1] && row2[1]==row3[2] && row1[0]!=" " && row2[1]!=" " && row3[2]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[0]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    }
    else if (row1[2]==row2[1] && row2[1]==row3[0] && row1[2]!=" " && row1[1]!=" " && row1[0]!=" ") {
        std::cout<<std::endl;
        std::cout<<"Player "<<row1[2]<<" won!!!!!!!!!"<<"\n";
        gamerunning = false;
        gamestopped = true;
    } else {
        gamerunning = true;
        gamestopped = false;
    }
}

int main() {
    std::cout<<"\n";
    std::cout<<"===WELCOME TO THE TIC TAC TOE GAME==="<<"\n\n";
    std::cout<<"                Rules: "<<"\n\n";
    std::cout<<"1. For rows, input 1 or 2 or 3"<<"\n";
    std::cout<<"2. For columns, input 0 or 1 or 2"<<"\n\n";
    askgame();
    while (gamerunning, !gameerror) {
        printboard();
        askinput1();
        askinput2();
        checkwin();
        if (gamestopped || gameerror) {
            break;
        }
    }
    return 0;
}
