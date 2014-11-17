import itertools

def ip_range(input_string):
    octets = input_string.split('.')
    chunks = [map(int, octet.split('-')) for octet in octets]
    ranges = [range(c[0], c[1] + 1) if len(c) == 2 else c for c in chunks]

    for address in itertools.product(*ranges):
        yield '.'.join(map(str, address))


IP = raw_input('Input range : ')

myfile = open('ipaddss.txt','a')

for address in ip_range(IP):
	myfile.write('%s\n' % address)

  #print(address)
myfile.close()



