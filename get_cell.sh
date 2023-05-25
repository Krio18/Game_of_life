#! /bin/bash

CRED='\033[5;31m'
RESET='\033[0m'

GREEN='\033[0;32m'
LIGHT_GREEN='\033[1;32m'
ORANGE='\033[1;33m'

DIR=DIR=$(find / -name Game_of_life 2>/dev/null -type d -print -quit)

git clone git@github.com:Krio18/Game_of_life.git
echo -e "${CRED}
   ____   ___   __       __
  /    | |  _| |  |     |  |
 /   _/  | |_  |  |     |  |
|   (_   |  _| |  |     |  |
 \    \  | |_  |  |___  |  |___
  \____| |___| |______| |______|

${RESET}"
echo ""
echo -e "${ORANGE}Usage: ${GREEN}cell [${LIGHT_GREEN}optional_file_map${GREEN}] [${LIGHT_GREEN}optional_number${GREEN}]${RESET}"

cd ${DIR}

chmod +x install/install.sh

./install/install.sh

echo ""
echo -e "${ORANGE}You can delete ${LIGHT_GREEN}'get_cell.sh'${GREEN} file now.${RESET}"
echo ""
