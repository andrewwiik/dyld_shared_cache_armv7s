/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _expirationLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)_setupLabel:(id)arg1 isSubtitle:(bool)arg2 ;
-(void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(bool)arg3 ;
-(void)setExpiration:(id)arg1 ;
@end
