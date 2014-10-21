/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob {

	NSArray* _MSASSharingRelationships;
	long long _relationshipChangeType;
	NSString* _albumGUID;
	NSString* _resendInvitationGUID;
	long long _jobType;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (nonatomic,retain) NSArray * MSASSharingRelationships;                 //@synthesize MSASSharingRelationships=_MSASSharingRelationships - In the implementation block
@property (assign,nonatomic) long long relationshipChangeType;                   //@synthesize relationshipChangeType=_relationshipChangeType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * resendInvitationGUID;                    //@synthesize resendInvitationGUID=_resendInvitationGUID - In the implementation block
@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1 ;
+(void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
+(void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
+(void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(bool)shouldArchiveXPCToDisk;
-(id)albumGUID;
-(id)mstreamdInfoDictionary;
-(long long)jobType;
-(void)setMstreamdInfoDictionary:(id)arg1 ;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(id)arg1 ;
-(void)setMSASSharingRelationships:(id)arg1 ;
-(void)setRelationshipChangeType:(long long)arg1 ;
-(void)setResendInvitationGUID:(id)arg1 ;
-(id)MSASSharingRelationships;
-(long long)relationshipChangeType;
-(id)resendInvitationGUID;
-(void)executeSaveServerStateLocallyForSharingACLRelationships;
-(void)executeSaveServerStateLocallyForSharingInvitationRelationships;
-(void)executeSendServerPendingInvitationsForAlbumWithGUID;
@end

