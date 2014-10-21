/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView {

	WAKWindow* _wakWindow;
	int _inGestureType;
	int _tilingArea;
	bool _didFirstTileLayout;
	bool _layoutTilesInMainThread;
	bool _tilingModeIsLocked;
	bool _allowsPaintingAndScriptsWhilePanning;
	bool _editingTilingModeEnabled;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_didScroll;
-(CGRect)visibleRect;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(void)setTilingEnabled:(bool)arg1 ;
-(void)setLayoutTilesInMainThread:(bool)arg1 ;
-(void)layoutTilesNow;
-(void)setEditingTilingModeEnabled:(bool)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilingArea:(int)arg1 ;
-(void)setTilesOpaque:(bool)arg1 ;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)setInGesture:(int)arg1 ;
-(int)tilingArea;
-(void)_updateForScreen:(id)arg1 ;
-(void)_screenChanged:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)updateTilingMode;
-(bool)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(bool)arg1 ;
-(bool)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)setWAKWindow:(id)arg1 ;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(bool)allowsPaintingAndScriptsWhilePanning;
-(void)setAllowsPaintingAndScriptsWhilePanning:(bool)arg1 ;
-(CGSize)tileSize;
-(void)setDrawsGrid:(bool)arg1 ;
-(bool)drawsGrid;
-(unsigned)maxTileCount;
-(unsigned)adjustedMaxTileCount;
-(bool)isTilingEnabled;
-(void)setLogsTilingChanges:(bool)arg1 ;
-(bool)logsTilingChanges;
-(void)setTileDrawingEnabled:(bool)arg1 ;
-(bool)editingTilingModeEnabled;
-(bool)tileDrawingEnabled;
-(bool)layoutTilesInMainThread;
-(id)wakWindow;
@end

