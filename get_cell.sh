#! /bin/bash

CRED1='\033[5;31m'
CRED2='\033[5;32m'
CRED3='\033[5;33m'
CRED4='\033[5;34m'
RESET='\033[0m'

GREEN='\033[0;32m'
LIGHT_GREEN='\033[1;32m'
ORANGE='\033[1;33m'

git clone git@github.com:Krio18/Game_of_life.git
echo -e "${CRED1}
   ____ ${CRED2}  ___ ${CRED3}  __     ${CRED4}  __
${CRED1}  /    |${CRED2} |  _|${CRED3} |  |    ${CRED4} |  |
${CRED1} /   _/ ${CRED2} | |_ ${CRED3} |  |    ${CRED4} |  |
${CRED1}|   (_  ${CRED2} |  _|${CRED3} |  |    ${CRED4} |  |
${CRED1} \    \ ${CRED2} | |_ ${CRED3} |  |___ ${CRED4} |  |___
${CRED1}  \____|${CRED2} |___|${CRED3} |______|${CRED4} |______|

${RESET}"
echo ""
echo -e "${ORANGE}Usage: ${GREEN}cell [${LIGHT_GREEN}optional_file_map${GREEN}] [${LIGHT_GREEN}optional_number${GREEN}]${RESET}"

cd $(find / -name Game_of_life 2>/dev/null -type d -print -quit)

chmod +x install/install.sh

./install/install.sh

echo ""
echo -e "${ORANGE}You can delete ${LIGHT_GREEN}'get_cell.sh'${GREEN} file now.${RESET}"
echo ""
