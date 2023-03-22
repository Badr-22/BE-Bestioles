# BE---Bestioles

Ce code permet de simuler un écosystème dans lequel différents organismes (bestioles) naissent, interagissent et meurent.

Les bestioles interagissent avec l'environnement, dans ce cas, un aquarium, nous supposons donc que l'environnement est aqueux ou liquide. Pour cette raison, les bestioles ont la possibilité de se déplacer en fonction de leurs capacités physiques, de sorte que chaque bestiole aura une vitesse de déplacement maximale.

En outre, les bestioles peuvent avoir différents types de comportement. Pour cette simulation, nous prenons quatre types de comportement :

* Grégaire : un type de bestiole qui adapte son orientation en fonction des bestioles qu'elle peut détecter autour d'elle.

* Peureuse : ce type de bestiole fuit les groupes de grosses bestioles.

* Kamikaze : ce sont des bestioles qui cherchent à percuter les bestioles les plus proches pour les blesser.

* Prévoyant : ces bestioles cherchent à éviter les collisions avec les bestioles environnantes.

Les bestioles peuvent utiliser leurs sens (vue, ouïe) pour identifier leurs voisins. Les bêtes peuvent avoir un, deux ou aucun sens. Chaque sens peut détecter dans une distance modélisée en cercle (ouïe) ou en demi-arc (vue). 

De même, les bêtes peuvent être "nées" ou créées avec certains artefacts qui leur permettent d'amplifier certaines caractéristiques physiques comme la vitesse ("nagetoires"), la protection ("carapace") ou la capacité à ne pas être repérées par leurs voisins ("camouflage").
