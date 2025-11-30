Instalação do Projeto:

Recomenda-se o uso de um ambiente virtual (venv) para não misturar as bibliotecas com o Python do sistema.

Clone o repositório (ou baixe os arquivos):

Bash

    git clone https://github.com/pierrevelozo/Estudos.git
    cd Estudos/faculdade/POO/clipboard-monitor

Crie e ative o ambiente virtual:

Bash

    python3 -m venv .venv
    source .venv/bin/activate

Instale as dependências do Python:

Bash

    pip install -r requirements.txt

Como Executar:

Com o ambiente virtual ativado, execute o arquivo principal (certifique-se de estar na pasta raiz do projeto):
Bash

    ./Main.py  

Estrutura do Projeto:

    main.py: Ponto de entrada da aplicação.

    Interface.py: Lógica da interface gráfica (Janela).

    Clipboard.py: Wrapper para a biblioteca pyperclip.

    elementos.json: Arquivo onde o histórico é salvo automaticamente.