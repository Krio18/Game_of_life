#! /bin/bash

CRED='\033[5;31m'
CGREEN='\033[5;32m'
CBROWN='\033[5;33m'
CBLUE='\033[5;34m'
RESET='\033[0m'

GREEN='\033[0;32m'
LIGHT_GREEN='\033[1;32m'
ORANGE='\033[1;33m'

git clone git@github.com:Krio18/Game_of_life.git
echo -e "${CRED}
   ____ ${CGREEN}  ___ ${CBROWN}  __     ${CBLUE}  __
${CRED}  /    |${CGREEN} |  _|${CBROWN} |  |    ${CBLUE} |  |
${CRED} /   _/ ${CGREEN} | |_ ${CBROWN} |  |    ${CBLUE} |  |
${CRED}|   (_  ${CGREEN} |  _|${CBROWN} |  |    ${CBLUE} |  |
${CRED} \    \ ${CGREEN} | |_ ${CBROWN} |  |___ ${CBLUE} |  |___
${CRED}  \____|${CGREEN} |___|${CBROWN} |______|${CBLUE} |______|

${RESET}"
echo ""
echo -e "${ORANGE}v0.9"
echo ""
echo ""
echo -e "${ORANGE}Usage: ${GREEN}cell [${LIGHT_GREEN}optional_flag${GREEN}] [${LIGHT_GREEN}optional_number${GREEN}]${RESET}"
echo ""
echo -e "      ${ORANGE}[-u]: ${LIGHT_GREEN}Update Game-Of-Life${RESET}"
echo -e "      ${ORANGE}[-d]: ${LIGHT_GREEN}Delete Game-Of-Life${RESET}"
echo ""

cd $(find / -name Game_of_life 2>/dev/null -type d -print -quit)

chmod +x install/install.sh

./install/install.sh

echo ""
echo -e "${ORANGE}You can delete ${LIGHT_GREEN}'get_cell.sh'${GREEN} file now.${RESET}"
echo ""
