import urllib

def read_text():
    qoutes = open(r"E:\py-sample\renamed\123abcs3242f.txt")
    contents_of_file = qoutes.read()
    print (contents_of_file)
    qoutes.close()
    check_profanity(contents_of_file)

def check_profanity(text_to_check):
    connection = urllib.urlopen("http://www.wdyl.com/profanity?q=" + text_to_check)
    output = connection.read()
    print(output)
    connection.close()
    if "true" in output:
        print ("Profanity Alert !!")
    elif "false" in output:
        print ("This document has no curse words !")
    else:
        print ("Scan not successful !")


    
read_text()
