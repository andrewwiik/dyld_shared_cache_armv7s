/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTextAttachmentCell <NSObject>
@optional
-(CGRect*)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2;

@required
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
-(CGSize*)cellSize;
-(CGPoint*)cellBaselineOffset;
-(void)setAttachment:(id)arg1;
-(id)attachment;
@end

