/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSIndexSet, NSArray, NSIndexPath;

@interface PUTransitionSectionInfo : NSObject {

	long long _transitionSection;
	NSIndexSet* _visualSections;
	NSArray* _visualRowStartMarkers;
	long long _contiguousRows;
	NSIndexPath* _anchorRealPath;
	PUGridCoordinates _anchorShiftOffset;

}

@property (assign,nonatomic) long long transitionSection;                      //@synthesize transitionSection=_transitionSection - In the implementation block
@property (nonatomic,retain) NSIndexSet * visualSections;                      //@synthesize visualSections=_visualSections - In the implementation block
@property (nonatomic,retain) NSArray * visualRowStartMarkers;                  //@synthesize visualRowStartMarkers=_visualRowStartMarkers - In the implementation block
@property (assign,nonatomic) long long contiguousRows;                         //@synthesize contiguousRows=_contiguousRows - In the implementation block
@property (nonatomic,retain) NSIndexPath * anchorRealPath;                     //@synthesize anchorRealPath=_anchorRealPath - In the implementation block
@property (assign,nonatomic) PUGridCoordinates anchorShiftOffset;              //@synthesize anchorShiftOffset=_anchorShiftOffset - In the implementation block
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(long long)transitionSection;
-(void)setTransitionSection:(long long)arg1 ;
-(id)visualSections;
-(void)setVisualSections:(id)arg1 ;
-(id)visualRowStartMarkers;
-(void)setVisualRowStartMarkers:(id)arg1 ;
-(long long)contiguousRows;
-(void)setContiguousRows:(long long)arg1 ;
-(id)anchorRealPath;
-(void)setAnchorRealPath:(id)arg1 ;
-(PUGridCoordinates)anchorShiftOffset;
-(void)setAnchorShiftOffset:(PUGridCoordinates)arg1 ;
@end

