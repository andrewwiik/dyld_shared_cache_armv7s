/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class MFMessageStore, NSString, NSArray, MFMimePart, NSURL;

@interface MFMessage : NSObject <NSCopying> {

	MFMessageStore* _store;
	unsigned _preferredEncoding;
	NSString* _senderAddressComment;
	unsigned _dateSentInterval;
	unsigned _dateReceivedInterval;
	unsigned long long _generationNumber;
	NSString* _subject;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSArray* _sender;
	NSString* _contentType;
	long long _messageIDHeaderHash;
	long long _conversationID;
	NSString* _summary;
	NSString* _externalID;
	MFMimePart* _parentPart;
	NSURL* _messageURL;
	unsigned _calculatedAttachmentInfo : 1;
	unsigned short _numberOfAttachments;

}

@property (nonatomic,retain) MFMimePart * parentPart;              //@synthesize parentPart=_parentPart - In the implementation block
+(id)messageWithRFC822Data:(id)arg1 ;
+(Class)dataMessageStoreToUse;
+(id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 ;
+(void)setMessageClassForStore:(id)arg1 ;
-(void)setSender:(id)arg1 ;
-(id)bodyData;
-(id)bestAlternativeInPart:(id)arg1 ;
-(id)defaultAlternativeInPart:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 ;
-(id)additionalHeadersForReply;
-(id)additionalHeadersForForward;
-(void)dealloc;
-(id)init;
-(id)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned)uid;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(void)setParentPart:(id)arg1 ;
-(bool)_doesDateAppearToBeSane:(id)arg1 ;
-(id)_copyDateFromReceivedHeadersInHeaders:(id)arg1 ;
-(id)_copyDateFromDateHeaderInHeaders:(id)arg1 ;
-(void)setBcc:(id)arg1 ;
-(void)_setDateReceivedFromHeaders:(id)arg1 ;
-(void)_setDateSentFromHeaders:(id)arg1 ;
-(id)uniqueArray:(id)arg1 withStore:(id)arg2 ;
-(id)bcc;
-(long long)_messageIDHeaderHashIvar;
-(id)bodyDataIsComplete:(bool*)arg1 isPartial:(bool*)arg2 ;
-(id)bodyDataIsComplete:(bool*)arg1 isPartial:(bool*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)headerDataDownloadIfNecessary:(bool)arg1 ;
-(void)_calculateAttachmentInfoFromBody:(id)arg1 ;
-(id)subjectIfCached;
-(bool)needsDateReceived;
-(id)bodyDataIsComplete:(bool*)arg1 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 ;
-(bool)fetchDataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 isComplete:(bool*)arg4 downloadIfNecessary:(bool)arg5 ;
-(void)setNumberOfAttachments:(unsigned)arg1 ;
-(id)headerData;
-(id)messageIDHeader;
-(bool)isMessageContentsLocallyAvailable;
-(unsigned)preferredEncoding;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(bool)calculatedNumberOfAttachments;
-(void)calculateAttachmentInfoFromBody:(id)arg1 ;
-(unsigned short)numberOfAttachments;
-(unsigned long long)messageSize;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(id)senderAddressComment;
-(id)messageStore;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageData;
-(bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 ;
-(id)headersIfAvailable;
-(id)parentPart;
-(id)senders;
-(void)setDateSentTimeIntervalSince1970:(double)arg1 ;
-(id)messageID;
-(id)remoteID;
-(id)dataPathForMimePart:(id)arg1 ;
-(id)preferredEmailAddressToReplyWith;
-(void)setMessageData:(id)arg1 isPartial:(bool)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(bool)canBeDeleted;
-(bool)isLibraryMessage;
-(id)attachmentStorageLocation;
-(void)setMessageStore:(id)arg1 ;
-(unsigned long long)generationNumber;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5 ;
-(id)messageBodyUpdatingFlags:(bool)arg1 ;
-(id)messageBodyIfAvailableUpdatingFlags:(bool)arg1 ;
-(id)firstSender;
-(id)dateSent;
-(id)dateReceived;
-(long long)conversationID;
-(id)messageDataIsComplete:(bool*)arg1 downloadIfNecessary:(bool)arg2 ;
-(void)setGenerationNumber:(unsigned long long)arg1 ;
-(id)sendersIfCached;
-(id)toIfCached;
-(id)ccIfCached;
-(id)bccIfCached;
-(void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10 ;
-(void)setContentType:(id)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(id)externalID;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned)arg11 ;
-(void)setDateReceivedTimeIntervalSince1970:(double)arg1 ;
-(void)setMessageIDHash:(long long)arg1 ;
-(long long)messageIDHash;
-(id)cc;
-(void)setCc:(id)arg1 ;
-(id)messageIDHeaderInFortyBytesOrLess;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(id)messageURL;
-(void)setMessageURL:(id)arg1 ;
-(long long)generationCompare:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(void)setMessageInfoFromMessage:(id)arg1 ;
-(id)persistentID;
-(id)to;
-(void)setTo:(id)arg1 ;
-(id)contentType;
-(id)headers;
-(id)summary;
@end

