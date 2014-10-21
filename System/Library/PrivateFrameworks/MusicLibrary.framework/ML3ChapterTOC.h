/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/MLITChapterTOC.h>

@class ML3Track;

@interface ML3ChapterTOC : MLITChapterTOC {

	ML3Track* _track;

}
-(void).cxx_destruct;
-(id)initWithChapterDataRef:(ChapterDataRef)arg1 track:(id)arg2 ;
-(id)artworkCacheIDForTimeInMS:(unsigned)arg1 ;
-(id)artworkCacheIDForChapterIndex:(unsigned)arg1 ;
-(id)imageDataForArtworkFormatID:(unsigned)arg1 size:(CGSize)arg2 artworkChapterIndex:(unsigned)arg3 artworkInstanceInfo:(MLArtworkInstanceInfo*)arg4 ;
@end

