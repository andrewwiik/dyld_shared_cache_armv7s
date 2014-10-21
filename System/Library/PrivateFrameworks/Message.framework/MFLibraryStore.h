/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMailMessageStore.h>

@class MFMessageLibrary, NSDate, MFMessageCriterion;

@interface MFLibraryStore : MFMailMessageStore {

	MFMessageLibrary* _library;
	NSDate* _earliestReceivedDate;
	MFMessageCriterion* _criterion;
	unsigned long long _serverMessageCount;
	unsigned long long _fetchWindow;

}

@property (nonatomic,retain) NSDate * earliestReceivedDate;              //@synthesize earliestReceivedDate=_earliestReceivedDate - In the implementation block
+(id)sharedInstance;
+(bool)createEmptyStoreForPath:(id)arg1 ;
+(bool)storeAtPathIsWritable:(id)arg1 ;
+(id)storeWithMailbox:(id)arg1 ;
+(id)sharedInstanceIfExists;
+(unsigned)defaultLoadOptions;
+(id)storeWithCriterion:(id)arg1 ;
-(void)dealloc;
-(id)URLString;
-(void)openSynchronously;
-(void)updateUserInfoToLatestValues;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(unsigned long long)totalCount;
-(unsigned long long)unreadCount;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)nonDeletedCountIncludingServerSearch:(bool)arg1 andThreadSearch:(bool)arg2 ;
-(unsigned long long)fetchWindow;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(bool)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4 ;
-(bool)shouldCancel;
-(id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2 ;
-(void)writeUpdatedMessageDataToDisk;
-(bool)shouldGrowFetchWindow;
-(void)invalidateFetchWindow;
-(unsigned long long)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(bool)hasMessageForAccount:(id)arg1 ;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(bool)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2 ;
-(bool)allowsAppend;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)criterion;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)mailbox;
-(id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(bool)arg3 ;
-(id)initWithCriterion:(id)arg1 ;
-(void)_queueMessagesAdded:(id)arg1 ;
-(void)_queueMessageFlagsChanged:(id)arg1 ;
-(void)_queueMessagesWillBeCompacted:(id)arg1 ;
-(void)_queueMessagesWereCompacted:(id)arg1 ;
-(void)_updateMailboxUnreadCount;
-(id)copyOfMessageInfos;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned long long*)arg3 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 ;
-(void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(bool)arg2 ;
-(void)setEarliestReceivedDate:(id)arg1 ;
-(bool)_isSingleCoreDevice;
-(unsigned long long)_fetchWindowMultiple;
-(unsigned long long)_fetchWindowMinimum;
-(unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(bool)arg1 ;
-(id)filterMessagesByMembership:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg1 ;
-(bool)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(bool)arg5 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 usePartDatas:(bool)arg5 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(bool)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(bool*)arg3 consumer:(id)arg4 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5 ;
-(id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4 ;
-(void)compactMessages:(id)arg1 ;
-(void)purgeMessages:(id)arg1 ;
-(void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(void)_addInvocationToQueue:(id)arg1 ;
-(void)handleMessageFlagsChanged:(id)arg1 ;
-(void)handleMessagesWillBeCompacted:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg1 ;
-(bool)hasCompleteDataForMimePart:(id)arg1 ;
-(void)libraryFinishedSendingMessages;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)copyOfMessageInfosMatchingCriterion:(id)arg1 ;
-(id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2 ;
-(long long)oldestKnownConversation;
-(id)serverSearchResults;
-(void)willFetchMessages;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4 ;
-(void)updateMetadata;
-(void)_setNeedsAutosave;
-(void)_flushAllCachesLocking:(bool)arg1 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)earliestReceivedDate;
-(id)library;
-(void)setLibrary:(id)arg1 ;
@end

