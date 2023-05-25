#!/bin/bash

RGREEN='\033[0m'
LGREEN='\033[4;32m'

LIGHT_GREEN='\033[1;32m'

# Compilation du programme
make -s

# Déplacement des binaire vers un emplacement approprié
mkdir Binary
mv src/*.o ./Binary
mv src/map_handling/*.o ./Binary
mv lib/my/*.o ./Binary

# Permissions d'exécution pour l'utilisateur
sudo cp install/cell /usr/local/bin/cell
sudo chmod +x /usr/local/bin/cell

# Success
echo ""
echo -e "${LGREEN}'Game of Life' Success.${RGREEN} ${LIGHT_GREEN}You can run 'Game of life' with 'cell' commande."
echo ""
