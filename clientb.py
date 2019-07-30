from socket import *
#serverName = ’servername’
#serverPort = 12321
clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.bind((‘Station B’,12321))
clientSocket.connect(('127.0.0.1',12323))
sentence = raw_input(‘Input lowercase sentence:’)
#clientSocket.send(sentence)
modifiedSentence = clientSocket.recv(1024)
sentence = modifiedSentence.upper()
clientSocket.send(sentence)
print ‘ Sent:’, sentence
clientSocket.close()