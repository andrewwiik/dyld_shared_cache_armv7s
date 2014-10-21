/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface CKTranscriptDataUpdate : NSObject {

	NSArray* _rows;
	NSArray* _oldRows;
	NSIndexSet* _inserted;
	NSIndexSet* _deleted;
	NSIndexSet* _reloaded;
	NSIndexSet* _frameChanged;
	NSIndexSet* _tailChanged;

}

@property (nonatomic,copy) NSArray * rows;                         //@synthesize rows=_rows - In the implementation block
@property (nonatomic,copy) NSArray * oldRows;                      //@synthesize oldRows=_oldRows - In the implementation block
@property (nonatomic,copy) NSIndexSet * inserted;                  //@synthesize inserted=_inserted - In the implementation block
@property (nonatomic,copy) NSIndexSet * deleted;                   //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSIndexSet * reloaded;                  //@synthesize reloaded=_reloaded - In the implementation block
@property (nonatomic,copy) NSIndexSet * frameChanged;              //@synthesize frameChanged=_frameChanged - In the implementation block
@property (nonatomic,copy) NSIndexSet * tailChanged;               //@synthesize tailChanged=_tailChanged - In the implementation block
+(id)updateWithRows:(id)arg1 oldRows:(id)arg2 reloadedIndexes:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)rows;
-(void)setRows:(id)arg1 ;
-(id)inserted;
-(id)reloaded;
-(id)tailChanged;
-(id)oldRows;
-(id)frameChanged;
-(void)setOldRows:(id)arg1 ;
-(void)setInserted:(id)arg1 ;
-(void)setReloaded:(id)arg1 ;
-(void)setFrameChanged:(id)arg1 ;
-(void)setTailChanged:(id)arg1 ;
-(id)deleted;
-(void)setDeleted:(id)arg1 ;
@end

