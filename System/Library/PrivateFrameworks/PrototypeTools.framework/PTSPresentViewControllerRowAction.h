/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@interface PTSPresentViewControllerRowAction : PTSRowAction {

	/*^block*/ id _viewControllerCreator;

}

@property (nonatomic,copy) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/ id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(void)setViewControllerCreator:(/*^block*/ id)arg1 ;
-(/*^block*/ id)viewControllerCreator;
@end
