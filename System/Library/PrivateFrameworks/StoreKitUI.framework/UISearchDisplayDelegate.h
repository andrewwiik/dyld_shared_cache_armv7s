/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UISearchDisplayDelegate <NSObject>
@optional
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
@end

