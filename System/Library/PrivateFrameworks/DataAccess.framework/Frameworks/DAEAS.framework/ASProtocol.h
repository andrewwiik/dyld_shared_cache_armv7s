/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {

	ASProtocolCapabilities* _capabilities;

}
-(id)protocolVersion;
-(void)dealloc;
-(id)init;
-(bool)useEventIdsInMeetingResponse;
-(void)_setCapabilitiesVersion:(id)arg1 ;
-(id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2 ;
-(id)_requestLinePrefixWithTask:(id)arg1 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg1 ;
-(bool)supportsSettingsCommand;
-(bool)supportsItemOperationsCommand;
-(bool)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(bool)supportsNoteSyncing;
-(id)initWithVersion:(id)arg1 ;
-(id)initWithCachedVersion:(id)arg1 ;
-(bool)versionChangeRequiresAccountUpgrade:(id)arg1 ;
-(id)requestURLStringWithTask:(id)arg1 ;
-(bool)headerNeedsUserAgent;
-(bool)headerNeedsPolicyKey;
-(bool)headerNeedsProtocolVersion;
-(bool)commandStringNeedsSaveInSent;
-(bool)shouldUseWBXMLProvisioning;
-(bool)usesAirSyncBaseNamespace;
-(bool)sendAttendeeRole;
-(bool)shouldSendClassForFolderItemsSync;
-(bool)shouldSendFullContactInfo;
-(bool)requiresExplicitlyFalseGetChanges;
-(bool)useBooleanFolderItemsSyncDeletesAsMoves;
-(bool)sendEmailInWBXML;
-(bool)usesTopLevelStatusCodes;
-(bool)useSmartMailTasks;
-(bool)fetchAttachmentsWithItemOperations;
-(bool)allAttachmentsAreBase64ed;
-(bool)sendCalendarInfoInRecurrence;
-(bool)serverCreatesEventChangesForInvitations;
-(bool)allowsReminderOnCompletedTasks;
-(bool)sendFirstDayOfWeekInRecurrence;
-(bool)sendDeviceInfoOnProvision;
-(bool)sendUserAgentInDeviceInfo;
-(bool)supportsGALPhotos;
-(bool)supportsAttendeesInExceptions;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
@end

