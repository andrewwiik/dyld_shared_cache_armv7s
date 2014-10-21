/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class NSString, NSMutableDictionary, NSMutableSet, MFLock;

@interface MFLibraryMessage : MFMailMessage {

	unsigned _libraryID;
	NSString* _remoteID;
	unsigned _uid;
	unsigned long long _uniqueRemoteId;
	unsigned long long _size;
	unsigned _mailboxID;
	unsigned _originalMailboxID;
	NSString* _messageID;
	NSMutableDictionary* _metadata;
	NSMutableSet* _metadataChangedKeys;
	MFLock* _metadataLock;
	/*^block*/ id _deallocationHandler;

}

@property (nonatomic,copy) id deallocationHandler;              //@synthesize deallocationHandler=_deallocationHandler - In the implementation block
+(id)messageWithLibraryID:(unsigned)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)path;
-(void)commit;
-(unsigned)uid;
-(id)account;
-(bool)isMessageContentsLocallyAvailable;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(unsigned long long)messageSize;
-(unsigned)libraryID;
-(id)messageStore;
-(unsigned)mailboxID;
-(id)initWithLibraryID:(unsigned)arg1 ;
-(id)messageID;
-(void)_updateUID;
-(void)setRemoteID:(id)arg1 ;
-(bool)hasTemporaryUid;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)remoteID;
-(void)setDeallocationHandler:(/*^block*/ id)arg1 ;
-(unsigned)originalMailboxID;
-(id)mailbox;
-(id)copyMessageInfo;
-(void)setUid:(unsigned)arg1 ;
-(void)setMailboxID:(unsigned)arg1 ;
-(void)_initializeMetadata;
-(id)_attachmentStorageLocation;
-(void)setLibraryID:(unsigned)arg1 ;
-(void)setOriginalMailboxID:(unsigned)arg1 ;
-(id)originalMailboxURL;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(bool)isPartial;
-(void)setIsPartial:(bool)arg1 ;
-(void)setHasTemporaryUid:(bool)arg1 ;
-(id)mailboxName;
-(long long)compareByUidWithMessage:(id)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(id)dataPathForMimePart:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(id)preferredEmailAddressToReplyWith;
-(void)setRemoteID:(const char*)arg1 flags:(unsigned long long)arg2 size:(unsigned)arg3 mailboxID:(unsigned)arg4 originalMailboxID:(unsigned)arg5 ;
-(void)setMessageData:(id)arg1 isPartial:(bool)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(bool)canBeDeleted;
-(bool)isLibraryMessage;
-(id)metadataValueForKey:(id)arg1 ;
-(id)attachmentStorageLocation;
-(/*^block*/ id)deallocationHandler;
-(id)library;
-(id)persistentID;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSummary:(id)arg1 ;
@end

