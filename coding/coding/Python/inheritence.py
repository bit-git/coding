class Parent():
    def __init__(self, last_name, eye_color):
        print ("Parent constructor called")
        self.last_name = last_name
        self.eye_color = eye_color

    def show_info(self):
        print ("Last name - " + self.last_name)
        print ("Eye color - " + self.eye_color)        

class Child(Parent):
    def __init__(self, last_name, eye_color, num_of_toys):
        print ("Child constructor called")
        Parent.__init__(self, last_name, eye_color)
        self.num_of_toys = num_of_toys

    def show_info(self):
        print ("Last name - " + self.last_name)
        print ("Eye color - " + self.eye_color)
        print ("Number of toys - " + str(self.num_of_toys))         

##### put in separate file

billy = Parent ("Cyrus", "blue")
#print (billy.last_name)

miley = Child("Cyrus", "Blue", 5)
##print (miley.last_name)
##print (miley.num_of_toys)
billy.show_info()
miley.show_info()

    
