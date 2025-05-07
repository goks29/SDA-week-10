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
        printf("[.]\n"); 
        return;
    }

    h += 5;
    PrintTree(P->right, h);

    for(i = 5; i < h; i++) printf(" ");
    printf("%c\n", P->info); 

    PrintTree(P->left, h);
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
    
}

boolean IsSkewLeft(BinTree P) {
}

boolean IsSkewRight(BinTree P) {
}

int Level(BinTree P, infotype X) {
}

int Depth(BinTree P) {
}

int Max(infotype Data1, infotype Data2) {
}


void AddDaunTerkiri(BinTree *P, infotype X) {
    
}

void AddDaun(BinTree *P, infotype X, infotype Y, boolean Kiri) {
    
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
