from socket import *
#serverName = ’servername’
#serverPort = 12323

clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.bind((‘Station A’,12323))
clientSocket.connect(('127.0.0.1',12321))
sentence = raw_input(‘Input lowercase sentence:’)
clientSocket.send(sentence)
modifiedSentence = clientSocket.recv(1024)
print ‘From Server:’, modifiedSentence
clientSocket.close()