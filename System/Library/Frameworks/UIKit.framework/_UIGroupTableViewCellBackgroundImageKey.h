/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {

	bool _opaque;
	bool _selected;
	CGSize _size;
	UIColor* _backgroundColor;
	UIColor* _sectionBorderColor;
	double _sectionBorderWidth;
	UIColor* _separatorColor;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _fillColor;
	UIColor* _selectionColor;
	double _leftPhase;
	double _rightPhase;
	int _sectionLocation;
	long long _selectionStyle;
	UIEdgeInsets _separatorInset;

}

@property (assign,nonatomic) bool opaque;                               //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) bool selected;                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionBorderColor;              //@synthesize sectionBorderColor=_sectionBorderColor - In the implementation block
@property (assign,nonatomic) double sectionBorderWidth;                 //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * topShadowColor;                  //@synthesize topShadowColor=_topShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomShadowColor;               //@synthesize bottomShadowColor=_bottomShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                  //@synthesize selectionColor=_selectionColor - In the implementation block
@property (assign,nonatomic) double leftPhase;                          //@synthesize leftPhase=_leftPhase - In the implementation block
@property (assign,nonatomic) double rightPhase;                         //@synthesize rightPhase=_rightPhase - In the implementation block
@property (assign,nonatomic) int sectionLocation;                       //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                  //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;               //@synthesize separatorInset=_separatorInset - In the implementation block
-(void)setOpaque:(bool)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id)separatorColor;
-(void)setSectionBorderColor:(id)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setTopShadowColor:(id)arg1 ;
-(void)setBottomShadowColor:(id)arg1 ;
-(id)sectionBorderColor;
-(void)setSelected:(bool)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(id)fillColor;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(int)sectionLocation;
-(id)topShadowColor;
-(bool)opaque;
-(void)setSectionBorderWidth:(double)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(id)bottomShadowColor;
-(bool)selected;
-(double)sectionBorderWidth;
-(id)selectionColor;
-(void)setSelectionColor:(id)arg1 ;
-(double)leftPhase;
-(void)setLeftPhase:(double)arg1 ;
-(double)rightPhase;
-(void)setRightPhase:(double)arg1 ;
@end

