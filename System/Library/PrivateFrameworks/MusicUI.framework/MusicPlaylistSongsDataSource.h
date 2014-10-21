/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicQueryDataSource.h>

@class MPMediaLibrary, MPMediaPlaylist;

@interface MusicPlaylistSongsDataSource : MusicQueryDataSource {

	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,readonly) MPMediaPlaylist * playlist; 
-(id)playlist;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(bool)entityIsSeedItemAtIndex:(unsigned long long)arg1 ;
-(id)entityCountFormat;
-(bool)showsEntityCountFooter;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
@end
