
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



# NETWORK SOFTWARE

The first computer networks were designed with the hardware as the main concern and the software as an afterthought.

## Protocol Hierarchies
- To reduce their design complexity, most networks are organized as a stack of layers or levels, each one built upon the one below it. The number of layers, the name of each layer, the contents of each layer, and the function of each layer dif- fer from network to network. The purpose of each layer is to offer certain ser- vices to the higher layers while shielding those layers from the details of how the offered services are actually implemented.

- The fundamental idea is that a particular piece of software (or hardware) provides a service to its users but keeps the details of its internal state and algorithms hidden from them.When layer n on one machine carries on a conversation with layer n on anoth- er machine, the rules and conventions used in this conversation are collectively known as the layer n protocol. Basically, a protocol is an agreement between the communicating parties on how communication is to proceed.

- The entities comprising the corresponding layers on different machines are called `peers`. The peers may be software processes, hardware devices, or even human beings. In other words, it is the peers that communicate by using the protocol to talk to each other.


![Screenshot 2022-03-16 at 4 37 31 PM](https://user-images.githubusercontent.com/61273477/158576854-2ed5b67d-31e2-481c-b348-6af156edcf3a.png)



- In reality, no data are directly transferred from layer n on one machine to layer n on another machine. Instead, each layer passes data and control infor- mation to the layer immediately below it, until the lowest layer is reached. Below layer 1 is the physical medium through which actual communication occurs.
- Between each pair of adjacent layers is an interface. The interface defines which primitive operations and services the lower layer makes available to the upper one. 

- The peer process abstraction is crucial to all network design. Using it, the unmanageable task of designing the complete network can be broken into several smaller, manageable design problems, namely, the design of the individual layers is called ‘‘Network Software,’’
- it is worth pointing out that the lower layers of a protocol hierarchy are frequently implemented in hardware or firmware. Nevertheless, complex protocol algorithms are involved, even if they are embedded (in whole or in part) in hardware.

## Network architecture

- A set of layers and protocols is called a network architecture.
- A list of the protocols used by a certain system, one protocol per layer, is called a protocol stack.


#### Now consider a more technical example: how to provide communication to the top layer of the five-layer

```
 A message, M, is produced by an application process running in layer 5 and given to layer 4 for transmission. Layer 4 puts a header in front of the message to identify the message and passes the result to layer 3. The header includes control information, such as addresses, to allow layer 4 on the destination machine to deliver the message. Other ex- amples of control information used in some layers are sequence numbers (in case the lower layer does not preserve message order), sizes, and times.
In many networks, no limit is placed on the size of messages transmitted in the layer 4 protocol but there is nearly always a limit imposed by the layer 3 pro- tocol. Consequently, layer 3 must break up the incoming messages into smaller units, packets, prepending a layer 3 header to each packet. In this example, M is split into two parts, M 1 and M 2 , that will be transmitted separately.
Layer 3 decides which of the outgoing lines to use and passes the packets to layer 2. Layer 2 adds to each piece not only a header but also a trailer, and gives the resulting unit to layer 1 for physical transmission. At the receiving machine the message moves upward, from layer to layer, with headers being stripped off as it progresses. None of the headers for layers below n are passed up to layer n.
```


![Screenshot 2022-03-16 at 4 38 12 PM](https://user-images.githubusercontent.com/61273477/158576882-65bcff5b-f36a-4f0d-9bfb-1f8f35917f62.png)





## Design Issues for the Layers

Some of the key design issues that occur in computer networks will come up in layer after layer.

#### Reliability is the design issue of making a network.
   - Think about the bits of a packet traveling through the network. There is a chance that some of these bits will be received damaged (inverted) due to fluke electrical noise, random wireless signals, hardware flaws, software bugs and so on. How is it possible that we find and fix these errors? One mechanism for finding errors in received information uses codes for er- ror detection. Information that is incorrectly received can then be retransmitted until it is received correctly. More powerful codes allow for error correction.
   - Another reliability issue is finding a working path through a network. Often there are multiple paths between a source and destination, and in a large network, there may be some links or routers that are broken. The network should automatically make this decision. This topic is called routing.

#### A second design issue concerns the evolution of the network.

- Over time, net- works grow larger and new designs emerge that need to be connected to the exist- ing network.

- When networks get large, new problems arise. Cities can have traffic jams, a shortage of telephone numbers, and it is easy to get lost.Designs that continue to work well when the network gets large are said to be scalable.

#### A third design issue is resource allocation.

- Networks provide a service to hosts from their underlying resources, such as the capacity of transmission lines. To do this well, they need mechanisms that divide their resources so that one host does not interfere with another too much.
- An allocation problem that occurs at every level is how to keep a fast sender from swamping a slow receiver with data. This subject is called flow control.

#### The last major design issue is to secure the network.

- Mechanisms that provide `confidentiality` defend against this threat, and they are used in multiple layers.
-  Mechanisms for `authentication` prevent someone from impersonating someone else.
-  mechanisms for `integrity` prevent surreptitious changes to messages, such as altering ‘‘debit my account $10’’ to ‘‘debit my account $1000.’’ All of these designs are based on cryptography.



## Connection-Oriented Versus Connectionless Service
Layers can offer two different types of service to the layers above them: con- nection-oriented and connectionless.

#### Connection-oriented service 

- it  is modeled after the telephone system. To talk to someone, you pick up the phone, dial the number, talk, and then hang up. Simi- larly, to use a connection-oriented network service, the service user first estab- lishes a connection, uses the connection, and then releases the connection. The essential aspect of a connection is that it acts like a tube: the sender pushes objects (bits) in at one end, and the receiver takes them out at the other end. In most cases the order is preserved so that the bits arrive in the order they were sent.
- In some cases when a connection is established, the sender, receiver, and sub- net conduct a negotiation about the parameters to be used, such as maximum message size, quality of service required, and other issues. Typically, one side makes a proposal and the other side can accept it, reject it, or make a counter- proposal.

#### connectionless service  

- it is modeled after the postal system. Each message (letter) carries the full destination address,and each one is routed through the intermediate nodes inside the system indepen- dent of all the subsequent messages.
-  Normally, when two messages are sent to the same destination, the first one sent will be the first one to arrive. However, it is possible that the first one sent can be delayed so that the second one arrives first.


  ![Screenshot 2022-03-16 at 4 38 47 PM](https://user-images.githubusercontent.com/61273477/158576917-37576f81-355a-43b8-a84d-8943e88622ec.png)




# Service Primitives

- A service is formally specified by a set of primitives (operations) available to user processes to access the service. These primitives tell the service to perform some action or report on an action taken by a peer entity. 
- If the protocol stack is located in the operating system, as it often is, the primitives are normally system calls. These calls cause a trap to kernel mode, which then turns control of the ma- chine over to the operating system to send the necessary packets.
- The set of primitives available depends on the nature of the service being pro- vided. The primitives for connection-oriented service are different from those of connectionless service.

![Screenshot 2022-03-16 at 7 41 01 PM](https://user-images.githubusercontent.com/61273477/158609482-2b1d140d-9694-4bfe-a435-d49b9541a8f1.png)



#### These primitives might be used for a request-reply interaction in a client-ser- ver environment.

![Screenshot 2022-03-16 at 7 42 13 PM](https://user-images.githubusercontent.com/61273477/158609543-7a5e9a68-7550-42b3-a834-748f59f4dd6d.png)


- First, the server executes LISTEN to indicate that it is prepared to accept in- coming connections.
- Next, the client process executes CONNECT to establish a connection with the server.When the packet arrives at the server, the operating system sees that the pack- et is requesting a connection.

- The server process can then establish the connection with the ACCEPT call. This sends a response back to the client process to accept the connection. The arrival of this response then releases the client. At this point the client and server are both running and they have a connection established.
- The next step is for the server to execute RECEIVE to prepare to accept the first request. 
- Then the client executes SEND to transmit its request (3) followed by the ex- ecution of RECEIVE to get the reply.
-  After it has done the work, the server uses SEND to return the answer to the client 
-  When the client is done, it executes DISCONNECT to terminate the connection,suspending the client and sending a packet to the server saying that the connection is no longer needed.
-  When the server gets the packet, it also issues a DISCONNECT of its own, ack- nowledging the client and releasing the connection . When the server’s packet gets back to the client machine, the client process is released and the connection is broken. In a nutshell, this is how connection-oriented communication works.

#  The Relationship of Services to Protocols
-  A service is a set of primitives (operations) that a layer provides to the layer above it.
-  A protocol, in contrast, is a set of rules governing the format and meaning of the packets, or messages that are exchanged by the peer entities within a layer. Entities use protocols to implement their service definitions.

## REFERENCE MODELS
Now that we have discussed layered networks in the abstract, it is time to look at some examples. We will discuss two important network architectures: the OSI reference model and the TCP/IP reference model. Although the protocols associated with the OSI model are not used any more, the model itself is actually quite general and still valid, and the features discussed at each layer are still very important. The TCP/IP model has the opposite properties: the model itself is not of much use but the protocols are widely used.

## The OSI Reference Model

The OSI model (minus the physical medium) is shown in diagram . This model is based on a proposal developed by the International Standards Organization (ISO) as a first step toward international standardization of the protocols used in the various layers (Day and Zimmermann, 1983). It was revised in 1995 (Day, 1995). The model is called the ISO OSI (Open Systems Interconnection) Reference Model because it deals with connecting open systems—that is, systems that are open for communication with other systems. We will just call it the `OSI model` for short.

![Screenshot 2022-04-03 at 10 26 48 AM](https://user-images.githubusercontent.com/61273477/161412255-e0e20973-801c-4e10-8145-22f640575ce8.png)

- Layred Task- International standard organization (ISO)- proposed an open system Interconnection (OSI) model - allow two system to communicate regardless of their architecture.
-  A protocol, in contrast, is a set of rules governing the format and meaning of the packets, or messages that are exchanged by the peer entities within a layer. Entities use protocols to implement their service definitions.

- The purpose of the OSI model is to show how to faciliate communication between different system without requiring changes to the logic of the underlying hardware and software.

- The OSI model is not a protocol; it is a model for undestanding and designing a network architecture that is flexible , robust and interoperable.

It consists of seven separate  but related layers, each of which defines a part of the process of moving information across a network.


### `Physical layer` 
The physical layer comes with some responsibility .

- the physical layer defines the characteristics of `interface between device and transmission medium`.

-  `Representation off bits`: the physical layer data consists of stream of bits (sequence of 0s and 1s) with no interpretation,To be transmitted ,bits must be encoded into electrical-signal or optical.

- `Data rate`: the transmission rate , number of bits sent per second define by physical layer.

 - `Line configuration` : The physical layer concerned with the connection of devices to media. 

- `Physical topology ` : it define how devices are connected to make a network.

- `Transmission mode` : physical layer also define the direction of transmissiion between two devices : simplex,half-duplex or full-duplex.

### `Data link layer`

- `Framing` : data link layer divides the stream of bits received by network layer into manageable data units called frames.

- `Physical addressing` : data link layer responsible for manage physical (MAC) addressing. if frames are to be distributed to different system on the network , the data link layer adds the header on the frame to define the sender or receiver of the frame.


- `Access control` : When two or more devices are connected to the same link , data link layer protocol are necessary to determine  which device has control over the link at any given time

Broadcast networks have an additional issue in the data link layer: how to control access to the shared channel. A special sublayer of the data link layer, the medium access control sublayer, deals with this problem.


- `Flow controll` : In data communications, flow control is the process of managing the rate of data transmission between two nodes to prevent a fast sender from overwhelming a slow receiver. It provides a mechanism for the receiver to control the transmission speed, so that the receiving node is not overwhelmed with data from transmitting node.

- `Error controll` : Error control is basically process in data link layer of detecting or identifying and re-transmitting data frames that might be lost or corrupted during transmission.Data-link layer uses the techniques of error control simply to ensure and confirm that all the data frames or packets, i.e. bit streams of data, are transmitted or transferred from sender to receiver with certain accuracy.


### `Network layer` 
 The network layer responsible for the  `source to destination delivery ` of packets.

- `Logical addressing`: if a packet passes the network boundry , we need to another addressing system to help distinguish the source and destination system. the network layer adds a header to the packets comming from the upper layer that, amoung other things, include the logical address of sender and receiver.

- `Routing` : When a device has multiple paths to reach a destination, it always selects one path by preferring it over others. This selection process is termed as Routing. Routing is done by special network devices called routers or it can be done by means of software processes.

### `Transport layer` 
 The transport layer header must include a type of address called a service-point address (or port address). the network layer gets each packets to the correct computer; the transport layer gets the entire message to the correct process on that computer. the transport layer is responsible for process to process delivery of the entire message.

- `segmentation and reassembly`: A message is divided into transmittable segments, with each segment containing a sequence number. These numbers enable the transport layer to reassemble the message correctly upon arriving at destination and to identify and replace packets that were lost in transmission. 

- `Connection control `: the transport layer can be either connectionless or connection oriented.

- `Flow control `: Like the data link layer, the transport layer is responsible for flow control.however, flow control at this layer is performed end to end rather than across a single link.

- `Error Control`: like the data link layer , the transport layer is responsible for error control. However , error control at this layer is performed process-to-process rather than across a single link. the sending transport layer make sure that the entire message arrives at the receiving transport layer without error (damage , loss , or duplication ). error correction is usually achieved through retransmission.

### `Session layer`
This layer allows users on different machines to establish active communications sessions between them. It is responsible for establishing, maintaining, synchronizing, terminating sessions between end-user applications. 

### `Presentation layer`
- This layer allows users on different machines to establish active communications sessions between them.
- It is responsible for establishing, maintaining, synchronizing, terminating sessions between end-user applications. 
- This layer encodes the message from the user-dependent format to the common format and vice-versa for communication between dissimilar systems.


### `Application layer` 
- Application layer is the top most layer in OSI and TCP/IP layered model. This layer exists in both layered Models because of its significance, of interacting with user and user applications. This layer is for applications which are involved in communication system.

- A user may or may not directly interacts with the applications. Application layer is where the actual communication is initiated and reflects. Because this layer is on the top of the layer stack, it does not serve any other layers. Application layer takes the help of Transport and all layers below it to communicate or transfer its data to the remote host.


