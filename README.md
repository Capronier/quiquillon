# quiquillon


Etape 1 Construction de la map aléatoire

Les fichiers du projet:
    main.cc : Un programme principal avec le main
    Makefile : permet de compiler le programme avec la commande make ou make all (supprime en plus les .o créé à l'issus de la compilation)
    land.hh : classe virtuelle représentant l'ensemble de la map
    	beach.hh: classe fille de mapi,
    	city.hh: classe fille de mapi,
    	desert.hh: classe fille de mapi, classe virtuelle,
    		ice.hh : classe fille de desert,
    		sand.hh : classe fille de desert,
    	forest.hh : classe fille de mapi,
    	mountain.hh: classe fille de mapi,
    	plain.hh: classe fille de mapi,
    	sea.hh : classe fille de mapi,
    mapi.hh : permet d'avoir l'ensemble des land


Commande git pratique:
-->mettre à jour le répertoire local
git pull
-->ajout d'un fichier non considéré par le git (qui vient d'être créé)
git add <fichier>
-->log, enregistre les modifs d'un fichier
git commit -m "nom du log"

 ou git commit -am "nom du log" si il s'agit juste d'une modification d'un fichier (le fichier est déjà pris en considération par git)

-->mise des commits locaux sur le serveur distant
git push

-->Vérif du repertoire
git status

-->revenir à la dernière version commit mais on voit juste ce qu'il y a pas de modif possible
git checkout <fichier>
--> revenir au dernier commit et supp toutes modifs
git reset HEAD --hard

-->Création d'une branche et basculement vers celle ci 
git checkout -b <nom>

-->Vérification de la branche sur laquelle on est 
git branch -v

-->basculement vers une branche existante 
git checkout <nom>
 git checkout <nom_du_log>

-->avoir le nom d'un log
git log

 git log --all --graph (à verif mais c'est pour avoir toute la gestion du repertoire en visu)
-->push de la branche sur le server 
git push -u origin <nom>