from flask import Flask, request, jsonify
from flask_cors import CORS

app = Flask(__name__)
CORS(app)  # Permite requisições do frontend

@app.route('/criar-logo', methods=['POST'])
def criar_logo():
    dados = request.get_json()
    return jsonify(dados)  # Retorna o JSON enviado

if __name__ == '__main__':
    app.run(debug=True)
