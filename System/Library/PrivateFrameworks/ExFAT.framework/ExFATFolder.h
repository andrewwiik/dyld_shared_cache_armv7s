/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExFAT/ExFAT-Structs.h>
#import <ExFAT/ExFATItem.h>
#import <ExFAT/UserFSFolder.h>

@class NSMapTable, ExFATVolume, NSString;

@interface ExFATFolder : ExFATItem <UserFSFolder> {

	NSMapTable* __children;

}

@property (nonatomic,retain) ExFATVolume * volume; 
@property (nonatomic,retain) NSMapTable * _children;                     //@synthesize _children=__children - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) bool isDirectory; 
@property (getter=isLocked,nonatomic,readonly) bool locked; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) long long createdDate; 
@property (nonatomic,readonly) long long modifiedDate; 
-(bool)isDirectory;
-(id)debugDescription;
-(void).cxx_destruct;
-(id)initWithVolume:(id)arg1 parent:(id)arg2 name:(id)arg3 startingCluster:(unsigned)arg4 length:(unsigned long long)arg5 contiguous:(bool)arg6 ;
-(bool)enumerateFileSetsAtOffset:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)childNamed:(id)arg1 ;
-(bool)deleteChildNamed:(id)arg1 ;
-(int)_updateFileSet:(exfat_file_entry_set*)arg1 atOffset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)_children;
-(int)readChildrenIntoArray:(id)arg1 withState:(id*)arg2 ;
-(bool)enumerateChildrenUsingBlock:(/*^block*/ id)arg1 ;
-(void)set_children:(id)arg1 ;
@end
