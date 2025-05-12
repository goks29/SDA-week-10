#include "BinSTree.h"

infotype GetAkar(BinTree P) {
}
BinTree GetLeft(BinTree P) {
}
BinTree GetRight(BinTree P) {
}

address Alokasi(infotype X) {
    address P = (address) malloc (sizeof(Node));
    if (P != Nil) {
        P->info = X;
        P->left = Nil;
        P->right = Nil;
    } else {
        printf("Alokasi gagal");
        return 0;
    }
    return P;
}

BinTree Tree(infotype Akar, BinTree L, BinTree R) {
    address P = Alokasi(Akar);
    if (P != Nil) {
        P->left = L;
        P->right = R;
    } else {
        P = Nil;
    }

    return P;
}

void MakeTree(infotype Akar, BinTree L, BinTree R, BinTree *P) {
    (*P) = Tree(Akar,L,R);
}

void BuildTree(BinTree *P) {

}

boolean IsUnerLeft(BinTree P) {
    if (P->left != Nil) {
        return true;
    } else {
        return false;
    }
}

boolean IsUnerRight(BinTree P) {
    if (P->right != Nil) {
        return true;
    } else {
        return false;
    }
}

boolean IsBiner(BinTree P) {
    if (P->left != Nil && P->right != Nil) {
        return true;
    } else {
        return false;
    }
}

boolean IsEmpty(BinTree P) {
    if (P != Nil) {
        return false;
    } else {
        return true;
    }
}

void PreOrder(BinTree P) {
    if (P == Nil) {
        return;
    } else {
        printf("%c -> ",P->info);
        PreOrder(P->left);
        PreOrder(P->right);
    } 
}

void InOrder(BinTree P) {
    if (P == Nil) {
        return;
    } else {
        InOrder(P->left);
        printf("%c -> ",P->info);
        InOrder(P->right);
    }
}

void PostOrder(BinTree P) {
    if (P == Nil) {
        return;
    } else {
        PostOrder(P->left);
        PostOrder(P->right);
        printf("%c -> ", P->info);
    }
}

void PrintTree(BinTree P, int h) {
    int i;

    if(P == Nil){
        for(i = 0; i < h; i++) printf(" ");
        printf("Kosong\n"); 
        return;
    }

    h += 5;
    PrintTree(P->right, h);

    for(i = 5; i < h; i++) printf(" ");
    printf("%c\n", P->info); 

    PrintTree(P->left, h);
}

void LevelOrder(BinTree P) {
    if (P == Nil) {
        return;
    }

    BinTree queue[100], current;
    int front = 0, rear = 0;

    rear++;
    queue[rear] = P;

    while (front < rear) {
        front++;
        current = queue[front];
        printf("%c -> ",current->info);
        
        if (current->left != Nil) {
            rear++;
            queue[rear] = current->left;
        }

        if (current->right != Nil) {
            rear++;
            queue[rear] = current->right;
        }
    }
    
}

boolean Search(BinTree P, infotype X) {
    if (P == Nil) {
        return false;
    } else {
        if (P->info == X) {
            return true;
        } else {
            return Search(P->left,X) || Search(P->right,X);
        }
    }


}

int nbElmt(BinTree P) {

}

int nbDaun(BinTree P) {

    if (P == Nil) {
        return 0;
    }

    if (P->left == Nil && P->right == Nil) {
        return 1;
    }

    return nbDaun(P->left) + nbDaun(P->right);
}

boolean IsSkewLeft(BinTree P) {
}

boolean IsSkewRight(BinTree P) {
}

int Level(BinTree P, infotype X) {
    int i;

    if (P == Nil) {
        return 0;
    }

    if (P->info == X) {
        return 1;
    }

    int Left = Level(P->left, X);
    if (Left > 0) {
        return Left + 1;
    }

    int Right = Level(P->right, X);
    if (Right > 0) {
        return Right + 1;
    }

    return 0;
}

int Depth(BinTree P) {
    if(P == Nil){
        return 0;
    }
    int leftdepth = Depth(P->left);
    int rightdepth = Depth(P->right);
    return 1 + (leftdepth > rightdepth ? leftdepth : rightdepth);
}

int Max(BinTree P,infotype Data1, infotype Data2) {
    int data1 = Level(P,Data1);
    int data2 = Level(P,Data2);

    if (Data1 == 0 || Data2 == 0) {
        return 0;
    }
    
    if (Data1 == Data2) {
        return 0;
    } else if (Data1 >Data2){
        return Data1;
    } else {
        return Data2;
    }
}



void AddDaunTerkiri(BinTree *P, infotype X) {
    if ((*P) == Nil){
        (*P) = Alokasi(X);
    } else {
        if ((*P)->left == Nil) {
            (*P)->left = Alokasi(X);
        } else {
            AddDaunTerkiri(&(*P)->left, X);
        }
    }
}

void AddDaun(BinTree *P, infotype X, infotype Y, boolean Kiri) {
    address N;

    if ((*P) == Nil) {
        return;
    } 

    if((*P)->info == X){
        if (Kiri && (*P)->left == Nil) {
            N = Alokasi(Y);
            if(N != Nil){
                (*P)->left = N;
            }
        } else if (!Kiri && (*P)->right == Nil) {
            N = Alokasi(Y);
            if(N != Nil){
                (*P)->right = N;
            }
        }
    }else {
        AddDaun(&(*P)->left, X, Y, Kiri);
        AddDaun(&(*P)->right, X, Y, Kiri);
    }
}

void DelDaunTerkiri(BinTree *T, infotype *X) {

}

void DelDaun(BinTree *T, infotype X) {

}


ListOfNode MakeListDaun(BinTree P) {

}

ListOfNode MakeListPreOrder(BinTree P) {

}

ListOfNode MakeListLevel(BinTree P, int N) {

}


BinTree BuildBalanceTree(int N) {

}

boolean BSearch(BinTree P, infotype X) {
    if (P == Nil) {
        return false;
    }

    if (P->info == X) {
        return true;
    } else {
        return BSearch(P->left,X) || BSearch(P->right,X);
    }
}

address BinSearch(BinTree P, infotype X) {

}

void InsSearch(BinTree *P, infotype X) {

}


void DestroyTree(BinTree *P) {

}

void DelBTree(BinTree *P, infotype X) {

}

void DelNode(BinTree *P) {

}

void DeAlokasi(address P) {

}

void StringToMorse(address P, char c, char *path, int depth) {
    if (P == Nil) {
        return;
    } 
    
    if (P->info == c) {
        for (int i = 0; i < depth; i++) {
            printf("%c", path[i]);
        }
        printf (" ");
        printf (" ");
        return;
    }

    path[depth] = '.';
    StringToMorse(P->left,c,path,depth + 1);

    path[depth] = '-';
    StringToMorse(P->right,c,path,depth + 1);
}

void MorseToChar(address P, const char* node, int depth) {
    if (P == Nil) {
        return;
    }

    // Jika sudah mencapai akhir kode morse
    if (node[depth] == '\0') {
        printf("%c", P->info);
        return;
    }

    // Rekursi berdasarkan simbol morse
    if (node[depth] == '.') {
        MorseToChar(P->left, node, depth + 1);
    } else if (node[depth] == '-') {
        MorseToChar(P->right, node, depth + 1);
    }
}


    

