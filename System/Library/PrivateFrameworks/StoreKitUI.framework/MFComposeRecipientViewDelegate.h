/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFComposeRecipientViewDelegate <MFComposeHeaderViewDelegate>
@optional
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1;
-(void)recipientViewDidResignFirstResponder:(id)arg1;
-(bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecent:(id)arg2;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)composeRecipientViewReturnPressed:(id)arg1;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
-(bool)composeRecipientViewShowingSearchResults:(id)arg1;
-(bool)presentSearchResultsForComposeRecipientView:(id)arg1;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
-(bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
@end

