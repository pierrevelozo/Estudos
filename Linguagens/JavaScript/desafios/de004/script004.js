
function iniciar(){

    let produto = window.prompt('Que produto você está comprando?');

    let preço = Number(window.prompt(`Quanto custa o ${produto} que você está comprando?`));;

    let dinheiro = Number(window.prompt(`Qual foi o valor que você deu para pagar ${produto}?`));

    let troco = dinheiro - preço;

    let resposta = window.prompt(`Você comprou ${produto} que custou ${preço.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})}. Deu ${dinheiro.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})} em dinheiro e vai receber ${troco.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})} de troco. Volte Sempre!`);

}