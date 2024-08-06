#include <iostream>

using namespace std;

struct stru{
    int filesize;
    string titulo,artista;
    int dura;

};

void carga (stru m[],int tama){
    
    for (int i = 0; i < tama; i++) {
        cout << "Ingrese el nombre de la canción número " << i + 1  << ": " << endl;
        cin >> m[i].titulo;
        cout << "Ingrese el artista de la misma"  << endl;
        cin >> m[i].artista;
        cout << "Ingrese su duración " << endl;
        cin >> m[i].dura;
        cout << "Ingrese su tamaño de fichero "  << endl;
        cin >> m[i].filesize;
    }

}

void cargamas (stru m[], int &tama){

    cout << "Ingrese el nombre de la canción número " << tama + 1  << ": " << endl;
    cin >> m[tama].titulo;

    bool flag = false;
    for (int i = 0; i<tama ; i++){
        if (m[i].titulo.find(m[tama].titulo) != -1){
            cout << "la cancion ya existe"<<endl;
            flag = true;
        }
    }

    if (flag == false){

        cout << "Ingrese el artista de la misma"  << endl;
        cin >> m[tama].artista;
        cout << "Ingrese su duración " << endl;
        cin >> m[tama].dura;
        cout << "Ingrese su tamaño de fichero "  << endl;
        cin >> m[tama].filesize;
        tama = tama+1;

    }  


}

void finding (stru m[], int tama){

    string algo;
    bool flag;
    cout<< "ingrese la busqueda: "<<endl;
    cin>> algo;
    cout << "resultados encontrados: "<<endl;

    for (int i=0 ; i<tama ; i++){
        if (m[i].titulo.find(algo) != -1){
            cout<< "- Título: "<<m[i].titulo<<". Artista: "<<m[i].titulo<<". Duración: "<<m[i].dura<< " Tamaño: "<<m[i].filesize<<endl;
            flag = true;
        }
        else{
            if (m[i].artista.find(algo) != -1){
            cout<< "- Título: "<<m[i].titulo<<". Artista: "<<m[i].titulo<<". Duración: "<<m[i].dura<< " Tamaño: "<<m[i].filesize<<endl;
            }
            flag= true;
        } 
    }
    if (flag == false){
        cout << "no se han encontrado coincidencias para la búsqueda"<<endl;
    }
    
}

void show (stru m[], int tama){
    for (int i = 0; i < tama; i++) {
        cout << "Canción número " << i + 1  << ": ";
        cout<< m[i].titulo<<endl;;
        cout << "Artista de la misma: " ;
        cout << m[i].artista <<endl;
        cout << "Su duración: ";
        cout<< m[i].dura<<endl;
        cout << "Tamaño de fichero: " ;
        cout<< m[i].filesize <<endl;
        if (i != tama -1){
            cout << "******************"<<endl;
        }
    }
}

void menu (stru m[],int n){
    int sino = 1;
    int num = 7;
    while (sino == 1){

    cout << "que desea hacer?"<<endl;
    
    cout<< "1- Agregar una nueva canción"<<endl;
    cout <<"2- Mostrar todas las canciones de la lista"<<endl;
    cout<< "3- Buscar por texto"<<endl;

    while (num != 1 and num != 2 and num != 3){
        cin>>num;

        if (num == 1){
            cargamas(m,n);
        }
        else if (num == 2){
            show (m,n);
        }
        else if (num == 3){
            finding(m,n);
        }
        else {
        cout << "ingresar un parámetro válido (1 / 2 / 3)"<<endl;
        }
    }
        cout << "desea volver al menu? (1 = si // 2 = no)"<<endl;
        cin >> sino;
        num = 7;

    }

}

int main(){
    stru m[100];
    int n;
    
    cout << "REPRODUCTOR DE MP3"<<endl;
    cout<< "cuantas canciones se cargarán? (máximo 100)"<<endl;
    cin>> n; 
    carga(m,n);

    menu (m,n);


}
