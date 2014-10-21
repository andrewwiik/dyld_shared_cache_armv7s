/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExFAT/ExFATItem.h>
#import <ExFAT/UserFSFile.h>

@class ExFATVolume, NSString;

@interface ExFATFile : ExFATItem <UserFSFile>

@property (nonatomic,retain) ExFATVolume * volume; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) bool isDirectory; 
@property (getter=isLocked,nonatomic,readonly) bool locked; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) long long createdDate; 
@property (nonatomic,readonly) long long modifiedDate; 
-(bool)isDirectory;
-(id)debugDescription;
-(id)openStream;
@end

