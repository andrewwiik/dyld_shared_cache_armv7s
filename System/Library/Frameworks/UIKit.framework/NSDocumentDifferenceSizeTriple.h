/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject {

	NSDocumentDifferenceSize* _dueToRecentChangesBeforeSaving;
	NSDocumentDifferenceSize* _betweenPreservingPreviousVersionAndSaving;
	NSDocumentDifferenceSize* _betweenPreviousSavingAndSaving;

}

@property (nonatomic,readonly) NSDocumentDifferenceSize * dueToRecentChangesBeforeSaving;                         //@synthesize dueToRecentChangesBeforeSaving=_dueToRecentChangesBeforeSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreservingPreviousVersionAndSaving;              //@synthesize betweenPreservingPreviousVersionAndSaving=_betweenPreservingPreviousVersionAndSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreviousSavingAndSaving;                         //@synthesize betweenPreviousSavingAndSaving=_betweenPreviousSavingAndSaving - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)dueToRecentChangesBeforeSaving;
-(id)betweenPreservingPreviousVersionAndSaving;
-(id)betweenPreviousSavingAndSaving;
@end

