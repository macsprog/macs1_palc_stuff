1) remplacer toutes les constantes du programme par des variables constantes ou des macros 

2) Répartir les portions du code disponibles dans le fichier monolithic.c dans plusieurs fichiers.

On utilisera la structure suivantes:

* main.c: 			contient la routine main()
* routines.c: 		contient toutes les fonctions excepté main()
* routines.h: 		contient le prototype de toutes les fonctions excepté main()
* myTypes.h: 		contient toutes les définitions de type
* glob.h:			contient les déclarations de constantes et de macros
* glob.c: 			contient les définitions de constantes
* masterHeader.h:	gère l'inclusion de tous les headers

3) Ecrire un fichier makefile qui:
	- crée une bibliothèque statique libproject.a à partir des fichiers:
		* routines.c
		* glob.c

	- génère l'exécutable app.exe à partir de:
		* libproject.a
		* main.c
