/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class UILabel, GKButton;

@interface GKFriendRequestCell : GKBasePlayerCell {

	UILabel* _messageLabel;
	UILabel* _whenLabel;
	GKButton* _acceptButton;
	GKButton* _declineButton;

}

@property (nonatomic,retain) UILabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * whenLabel;                   //@synthesize whenLabel=_whenLabel - In the implementation block
@property (nonatomic,retain) GKButton * acceptButton;               //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) GKButton * declineButton;              //@synthesize declineButton=_declineButton - In the implementation block
+(Class)cellClassForPlayer:(id)arg1 ;
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(bool)arg3 ;
-(void)updateLineLayoutConstraints;
-(void)didUpdateModel;
-(id)whenLabel;
-(void)setWhenLabel:(id)arg1 ;
-(void)didTouchAccept:(id)arg1 ;
-(void)didTouchDecline:(id)arg1 ;
-(id)acceptButton;
-(id)declineButton;
-(void)setMessageLabel:(id)arg1 ;
-(void)setAcceptButton:(id)arg1 ;
-(void)setDeclineButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)messageLabel;
@end

