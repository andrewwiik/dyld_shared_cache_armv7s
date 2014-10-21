/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject {

	bool _isUserScroll;
	DOMNode* _node;
	CGPoint _offset;

}

@property (nonatomic,retain) DOMNode * node;                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint offset;                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) bool isUserScroll;              //@synthesize isUserScroll=_isUserScroll - In the implementation block
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)node;
-(id)initWithNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(bool)arg3 ;
-(bool)coalesceScrollForNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(bool)arg3 ;
-(void)setNode:(id)arg1 ;
-(bool)isUserScroll;
-(void)setIsUserScroll:(bool)arg1 ;
@end

