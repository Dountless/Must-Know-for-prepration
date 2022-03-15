
# INTRODUCTION

Each of the past three centuries was dominated by a single new technology.

- The 18th century was the era of the great mechanical systems accompanying the Industrial Revolution. 
- The 19th century was the age of the steam engine.
- The 20th century, the key technology was information gathering, processing, and distribution.
- As a result of rapid technological progress, these areas are rapidly converging in the 21st century
## Computer Network 

- The term ‘‘computer network’’ to mean a col- lection of autonomous computers interconnected by a single technology. 
- Two computers are said to be interconnected if they are able to exchange information. The connection need not be via a copper wire; fiber optics, microwaves, infrared, and communication satellites can also be used.
- They are usually connected together to make larger networks, with the Internet being the most well-known example of a network of networks.
*Note:-> There is considerable confusion in the literature between a `computer network` and a `distributed system.`*
### distributed system

- The key distinction is that in a distributed system, a collection of independent computers appears to its users as a single coherent system.
- A layer of software on top of the operating system, called middleware, is responsible for implementing this model. 
- A well-known example of a distributed system is the World Wide Web. It runs on top of the Internet and presents a model in which everything looks like a document (Web page).

![image](https://user-images.githubusercontent.com/61273477/158011546-b2b53e71-b9e5-4291-87f9-c97429fec0a0.png)


### computer network 
- In a computer network, this coherence, model, and software are absent. Users are exposed to the actual machines, without any attempt by the system to make the machines look and act in a coherent way.
- If the machines have different hard- ware and different operating systems, that is fully visible to the users.
- If a user wants to run a program on a remote machine, he† has to log onto that machine and run it there.

![image](https://user-images.githubusercontent.com/61273477/158011795-bd43b579-444c-4544-bc30-f1ab29e57767.png)


In effect, a `distributed system`is a software system built on top of a network. The software gives it a high degree of `cohesiveness` and `transparency`. Thus, the distinction between a network and a distributed system lies with the software (es- pecially the operating system), rather than with the hardware.

# Uses of computer network 

Service Provided by the Network for Companies:

• Many organizations have a large number of computers in operation. These computers may be within the same building, campus, city or different cities.

• Even though the computers are located in different locations, the organizations want to keep track of inventories, monitor productivity, do the ordering and billing etc.

• The computer networks are useful to the organizations in the following ways:

1. Resource sharing.

2. For providing high reliability.

3. To save money.

4. It can provide a powerful communication medium.


## Resource sharing
• It allows all programs, equipment and data available to anyone on the network irrespective of the physical location of the resource and the user.

• Show in Fig (a) and (b) which shows a printer being shared and different information being shared.

![image](https://user-images.githubusercontent.com/61273477/158011950-5fb2c4f5-68a7-49f9-ad5b-2d840ee5dd78.png)

## Access to remote information
Access to remote information involves interaction· between a person and a remote database. Access to remote information comes in many forms like:

(i) Home shopping, paying telephone, electricity bills, e-banking, on line share market etc.

(ii) Newspaper is. On-line and is personalized, digital library consisting of books, magazines, scientific journals etc.

(iii) World wide web which contains information. about the arts, business, cooking, government, health, history, hobbies, recreation, science, sports etc.

## Person to person communication
Person to person communication includes:

(i) Electronic-mail (e-mail)

(ii) Real time e-mail i.e. video conferencing allows remote users to communicate with no delay by seeing and hearing each other. Video-conferencing is being used for remote school, getting medical opinion from distant specialists etc.

(iii) Worldwide newsgroups in which one person posts a message and all other subscribers to the newsgroup can read it or give their feedback’s.

## Metcalfe’s law

- In 1977, Ken Olsen was president of the Digital Equipment Corporation, then the number two computer vendor in the world (after IBM). When asked why Dig- ital was not going after the personal computer market in a big way, he said: ‘‘There is no reason for any individual to have a computer in his home.’’ History showed otherwise and Digital no longer exists. People initially bought computers for word processing and games. Recently, the biggest reason to buy a home com- puter was probably for Internet access. Now, many consumer electronic devices, such as set-top boxes, game consoles, and clock radios, come with embedded computers and computer networks, especially wireless networks, and home net- works are broadly used for entertainment, including listening to, looking at, and creating music, photos, and videos.
- Internet access provides home users with connectivity to remote computers. As with companies, home users can access information, communicate with other people, and buy products and services with e-commerce. The main benefit now comes from connecting outside of the home. Bob Metcalfe, the inventor of Ether- net, hypothesized that the value of a network is proportional to the square of the number of users because this is roughly the number of different connections that may be made (Gilder, 1993). This hypothesis is known as ‘‘Metcalfe’s law.’’ It helps to explain how the tremendous popularity of the Internet comes from its size.



# What is network neutrality?
Network neutrality is the idea that internet service providers (ISPs), including cable companies like Time Warner and wireless providers like Sprint, should treat all internet traffic equally. It says your ISP shouldn’t be allowed to block or degrade access to certain websites or services, nor should it be allowed to set aside a "fast lane" that allows content favored by the ISP to load more quickly than the rest.


# What’s the argument for network neutrality?

When Mark Zuckerberg created Facebook in his Harvard dorm room, he didn’t need to ask Comcast, Verizon, or other internet service providers to add the site to their networks. He also didn’t have to pay these companies extra fees to ensure that Facebook would work as well as the websites of established companies. Instead, as soon as he created the Facebook website, it was automatically available from any internet-connected computer in the world.

That’s network neutrality.

Advocates say network neutrality is a big reason there has been so much innovation on the internet over the last two decades. Network neutrality keeps the barriers to entry for new websites and internet applications low. Supporters say that freedom has allowed the creation of dozens of innovative online services such as Google, Twitter, Netflix, Amazon, Skype, and more.

They worry that without net neutrality, the internet would become less hospitable to new companies and innovative ideas. For example, if large ISPs began requiring video-streaming sites to pay extra to deliver video content to their customers, the expense and hassle of negotiating deals with dozens of network owners could make it difficult for the next YouTube to get traction.



# Network Hardware
There is no generally accepted taxonomy into which all computer net- works fit, but two dimensions stand out as important: `transmission technology` and `scale`.`

## Transmission Technology 
     
- there are two types of transmission technology that are in widespread use: `broadcast links` and `point-to-point links`.
 ```     
 To go from the source to the destination on a network made up of point-to-point links.
 Point-to-point transmission with exactly one sender and exactly one receiver is sometimes called unicasting.
  ```        
---

```
on a broadcast network, the communication channel is shared by all the machines on the network; packets sent by any machine are received by all the others.
A wireless network is a common example of a broadcast link,
As an analogy, consider someone standing in a meeting room and shouting ‘‘Watson, come here. I want you.’’ Although the packet may actually be received (heard) by many people, only Watson will respond; the others just ignore it.
            
```
## Scale 
    
An alternative criterion for classifying networks is by scale. Distance is im- portant as a classification metric because different technologies are used at dif- ferent scales.

At the top are the personal area networks, networks that are meant for one person.Beyond these come longer-range networks. These can be divided into local, metropolitan, and wide area networks, each with increasing scale. Finally, the connection of two or more networks is called an internetwork. The worldwide Internet is certainly the best-known (but not the only) example of an internetwork.


![Screenshot 2022-03-15 at 6 22 12 PM](https://user-images.githubusercontent.com/61273477/158382259-6966d0dd-2b25-401a-a455-ef6954b2d879.png)


### Personal Area Networks
- PANs (Personal Area Networks) let devices communicate over the range of a person. A common example is a wireless network that connects a computer with its peripherals. Almost every computer has an attached monitor, keyboard, mouse, and printer. Without using wireless, this connection must be done with cables. So many new users have a hard time finding the right cables and plugging them into the right little holes (even though they are usually color coded) that most computer vendors offer the option of sending a technician to the user’s home to do it. To help these users, some companies got together to design a short-range wireless network called Bluetooth to connect these components without wires. The idea is that if your devices have Bluetooth, then you need no cables.
- In the simplest form, Bluetooth networks use the master-slave paradigm of Fig. 1-7. The system unit (the PC) is normally the master, talking to the mouse, keyboard, etc., as slaves. The master tells the slaves what addresses to use, when they can broadcast, how long they can transmit, what frequencies they can use, and so on.

![Screenshot 2022-03-15 at 6 23 10 PM](https://user-images.githubusercontent.com/61273477/158382327-a522b8ea-2c9e-484c-8093-cb2c8ca07b35.png)


- PANs can also be built with other technologies that communicate over short ranges, such as RFID on smartcards and library books.



### Local Area networks

- A LAN is a privately owned network that operates within and nearby a single building like a home, of- fice or factory. LANs are widely used to connect personal computers and consu- mer electronics to let them share resources (e.g., printers) and exchange informa- tion. When LANs are used by companies, they are called enterprise networks.
- Wireless LANs are very popular these days, especially in homes, older office buildings, cafeterias, and other places where it is too much trouble to install cables. In these systems, every computer has a radio modem and an antenna that it uses to communicate with other computers. In most cases, each computer talks to a device in the ceiling as shown in Fig. 1-8(a). This device, called an AP (Access Point), wireless router, or base station, relays packets between the wireless computers and also between them and the Internet.
- There is a standard for wireless LANs called IEEE 802.11, popularly known as WiFi, which has become very widespread. It runs at speeds anywhere from 11 to hundreds of Mbps. (In this book we will adhere to tradition and measure line speeds in megabits/sec, where 1 Mbps is 1,000,000 bits/sec, and gigabits/sec, where 1 Gbps is 1,000,000,000 bits/sec.) Wired LANs use a range of different transmission technologies. Most of them use copper wires, but some use optical fiber.
- Compared to wireless networks, wired LANs exceed them in all dimensions of performance. It is just easier to send signals over a wire or through a fiber than through the air.
- The topology of many wired LANs is built from point-to-point links. IEEE 802.3, popularly called Ethernet.
![Screenshot 2022-03-15 at 6 23 43 PM](https://user-images.githubusercontent.com/61273477/158382378-872bd95c-114a-4458-a348-1e83386fe997.png)


### Metropolitan Area Networks
- A MAN (Metropolitan Area Network) covers a city. The best-known ex- amples of MANs are the cable television networks available in many cities. These systems grew from earlier community antenna systems used in areas with poor over-the-air television reception. In those early systems, a large antenna was placed on top of a nearby hill and a signal was then piped to the subscribers’ houses.
- To a first approximation, a MAN might look some- thing like the system shown in Fig. 1-9. In this figure we see both television sig- nals and Internet being fed into the centralized cable headend for subsequent dis- tribution to people’s homes.
- Cable television is not the only MAN, though. Recent developments in high- speed wireless Internet access have resulted in another MAN, which has been standardized as IEEE 802.16 and is popularly known as WiMAX.

![Screenshot 2022-03-15 at 6 24 16 PM](https://user-images.githubusercontent.com/61273477/158382427-7ca4ab5f-9892-43c2-9c70-d69d40a5d5cf.png)


### Wide Area Networks
- A WAN (Wide Area Network) spans a large geographical area, often a country or continent.

#### We will begin our discussion with wired WANs, using the example of a company with branch offices in different cities.
- The WAN  is a network that connects offices in Perth, Melbourne, and Brisbane. Each of these offices contains computers intended for running user (i.e., application) programs. We will follow traditional usage and call these ma- chines hosts. The rest of the network that connects these hosts is then called the communication subnet, or just subnet for short. The job of the subnet is to carry messages from host to host, just as the telephone system carries words (really just sounds) from speaker to listener.
- In most WANs, the `subnet` consists of two distinct components:` transmission lines and switching elements.`
   - ` Transmission lines` move bits between machines. They can be made of copper wire, optical fiber, or even radio links.
   - `Switching elements`, or just switches, are specialized computers that connect two or more transmission lines. When data arrive on an incoming line, the switching element must choose an outgoing line on which to forward them. These switching computers have been called by various names in the past; the name router is now most commonly used.
- A short comment about the term ‘‘subnet’’ is in order here. Originally, its only meaning was the collection of routers and communication lines that moved packets from the source host to the destination host.

![Screenshot 2022-03-15 at 6 24 41 PM](https://user-images.githubusercontent.com/61273477/158383368-1cbd9aa5-2a17-47ec-a53b-e14b6364119e.png)

```
- We are now in a position to look at two other varieties of WANs.
- First, rather than lease dedicated transmission lines, a company might connect its offices to the Internet This allows connections to be made between the offices as virtual link that use the underlying capacity of the Internet. This arrangement, shown in Fig. 1-11, is called a VPN (Virtual Private Network).



```
![Screenshot 2022-03-15 at 6 25 05 PM](https://user-images.githubusercontent.com/61273477/158383558-714eae3d-dc79-42c7-a60f-c77cf8b66ec4.png)


```

- The second variation is that the subnet may be run by a different company. The subnet operator is known as a network service provider.

- The subnet operator will con- nect to other customers too, as long as they can pay and it can provide service.Such a subnet operator is called an ISP (Internet Service Provider) and the subnet is an ISP network. Its customers who connect to the ISP receive Internet service.


```

![Screenshot 2022-03-15 at 6 25 19 PM](https://user-images.githubusercontent.com/61273477/158383606-e87f1029-deda-463e-8fbb-0ed70bbb6133.png)


#### Note -
```
WANs, the network contains many transmission lines, each connecting a pair of routers. If two routers that do not share a transmission line wish to communicate, they must do this indirectly, via other routers.may be many paths in the network that connect these two routers. How the net- work makes the decision as to which path to use is called the routing algorithm. Many such algorithms exist. How each router makes the decision as to where to send a packet next is called the forwarding algorithm. Many of them exist too.
```

#### Other kinds of WANs make heavy use of wireless technologies. 
- In satellite systems, each computer on the ground has an antenna through which it can send data to and receive data from to a satellite in orbit. All computers can hear the output from the satellite,Satellite networks are inherently broadcast and are most useful when the broadcast property is im- portant.
- The cellular telephone network is another example of a WAN that uses wire- less technology.


### Internetworks

A collection of interconnected net- works is called an internetwork or internet

- Subnets, networks, and internetworks are often confused. 
- The term ‘‘subnet’’ makes the most sense in the context of a wide area network, where it refers to the collection of routers and communication lines owned by the network operator. As an analogy, the telephone system consists of telephone switching offices connect- ed to one another by high-speed lines, and to houses and businesses by low-speed lines. These lines and equipment, owned and managed by the telephone com- pany, form the subnet of the telephone system. The telephones themselves (the hosts in this analogy) are not part of the subnet.
- A network is formed by the combination of a subnet and its hosts. A subnet might be de- scribed as a network, as in the case of the ‘‘ISP network’’
- An inter- network might also be described as a network, as in the case of the WAN.
There are two rules of thumb that are useful.

- First, if different organizations have paid to construct different parts of the network and each maintains its part, we have an internetwork rather than a single network.
- Second, if the underlying tech- nology is different in different parts (e.g., broadcast versus point-to-point and wired versus wireless), we probably have an internetwork.

```
To go deeper, we need to talk about how two different networks can be con- nected. The general name for a machine that makes a connection between two or more networks and provides the necessary translation, both in terms of hardware and software, is a gateway.

```

