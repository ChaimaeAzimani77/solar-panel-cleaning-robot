# 🤖 Robot de Nettoyage de Panneaux Solaires

> Projet de Fin d'Études — École Supérieure de Technologie de Meknès | 2023/2024

## 👩‍💻 Réalisé par
- **El Azimani Chaimae**
- **Drissi Salma**

**Encadré par :** Mr. Abdelali Ed-Dahhak

---

## 📌 Problématique

L'accumulation de poussière sur les panneaux solaires réduit leur 
rendement jusqu'à **79%**. Ce projet propose une solution automatique 
et économique pour maintenir des panneaux propres en permanence.

---

## 🎯 Objectifs
- Identifier les facteurs affectant le rendement des panneaux PV
- Développer un système de nettoyage automatique et manuel
- Concevoir, fabriquer et tester le robot sur une installation réelle

---

## ⚙️ Schéma Synoptique

![Schema Synoptique](images/schema_synoptique.png)

Le système fonctionne selon **2 modes** :
- **Mode automatique** : détection de saleté via capteur infrarouge
- **Mode manuel** : contrôle direct via bouton poussoir

---

## 🛠️ Composants Utilisés

| Composant | Image | Rôle |
|---|---|---|
| Arduino UNO | — | Carte de contrôle principale |
| Moteur DC | ![Moteur DC](images/moteur_dc.jpeg) | Déplacement du bras (x2) + brosse |
| Circuit L298N | ![L298N](images/circuit_L298N.jpeg) | Pilotage des moteurs |
| Capteur fin de course | ![Fin de course](images/capteur_fin_de_course.jpeg) | Limites de déplacement |
| Capteur Infrarouge | ![IR](images/capteur_infrarouge.jpeg) | Détection de saleté |
| Panneau Solaire 10W | ![Panneau](images/panneau_solaire_10W.jpeg) | Alimentation du système |

---

## 💻 Logiciels Utilisés
- **Arduino IDE** — Programmation du microcontrôleur
- **Proteus ISIS** — Simulation du schéma électrique
- **CoolTerm** — Monitoring série

---

## 🔨 Réalisation du Prototype

### Étape 1 — Assemblage mécanique
![Prototype forme](images/prototype_forme.jpeg)

### Étape 2 — Test sur plaque d'essai
![Test plaque essai](images/test_plaque_essai.jpeg)

### Étape 3 — Soudage des composants
<p float="left">
  <img src="images/soudage_1.jpeg" width="45%"/>
  <img src="images/soudage_2.jpeg" width="45%"/>
</p>

### Étape 4 — Réalisation Finale ✅
<p float="left">
  <img src="images/realisation_finale_1.jpeg" width="30%"/>
  <img src="images/realisation_finale_2.jpeg" width="30%"/>
  <img src="images/realisation_finale_3.jpeg" width="30%"/>
</p>

---

## 📊 Résultats Expérimentaux

Les tests ont été conduits sur **3 jours consécutifs** :

| Jour | Condition | Résultat |
|---|---|---|
| Jour 1 | Panneau propre | Rendement de référence |
| Jour 2 | Panneau avec poussière | Baisse significative du rendement |
| Jour 3 | Après nettoyage robot | Rendement restauré ✅ |

---

## 📁 Contenu du Dépôt
```
solar-panel-cleaning-robot/
├── code/
│   └── robot_nettoyage.ino
├── images/
│   ├── schema_synoptique.png
│   ├── moteur_dc.jpeg
│   ├── circuit_L298N.jpeg
│   ├── capteur_fin_de_course.jpeg
│   ├── capteur_infrarouge.jpeg
│   ├── panneau_solaire_10W.jpeg
│   ├── prototype_forme.jpeg
│   ├── test_plaque_essai.jpeg
│   ├── soudage_1.jpeg / soudage_2.jpeg
│   └── realisation_finale_1/2/3.jpeg
└── docs/
    └── rapport_PFE.pdf
```
