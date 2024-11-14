# ticket-restaurant
Ce projet en C permet de générer un ticket d'addition pour un restaurant. L'utilisateur peut entrer le nom des articles, leur quantité, et leur prix unitaire, puis obtenir un ticket détaillé incluant les taxes et le total à payer.

## Fonctionnalités
* Saisie du nombre d'articles
* Ajout du nom, de la quantité et du prix unitaire de chaque article
* Calcul automatique du sous-total et de la taxe (1%)
* Affichage du ticket avec les articles, le sous-total, la taxe et le total final
## Explication du Code
Variables :
nombreArticles pour le nombre d'articles.
total, taxe, et totalAvecTaxe pour les calculs du coût.
tauxTaxe définit la taxe (ici, 1%).

Entrée des données :
Pour chaque article, l'utilisateur entre son nom, sa quantité, et son prix unitaire.
Le programme calcule le coût total pour chaque article en multipliant la quantité par le prix.

Calculs :
taxe est calculée en appliquant tauxTaxe au total.
totalAvecTaxe est le total final avec la taxe.
Affichage du Ticket :

Le ticket affiche chaque article avec sa quantité, son coût total, le sous-total, la taxe, et le total final à payer.
