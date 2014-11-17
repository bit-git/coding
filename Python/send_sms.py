from twilio.rest import TwilioRestClient
 
# Your Account Sid and Auth Token from twilio.com/user/account
account_sid = "AC2e30656f12ffee764421c07fafb64fab"
auth_token  = "85e42e600993c706d55710ec015955f7"

client = TwilioRestClient(account_sid, auth_token)
 
message = client.messages.create(body = "Testing",

    to = "+447795804339",    # Replace with your phone number
    from_ = "+441767512050") # Replace with your Twilio number

print (message.sid)
