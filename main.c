        #include <stdio.h>
        #include "BinSTree.h"

        int main(){

            int PilihMenu, PilihArah, JmlDaun, banding1, banding2, penampungbanding, hasildepth;
            BinTree tree = Nil;
            char InputUser, searchNode, Parents, child;
            boolean Search, arah;
            hasildepth = 0;

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
                        " 9. Mencari kedalaman Tree\n" //
                        "10. Membandingkan 2 Node Tree\n" 
                        "11. Exit\n");
                    printf("Pilih Menu: ");
                    scanf("%d", &PilihMenu);

                    switch (PilihMenu)
                    {
                    case 1:
                        if(tree == Nil){
                            printf("\nMasukan Node root : ");
                            scanf(" %c",&InputUser);
                            getchar();

                            MakeTree(InputUser,Nil,Nil,&tree);
                        }else{
                            PrintTree(tree,0);
                            printf("\nMasukan Node Parents yang ingin ditambahkan anaknya :");
                            scanf(" %c",&Parents);
                            getchar();
                            
                            printf("\nMasukan Node Anak : ");
                            scanf(" %c",&child);
                            getchar();

                            printf("\nPilih arah anak Kiri = 1, kanan = 2 : ");
                            scanf(" %d",&PilihArah);
                            if(PilihArah == 1){
                                arah = true;
                            }else{
                                arah = false;
                            }
                            AddDaun(&tree,Parents,child,arah);
                        }
                        break;
                    case 2:
                        PrintTree(tree,0);
                        break;
                    case 3:
                        PrintTree(tree,0);
                        PreOrder(tree);
                        break;
                    case 4:
                        PrintTree(tree,0);
                        InOrder(tree);
                        break;
                    case 5:
                        PrintTree(tree,0);
                        PostOrder(tree);
                        break;
                    case 6:
                        PrintTree(tree,0);
                        LevelOrder(tree);
                        break;
                    case 7:
                        printf("Masukan info node yang ingin dicari : ");
                        scanf(" %c",&searchNode);
                        getchar();
                        Search = (tree,searchNode);

                        if (Search) {
                            printf("Node %c ada",searchNode);
                        } else {
                            printf("Node %c tidak ada", searchNode);
                        }
                        break;
                    case 8:
                        JmlDaun = nbDaun(tree);
                        printf("Jumlah Daun/Leaf pada Tree adalah : %d",JmlDaun);
                        break;
                    case 9:
                        PrintTree(tree,0);
                        printf("Depth pohon: %d\n", Depth(tree) - 1);
                        break;
                    case 10:
                        PrintTree(tree,0);
                        printf("Masukan node yang ingin di bandingkan? (1) : ");
                        scanf(" %c",&banding1);
                        getchar();
    
                        printf("Masukan node yang ingin di bandingkan? (2) : ");
                        scanf("%c",&banding2);
                        getchar();
    
                        penampungbanding = Max(tree,banding1,banding2);
    
                        if (penampungbanding == '\0') {
                            printf("Salah satu node yang dibandingkan tidak ada \n");
                        } else if (penampungbanding == 0) {
                            printf("Node yang dibandingkan berada di level yang sama \n");
                        } else {
                            printf("%c adalah node dengan level terdalam \n", penampungbanding);
                        }
                        break;
                    case 11:
                        return 0;
                        break;
                    default:
                        break;
                    }
                }  
        }

