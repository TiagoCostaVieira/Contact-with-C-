#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    srand(time(NULL));
    unordered_map <int, string> my_map ={{0,"cara"}, {1,"coroa"}};

    cout << "Bem vindo ao cara ou coroa!" << endl;

    while(true){   

        int users_choice;
        int users_result = rand() %2;

        cout << "Escolha cara ou coroa (cara =0 e coroa = 1)";
        cin >> users_choice;

        if(my_map[users_result] == "cara" && users_choice == 0){
            cout <<"parabens você ganhou! Deu cara." << endl;
        }else if(my_map[users_result] == "coroa" && users_choice == 1){
            cout << "parabens você ganhou! Deu coroa" << endl;
        }else{
            cout << "Você perdeu! O resultado foi " << endl;
        }if(users_result == 0){
            cout << "cara" << endl;
        }else{
            cout <<"coroa" << endl;
        }
        char play_again;
        cout << "Gostaria de jogar novamente(s/n)";
        cin >> play_again;

        if(play_again !='s'){
            break;
        }
    }
    cout <<"obrigado por jogar!" <<endl;
    return 0;
}