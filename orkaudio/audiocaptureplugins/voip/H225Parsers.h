#ifndef __H225Parsers_H__
#define __H225Parsers_H__ s

#include <list>
#include "Utils.h"
#include <map>
#include "ace/OS_NS_unistd.h"
#include "ace/OS_NS_string.h"
#include "ace/OS_NS_strings.h"
#include "ace/OS_NS_dirent.h"
#include "ace/Min_Max.h"
#include "ace/OS_NS_arpa_inet.h"
#include "ace/OS_NS_ctype.h"
#include "PacketHeaderDefs.h"
#include "Rtp.h"
#include "VoIpSession.h"

typedef struct
{
    unsigned char ProtocolDiscriminator;		
    unsigned char CallReferenceLength:4;
	unsigned char Data[0];
	/*unsigned char Originates:1;
	unsigned char Value:7;*/
	
} Q931HeaderStruct;


typedef struct
{
	unsigned char	 Version;		// Tpkt version 
	unsigned char	 Reserved;		// Reserved
	unsigned short   Length;  
	Q931HeaderStruct q931;	
	 unsigned char Data[0];	
} TpktHeaderStruct;


typedef struct
{
	
    unsigned char MessageType;	
    unsigned char IdentiFy;		
    unsigned char Data[0];	
} Q931MessageHeaderStruct;


/*char   : 1 byte
short  : 2 bytes
int    : 4 bytes
long   : 4 bytes
float  : 4 bytes
double : 8 bytes*/

/*typedef struct
{
   unsigned char Originates:1; 
   unsigned char CallReferenceValue[0];	
} Q931CallReferenceValueHeaderStruct;*/





typedef struct
{
	 unsigned short Length;	
	 unsigned char Discriminator;
	 unsigned char Data[0];
   // unsigned char Length;
   /* unsigned char Discriminator;
			*/

} Q931UserUserHeaderStruct;




void ScanAllH225Messages(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, TcpHeaderStruct* tcpHeader, u_char* ipPacketEnd);

#endif
