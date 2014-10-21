/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, MPMediaQuery, NSArray;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _activeShuffleType;
	bool _dirty;
	NSMutableArray* _orderedArray;
	MPMediaQuery* _sourceMediaQuery;
	NSArray* _sourceMediaQueryItems;
	NSRange _focusedRange;

}

@property (nonatomic,readonly) MPMediaQuery * sourceMediaQuery;                 //@synthesize sourceMediaQuery=_sourceMediaQuery - In the implementation block
@property (assign,nonatomic) NSRange focusedRange;                              //@synthesize focusedRange=_focusedRange - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long realShuffleType; 
+(bool)supportsSecureCoding;
-(void)_resetCaches;
-(unsigned long long)realShuffleType;
-(id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned long long)arg3 ;
-(void)_rebuildCaches;
-(unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2 ;
-(void)_rebuildCachesWithInitialSourceIndex:(unsigned long long)arg1 ;
-(void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned long long)arg1 ;
-(void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned long long)arg1 ;
-(void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned long long)arg1 ;
-(id)_includeInShuffleItemsForQuery:(id)arg1 ;
-(id)initWithSourceMediaQuery:(id)arg1 ;
-(unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 ;
-(void)invalidateSourceMediaQueryAndLoadItems;
-(void)shuffleAlbumsWithInitialIndex:(unsigned long long)arg1 ;
-(void)shuffleItemsWithInitialIndex:(unsigned long long)arg1 ;
-(void)unshuffle;
-(id)sourceMediaQuery;
-(NSRange)focusedRange;
-(void)setFocusedRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)items;
-(void).cxx_destruct;
@end

