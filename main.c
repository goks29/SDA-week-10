    #include <stdio.h>
    #include "BinSTree.h"

    int main(){

        int PilihMenu;
        BinTree tree;

            while(1){
                printf("\n==========================\n");
                printf(
                    " 1. Insert Node\n"
                    " 2. Print Tree\n"
                    " 3. Traversal PreOrder\n"
                    " 4. Traversal InOrder\n"
                    " 5. Traversal PostOrder\n"
                    " 6. Traversal Level Order\n"
                    " 7. Search Node Tree\n"
                    " 8. Jumlah Daun/Leaf Tree\n"
                    " 9. Mencari kedalaman Tree\n"
                    "10. Membandingkan 2 Node Tree\n"
                    "11. Exit\n");
                printf("Pilih Menu: ");
                scanf("%d", &PilihMenu);

                switch (PilihMenu)
                {
                case 1:

                    break;
                case 2:
                    PrintTree(,0);
                    break;
                case 3:

                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;
                case 11:
                    return 0;
                    break;
                default:
                    break;
                }
            }  
    }

