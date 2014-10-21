/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (assign) double lineSpacing; 
@property (assign) double paragraphSpacing; 
@property (assign) long long alignment; 
@property (assign) double firstLineHeadIndent; 
@property (assign) double headIndent; 
@property (assign) double tailIndent; 
@property (assign) long long lineBreakMode; 
@property (assign) double minimumLineHeight; 
@property (assign) double maximumLineHeight; 
@property (assign) long long baseWritingDirection; 
@property (assign) double lineHeightMultiple; 
@property (assign) double paragraphSpacingBefore; 
@property (assign) float hyphenationFactor; 
@property (nonatomic,copy) NSArray * tabStops; 
@property (assign,nonatomic) double defaultTabInterval; 
-(void)setHeadIndent:(double)arg1 ;
-(void)setFirstLineHeadIndent:(double)arg1 ;
-(void)setParagraphSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)setMaximumLineHeight:(double)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setTailIndent:(double)arg1 ;
-(void)setTabStops:(id)arg1 ;
-(void)setParagraphSpacingBefore:(double)arg1 ;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)setTighteningFactorForTruncation:(float)arg1 ;
-(void)setHeaderLevel:(long long)arg1 ;
-(void)setTextBlocks:(id)arg1 ;
-(void)setTextLists:(id)arg1 ;
-(void)_mutateTabStops;
-(void)setParagraphStyle:(id)arg1 ;
-(void)addTabStop:(id)arg1 ;
-(void)removeTabStop:(id)arg1 ;
@end

