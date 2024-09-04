import pyodbc
dados_conexao = (
    "DRIVER={MySQL ODBC 9.0 ANSI Driver};"
    "SERVER=localhost;"
    "DATABASE=Setembro;"
    "USER=root;"
    "PASSWORD=12345678;"
    "PORTA: 3306;"
)
conexao = pyodbc.connect(dados_conexao)
cursor = conexao.cursor()