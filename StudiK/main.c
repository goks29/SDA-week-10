        #include <stdio.h>
        #include "BinSTree.h"

        int main(){

            int PilihMenu, PilihArah, JmlDaun, banding1, banding2, penampungbanding, hasildepth;
            BinTree tree = Nil;
            char InputUser, searchNode, Parents, child;
            char input[100],path[100];;
            boolean Search, arah;
            hasildepth = 0;

                while(1){
                    printf("\n==========================\n");
                    printf(
                        " 1. Insert Node\n"
                        " 2. Print Tree\n"
                        " 3. Traversal InOrder\n"
                        " 4. Strings to Morse\n"  
                        " 5. Morse to Strings\n" 
                        " 6. Exit\n");
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
                        InOrder(tree);
                        break;
                    case 4:
                        printf("Masukkan kalimat (huruf kapital tanpa spasi/menggunakan _): ");
                        scanf("%s", input);

                        printf("Kode Morse: ");
                        for (int i = 0; i < strlen(input); i++) {
                            if (input[i] >= 'a' && input[i] <= 'z') {
                                input[i] = input[i] - 32; 
                            }

                            if ((input[i] >= 'A' && input[i] <= 'Z') || input[i] == '_') {
                                StringToMorse(tree, input[i], path, 0);
                            } else {
                                printf("? "); 
                            }
                        }
                        printf("\n");
                        break;
                    case 5:
                        break;
                    case 6:
                        return 0;
                        break;
                    default:
                        break;
                    }
                }  
        }

