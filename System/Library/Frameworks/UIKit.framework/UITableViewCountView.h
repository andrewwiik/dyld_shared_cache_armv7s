/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSString;

@interface UITableViewCountView : UILabel {

	NSString* _countString;
	int _count;

}
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3 ;
-(void)setCountString:(id)arg1 withCount:(long long)arg2 ;
@end

