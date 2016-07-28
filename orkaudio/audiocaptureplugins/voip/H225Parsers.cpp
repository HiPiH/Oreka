//H225Parsers

#include "H225Parsers.h"
#include "ParsingUtils.h"
#include "LogManager.h"
#include "VoIpConfig.h"
#include "Win1251.h"

static LoggerPtr s_h225ParsersLog = Logger::getLogger("packet.H225Parsers");

void ScanAllH225Messages(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, TcpHeaderStruct* tcpHeader, u_char* ipPacketEnd)
{
	/*CStdString logMsg;
	u_char* startTcpPayload 		= (u_char*)tcpHeader + (tcpHeader->off*4);
	TpktHeaderStruct* tpktHeader 	= (TpktHeaderStruct*)(startTcpPayload);
	if(tpktHeader->Version == 3 )
	{
		logMsg.Format("q931Header: ProtocolDiscriminator %i , CallReferenceLength %i",tpktHeader->q931.ProtocolDiscriminator,tpktHeader->q931.CallReferenceLength ); 
		LOG4CXX_DEBUG(s_h225ParsersLog, logMsg);
		
		Q931MessageHeaderStruct* message = (Q931MessageHeaderStruct*) ((u_char*)tpktHeader->Data + ((tpktHeader->q931.CallReferenceLength)*sizeof(u_char)));
		
		logMsg.Format("Message: IdentiFy %i , MessageType %i",message->IdentiFy ,message->MessageType ); 
		LOG4CXX_DEBUG(s_h225ParsersLog, logMsg);
		if(message->IdentiFy == 126 )  //User-User
		{
			Q931UserUserHeaderStruct* uu = (Q931UserUserHeaderStruct*)message->Data;
			logMsg.Format("USER-USER: length %i Discriminator %i ",ntohs(uu->Length),uu->Discriminator);				
			LOG4CXX_DEBUG(s_h225ParsersLog, logMsg);
			
			if(uu->Discriminator == 5)//X.208 and X.209 coded user information (Note 5)
			{
				
				
			}

		}
			
	
		
		
		
		
		
		
		
		
		
	
		
	}*/
	
}
