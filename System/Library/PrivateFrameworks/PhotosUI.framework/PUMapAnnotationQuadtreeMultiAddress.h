/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUMapAnnotationQuadtreeAddress.h>

@class NSMutableSet, NSArray;

@interface PUMapAnnotationQuadtreeMultiAddress : PUMapAnnotationQuadtreeAddress {

	NSMutableSet* _alternativeAddresses;

}

@property (nonatomic,readonly) NSArray * alternativeAddresses; 
-(void).cxx_destruct;
-(id)alternativeAddresses;
-(id)initWithQuadtreeAddress:(id)arg1 ;
-(void)addAlternativeAddress:(id)arg1 ;
@end

