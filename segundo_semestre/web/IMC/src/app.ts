    // put your code here - of service /imc
    // all services must be have: input (by req parameter) and output (result of the service) by res parameter.
    
    // 1. Na requisição precisa vir 2 paremetros: Peso e Altura. 
    // 2. Em seguida validar se os dois parâmetros CHEGARAM (Se não chegou devolver ERRO)
    // 3. Verificar se ambos são maiores do que 0
    // 4. Se for maior que zero fazer o calculo e devolver o resultado.
    // 5. Se não for tratar cada caso específico. 

// Importers..
import express from "express";

// Global Variables..
const app = express();
const port = 3000;

app.use(express.json());

// routes od my service
app.post("/imc", (req, res)=>{
    // Ler peso e altura
    const peso = req.body.peso;
    const altura = req.body.altura;
    let imc:number = -1;
    let message:string = "";
    let status:string = "ERROR";


    if (peso !== undefined && altura !== undefined){
        if(peso > 0 && altura > 0){
            // Fazer o calculo
            imc = peso/(Math.pow(altura,2));
            status = "SUCCESS";
        }
        else{
            if(peso <= 0 && altura <= 0){
                message = "Peso e Altura devem ser maiores que zero."
            }
            else if (peso <= 0){
                message = "Peso deve ser maior que zero."
            }
            else{
                message = "Altura deve ser maior que zero."
            }
        }
    }
    else{
        message = " Parâmetros peso e altura devem ser fornecidos."
    }


    let r = {
        status: status,
        result: imc,
        message: message,
    };

    res.send(r);
});

app.listen(port,()=>{
    console.log("Server running...")
});