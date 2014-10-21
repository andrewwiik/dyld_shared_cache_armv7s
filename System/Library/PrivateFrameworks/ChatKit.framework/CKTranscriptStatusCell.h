/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UILabel, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptCell {

	UILabel* _label;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
-(void)configureForRowObject:(id)arg1 ;
-(void)configureForRow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)layoutSubviewsForContents;
-(void)startZoomInAnimation;
@end

