/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 commitEditingStyle:(long long)arg2 forCellAtIndexPath:(id)arg3;
-(long long)numberOfSectionsInGridView:(id)arg1;
-(id)gridView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@required
-(id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
-(long long)gridView:(id)arg1 numberOfRowsInSection:(long long)arg2;
-(long long)gridView:(id)arg1 numberOfColumnsInSection:(long long)arg2;
@end
