class Conta{
    private _dono:string
    saldo:number
    numero_conta:number

    constructor(usuario:string, saldo:number, num_conta:number){
        this._dono = usuario
        this.saldo = saldo
        this.numero_conta = num_conta
    }

    consultarSaldo():string{
        return `Saldo: R$ ${this.saldo}`
    }

    depositar(valor:number):string{
        let novo_saldo = this.saldo + valor
        this.saldo = novo_saldo
        return `Novo saldo: R$ ${this.saldo}` 
    }

    debitar(valor:number):string{
        if (this.saldo > 0 && this.saldo > valor){
            let novo_saldo = this.saldo - valor
            this.saldo = novo_saldo
            return `Novo saldo: R$ ${this.saldo}`
        }
        return `Não é possível debitar` 
    }

    consultarInformacoesConta():string{
        return `Titular da conta: ${this._dono}\nSaldo: R$ ${this.saldo}\nNúmero da conta: ${this.numero_conta}`
    }

}

const conta = new Conta('Mariana', 300, 123)
conta.consultarInformacoesConta()
console.log(conta.debitar(20))
console.log(conta.depositar(50))