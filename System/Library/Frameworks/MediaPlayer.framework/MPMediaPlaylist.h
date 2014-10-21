/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long playlistAttributes; 
+(void)_createFilterableDictionary;
+(bool)canFilterByProperty:(id)arg1 ;
+(bool)_isValidPlaylistProperty:(id)arg1 ;
-(id)representativeItem;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)loadGeniusMixArtworkWithTileLength:(double)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(long long)playlistAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)items;
-(unsigned long long)mediaTypes;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(bool)existsInLibrary;
@end

