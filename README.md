# 🤖 Solar Panel Cleaning Robot

## 📝 Description :
Ce projet consiste à concevoir et réaliser un robot automatique pour le nettoyage des panneaux solaires afin d'améliorer leur rendement.

## 👩‍💻 Réalisé par :
- El Azimani Chaimae
- Drissi Salma

## 📌 Problématique :
L'accumulation de poussière sur les panneaux solaires peut réduire leur rendement jusqu'à 79%. Ce robot propose une solution automatique et économique pour résoudre ce problème.

## 🎯 Objectifs :
- Réduire l’impact de la poussière sur les panneaux
- Automatiser le nettoyage
- Maintenir un rendement énergétique élevé

## ⚙️ Fonctionnement :
Le système fonctionne en deux modes :

-**Mode Automatique** : S'active automatiquement dès que le système détecte une baisse de rendement                          des panneaux solaires due à la saleté. Le nettoyage s'effectue de bas en haut                        et s'arrête grâce aux capteurs de fin de course.

-**Mode Manuel** : Enclenché par un bouton poussoir, il permet à l'utilisateur de contrôler                             directement les mouvements du robot.

## 🛠️ Partie Matérielle (Hardware) :
---
## 🔌 Composants utilisés :

- **Carte Arduino** (unité de traitement)
- **3 moteurs DC** :
  - 2 pour déplacement
  - 1 pour la brosse
- **Capteurs** :
  - Capteurs fin de course
  - Capteur infrarouge
- **Driver moteur L298N**
- **Alimentation (batterie)**
- **Panneau Solaire 10W**

## 🔗 Schéma synoptique :
![Schéma synoptique](Schema/Synoptique/shema.png)

## 🔌 Schéma de simulation (Proteus) :
![Simulation Proteus](Schema/Electronique/simulation.png)

## 💻 Partie Logicielle (Software) :

## 🧾 Outils utilisés :
| Logiciels | Utilisations |
|---|---|
| **Arduino IDE**  | Programmation du microcontrôleur |
| **Proteus ISIS** | Simulation du schéma électrique |
| **CoolTerm** | Monitoring série |

## ⚙️ Logique et Organigramme :

## 🔄 Mode Automatique :
![Organigramme automatique](Organigramme/Mode_Automatique.png)

## 🎮 Mode Manuel :
![Organigramme manuel](Organigramme/Mode_Manuel.png)

## 🔨 Réalisation du Prototype :

### Étape 1 — Assemblage mécanique :
![Prototype forme](Realisation_Finale/1.png)

### Étape 2 — Test sur plaque d'essai :
![Test plaque essai](Realisation_Finale/2.png)

### Étape 3 — Soudage des composants :
<p float="left">
  <img src="Realisation_Finale/3.png" width="45%"/>
  <img src="Realisation_Finale/4.png" width="45%"/>
</p>

### Étape 4 — Réalisation Finale :
![Realisation Finale](Realisation_Finale/Realisation_Finale.png)


## 📊 Résultats :
Tests effectués sur installation PV réelle :
- Nettoyage efficace validé
- Rendement restauré après nettoyage
- Deux modes de fonctionnement opérationnels

## 🚀 Améliorations possibles :
- Intégration d’un panneau solaire pour rendre le robot autonome en énergie.
- Ajout d’un module IoT (ESP8266 / ESP32) pour contrôler le robot à distance.
- Développement d’une application mobile pour le pilotage et le suivi.
- Utilisation de l’intelligence artificielle pour optimiser le nettoyage (détection avancée de saleté).
  
## 🚀 Conclusion
Solution simple, efficace et économique pour le nettoyage des panneaux solaires.
