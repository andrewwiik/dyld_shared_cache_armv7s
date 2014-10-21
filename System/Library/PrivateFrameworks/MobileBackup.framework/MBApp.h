/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate, NSDictionary;

@interface MBApp : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (nonatomic,readonly) NSDictionary * infoPlist;                         //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) bool isPlaceholder; 
@property (nonatomic,readonly) bool isSystemApp; 
@property (getter=isSafeHarbor,nonatomic,readonly) bool safeHarbor; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
-(id)bundleID;
-(id)bundleVersion;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)domain;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isPlaceholder;
-(id)propertyListForBackupProperties;
-(bool)isSafeHarbor;
-(id)datePlacedInSafeHarbor;
-(id)safeHarborDir;
-(void)setContainerDir:(id)arg1 ;
-(void)setDatePlacedInSafeHarbor:(id)arg1 ;
-(id)propertyListForSafeHarborInfo;
-(id)containerDir;
-(bool)isEqualToApp:(id)arg1 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(bool)isSystemApp;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(id)infoPlist;
-(id)initWithPropertyList:(id)arg1 ;
@end

