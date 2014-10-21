/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSISVariableDelegate.h>

@class NSMutableDictionary, NSMutableSet;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableSet* variablesToIntegralize;
	NSMutableSet* userObservableVariables;

}
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(bool)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(bool)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end
