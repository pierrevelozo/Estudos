
function inicio(){
    let nome = window.prompt('Digite seu nome.');
    let apresentacao = window.document.getElementById('apresentacao');

    apresentacao.innerHTML =`Olá, ${nome}. É um prazer tem conhecer!`;

}