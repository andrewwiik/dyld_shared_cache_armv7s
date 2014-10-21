/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmarkCollection;

@interface FolderPickerList : NSObject {

	unsigned long long _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(void)dealloc;
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
@end

