/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioStationTreeNode.h>

@class RadioArtworkCollection, NSArray, NSString, NSDictionary;

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (nonatomic,copy) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) long long childNodeLoadingStyle; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (assign,nonatomic) long long displayStyle; 
@property (assign,nonatomic) bool hasAdditionalChildNodes; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long nodeID; 
@property (nonatomic,copy) NSDictionary * stationDictionary; 
-(void)setArtworkCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setChildNodeLoadingStyle:(long long)arg1 ;
-(void)setChildNodes:(id)arg1 ;
-(void)setHasAdditionalChildNodes:(bool)arg1 ;
-(void)setNodeID:(long long)arg1 ;
-(void)setStationDictionary:(id)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
@end

