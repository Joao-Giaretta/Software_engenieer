"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
// importando o pacote express
// Para provisionar um servidor HTTP pronto
const express_1 = __importDefault(require("express"));
// Criando uma constante que representa o servidor
const app = (0, express_1.default)();
// Criando a constante que representa qual porta que o servidor usará
const port = 3000;
// Definindo as ROTAS de serviços
app.get('/', (req, res) => {
    res.send("Rota default - Oi");
});
app.get('/piAoQuadrado', (req, res) => {
    const pi = 3.1415;
    const quadradoDePi = Math.pow(pi, 2);
    res.send(`O quadrado de pi é: ${(quadradoDePi)}`);
});
// Fazer m serviço (por ROTA) capaz de calcular o IMC.
// Porem os parâmetros de entreada que é peso e altura precisam ser recebido na rota.
// Para testar o serviço use o POSTMAN. 
app.post("/imc", (req, res) => {
    // Codigo que recebe os parâmetros, calcula e devolve o resultado
    res.send("Serviço ativo...");
});
app.listen(port, () => {
    console.log(`Servidor HTTP rodando na porta ${port}`);
});
