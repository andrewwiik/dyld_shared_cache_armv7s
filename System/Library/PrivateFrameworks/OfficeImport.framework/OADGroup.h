/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>
#import <OfficeImport/OADDrawableContainer.h>

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {

	CGRect mLogicalBounds;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(CGRect)logicalBounds;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)removeUnnecessaryOverrides;
-(id)groupProperties;
-(id)children;
@end

