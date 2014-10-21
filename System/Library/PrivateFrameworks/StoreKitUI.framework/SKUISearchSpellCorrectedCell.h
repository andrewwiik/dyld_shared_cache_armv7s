/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIClientContext, UIImageView, UILabel, NSString, UIButton, UIControl;

@interface SKUISearchSpellCorrectedCell : UICollectionViewCell {

	bool _autoCorrected;
	SKUIClientContext* _clientContext;
	UIImageView* _imageView;
	UILabel* _label;
	long long _preAutoCorrectCount;
	NSString* _searchTerm;
	NSString* _spellCorrectedTerm;
	UIButton* _spellCorrectionButton;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * spellCorrectedTerm;                      //@synthesize spellCorrectedTerm=_spellCorrectedTerm - In the implementation block
@property (assign,nonatomic) bool autoCorrected;                               //@synthesize autoCorrected=_autoCorrected - In the implementation block
@property (assign,nonatomic) long long preAutoCorrectCount;                    //@synthesize preAutoCorrectCount=_preAutoCorrectCount - In the implementation block
@property (nonatomic,readonly) UIControl * spellCorrectionButton;              //@synthesize spellCorrectionButton=_spellCorrectionButton - In the implementation block
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(id)clientContext;
-(id)spellCorrectedTerm;
-(void)setSpellCorrectedTerm:(id)arg1 ;
-(bool)autoCorrected;
-(void)setAutoCorrected:(bool)arg1 ;
-(long long)preAutoCorrectCount;
-(void)setPreAutoCorrectCount:(long long)arg1 ;
-(void)_reloadLabel;
-(id)spellCorrectionButton;
-(void)setClientContext:(id)arg1 ;
@end

