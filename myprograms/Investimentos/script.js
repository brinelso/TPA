function calculate() {
    // Capturando os valores do formulário
    const initialAmount = parseFloat(document.getElementById('initialAmount').value);
    const monthlyContribution = parseFloat(document.getElementById('monthlyContribution').value);
    const interestRate = parseFloat(document.getElementById('interestRate').value) / 100;
    const period = parseInt(document.getElementById('period').value);
    
    // Selecionando o corpo da tabela onde os resultados serão exibidos
    const resultBody = document.getElementById('resultBody');
    resultBody.innerHTML = ""; // Limpar os resultados anteriores

    if (isNaN(initialAmount, monthlyContribution, interestRate, period) || [initialAmount, interestRate, period] <= 0){
        alert('Dados inválidos. \nVerifique os dados inseridos!')
    }
    else {
        let balance = initialAmount;

        // Calculando mês a mês
        for (let month = 1; month <= period; month++) {
            balance += monthlyContribution;
            balance *= (1 + interestRate);
            
            let lucro = balance - ((monthlyContribution * month) + initialAmount);
            
            // Criando uma nova linha para cada mês
            const row = document.createElement('tr');
            const monthCell = document.createElement('td');
            const balanceCell = document.createElement('td');
            const lucroCell = document.createElement('td');

            monthCell.textContent = month;
            balanceCell.textContent = balance.toFixed(2);
            lucroCell.textContent = lucro.toFixed(2);

            row.appendChild(monthCell);
            row.appendChild(balanceCell);
            row.appendChild(lucroCell);
            resultBody.appendChild(row);
        }
    }
    
}

function clearFormAndTable() {
    // Limpar o formulário
    document.getElementById('calculatorForm').reset();
    
    // Limpar a tabela de resultados
    const resultBody = document.getElementById('resultBody');
    resultBody.innerHTML = "";
}
