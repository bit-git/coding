 _______    ___                   ______                    
(_______)  / __)  _              (____  \                   
 _______ _| |__ _| |_ _____  ____ ____)  )_   _  ____ ____  
|  ___  (_   __|_   _) ___ |/ ___)  __  (| | | |/ ___)  _ \ 
| |   | | | |    | |_| ____| |   | |__)  ) |_| | |   | | | |
|_|   |_| |_|     \__)_____)_|   |______/|____/|_|   |_| |_|

http://learnnetsec.blogspot.com

www.youtube.com/NetSecNow


Disclaimer:

This script is for educational purposes only. Any mis-use is at the liability of the user.


Usage:

In order to use this script, you must have installed tor and proxychains.

You first need to navigate to where you extracted the script to. Next you need to make it executable for your user.

chmod u+x tor-buddy.sh


To use the script:
./tor-buddy.sh

By default the script will check to see if you have tor and proxy chains installed. It will then ask you to type in a number in seconds for each request for a new proxy IP from tor. You should use a number of at least 30 seconds or more to avoid conflicts. If you enter a value less than 30 it will warn you, but it will proceed anyway, because you are free to make your own choices :-)


Notes:

When using this script with nmap, hydra, or any other type of scanner via the proxychains command it is recommended that you use a value of at least 120 seconds for IP requests. Anything less has been known to produce unstable scanning output results. 120-240 is a safe bet. Adjust to your needs.

Also, you should make some changes to proxychains.conf located in etc/

The default value for strict_chain should be commented out, and the value for dynamic_chain should be un-commented and used instead. This is because we are using tor, and the tor network has been known to have slow proxy hosts, and otherwise would lead to a break in the chain. You may also want to comment out the proxy_dns option, because things like nmap have been unstable with this option enabled. Instead, add your DNS nameserver addresses to resolv.conf in etc/, this way you can still spoof your IP via proxy, and prevent DNS leaks as well, without breaking nmap. A good place to find Anonymous and Open DNS servers is http://wiki.opennicproject.org/Tier2

Visit our blog and youtube channel and click around :-)

Enjoy! 
