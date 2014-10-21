/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSArray, UIBarButtonItem, UIView;

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {

	unsigned long long _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIBarButtonItem* _anchorBarButtonItem;
	UIView* _anchorView;

}

@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                 //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                      //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;                    //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)passthroughViews;
-(void)setPassthroughViews:(id)arg1 ;
-(id)defaultSegueClassName;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(unsigned long long)permittedArrowDirections;
-(id)anchorBarButtonItem;
-(id)anchorView;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)setAnchorBarButtonItem:(id)arg1 ;
-(void)setAnchorView:(id)arg1 ;
@end

