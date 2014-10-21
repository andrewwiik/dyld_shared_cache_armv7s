/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSDate, NSString, NSNumber;

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic,readonly) NSURL * URIRepresentation; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) long long entryPriority; 
@property (nonatomic,@dynamic,retain) NSDate * entryDate; 
@property (nonatomic,@dynamic,retain) NSString * entryAlbumGUID; 
@property (nonatomic,@dynamic,retain) NSString * entryInvitationRecordGUID; 
@property (nonatomic,@dynamic,retain) NSNumber * entryTypeNumber; 
@property (nonatomic,@dynamic,retain) NSNumber * entryPriorityNumber; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)allEntriesInManagedObjectContext:(id)arg1 ;
+(id)entriesSortDescriptorsAscending:(bool)arg1 ;
+(id)allEntriesInLibrary:(id)arg1 ;
+(id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(long long)arg4 ;
+(id)recentAssetsEntriesInLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3 ;
+(id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2 ;
-(id)URIRepresentation;
-(bool)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(long long)entryType;
-(long long)entryPriority;
@end

