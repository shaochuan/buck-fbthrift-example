from calculator import Calculator

import logging
from thrift import Thrift
from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol

def main():
  transport = TSocket.TSocket('localhost', 9090)
  transport = TTransport.TBufferedTransport(transport)
  protocol = TBinaryProtocol.TBinaryProtocol(transport)
  client = Calculator.Client(protocol)
  transport.open()
  logging.info('connected')
  s = client.add(1, 2)
  logging.info('1 + 2 = %d' % (s,)) 
  transport.close()

if __name__ == '__main__':
  logging.basicConfig(level=logging.INFO)
  main()
