# 🤖 Robot de Nettoyage des Panneaux Solaires (Solar Panel Cleaning Robot)

## 📝 Description du Projet
[cite_start]Ce projet, réalisé dans le cadre d'un Projet de Fin d'Études (PFE) à l'EST Meknès, vise à concevoir et réaliser un robot (autonome et manuel) pour le nettoyage des panneaux solaires[cite: 1, 2, 67]. [cite_start]L'accumulation de poussière réduit considérablement le rendement des panneaux photovoltaïques[cite: 163, 168]. [cite_start]Notre solution propose un système de nettoyage abordable, basé sur un support robotisé, pour optimiser la production d'énergie[cite: 31, 187].

![Prototype du Robot](images/Figure_40_La_realisation_finale.png)
*(Note : Insérez ici la photo de la Figure 40 de votre rapport)*

## ✨ Fonctionnalités
[cite_start]Le robot a été conçu pour éviter toute détérioration des panneaux tout en assurant un nettoyage optimal[cite: 190]. Il propose deux modes de fonctionnement :
- [cite_start]**Mode Automatique** : S'active automatiquement dès que le système détecte une baisse de rendement des panneaux solaires due à la saleté[cite: 192]. [cite_start]Le nettoyage s'effectue de bas en haut et s'arrête grâce aux capteurs de fin de course[cite: 193].
- [cite_start]**Mode Manuel** : Enclenché par un bouton poussoir ou télécommande, il permet à l'utilisateur de contrôler directement les mouvements du robot[cite: 194].

## 🛠️ Partie Matérielle (Hardware)
[cite_start]L'architecture électronique embarquée de notre système repose sur les composants suivants[cite: 43, 44, 45, 46]:

1. [cite_start]**Carte Arduino UNO** : Le "cerveau" du robot, qui traite les données des capteurs et gère la logique de contrôle[cite: 44, 197].
   ![Carte Arduino UNO](images/Figure_18_Broches_Arduino.png) 
2. [cite_start]**Moteurs à Courant Continu (DC)** : Assurent le déplacement du robot sur la surface du panneau solaire et actionnent le mécanisme de nettoyage[cite: 45].
   ![Moteur DC](images/Figure_19_Moteur_DC.png)
3. [cite_start]**Module Pilote L298N (Pont en H)** : Circuit intégré indispensable pour contrôler le sens de rotation et la vitesse des moteurs DC[cite: 45].
   ![Module L298N](images/Figure_21_L298N.png)
4. [cite_start]**Capteurs de fin de course** : Détectent les extrémités du panneau pour stopper le robot, évitant ainsi les chutes et définissant la zone de travail[cite: 45].
   ![Capteur Fin de Course](images/Figure_22_Capteur_Fin_Course.png)
5. [cite_start]**Récepteur Infrarouge (IR)** : Permet la communication à distance avec le robot (pour le mode manuel).
6. [cite_start]**Alimentation Autonome** : Le système est alimenté par des piles rechargeables (3.7V 18650), elles-mêmes rechargées par un petit panneau solaire dédié de 10W.

## 💻 Partie Logicielle (Software)
[cite_start]Le développement du projet s'est appuyé sur trois outils logiciels principaux[cite: 46, 47, 48, 49]:

1. **Arduino IDE (C/C++)** :
   - [cite_start]Utilisé pour écrire et téléverser le code source.
   - [cite_start]Gère l'algorithme de détection de la baisse de tension, le basculement entre les modes, et le contrôle moteur[cite: 47, 196, 197].
2. **Proteus Professional (ISIS)** :
   - [cite_start]Utilisé pour réaliser le schéma électrique et simuler virtuellement le fonctionnement du circuit avant sa réalisation sur plaque d'essai[cite: 48, 54].
   ![Schéma de Simulation Proteus](images/Schema_Electrique.png)
3. **CoolTerm** :
   - [cite_start]Logiciel utilisé pour l'acquisition des données via communication série, permettant de monitorer les baisses de tension et le rendement en temps réel lors des expérimentations[cite: 49].
   ![Interface CoolTerm](images/Figure_26_CoolTerm.png)

## ⚙️ Logique et Organigramme
L'algorithme principal repose sur la comparaison en continu des tensions électriques pour estimer le taux d'accumulation de la poussière.

![Organigramme du Nettoyeur](images/Organigramme.png)
*(Note : Insérez ici la capture de l'organigramme de la page 31 de votre rapport)*

## 🚀 Installation & Utilisation
1. Clonez ce dépôt sur votre machine locale :
   ```bash
   git clone [https://github.com/votre-nom-utilisateur/votre-repo.git](https://github.com/votre-nom-utilisateur/votre-repo.git)
