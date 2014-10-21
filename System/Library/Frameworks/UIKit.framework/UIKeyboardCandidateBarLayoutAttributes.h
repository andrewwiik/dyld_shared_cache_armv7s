/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <CoreFoundation/NSCopying.h>

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	bool _beginsFirstPage;
	bool _endsLastPage;

}

@property (assign,nonatomic) bool beginsFirstPage;              //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) bool endsLastPage;                 //@synthesize endsLastPage=_endsLastPage - In the implementation block
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setBeginsFirstPage:(bool)arg1 ;
-(void)setEndsLastPage:(bool)arg1 ;
-(bool)beginsFirstPage;
-(bool)endsLastPage;
@end

