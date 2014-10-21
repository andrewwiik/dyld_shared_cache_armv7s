/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UIView, NSTimer, DOMNode, UIWebSelectionHandle, NSString, NSMutableArray, UIWebPDFView;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct __GSEvent* GSEventRef;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct __CFString* CFStringRef;

typedef struct CGImage* CGImageRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPath* CGPathRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} SCD_Struct_UI12;

typedef struct CGColor* CGColorRef;

typedef struct {
	SCD_Struct_UI12 top;
	SCD_Struct_UI12 middle;
	SCD_Struct_UI12 bottom;
} SCD_Struct_UI14;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_UI16;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGContext* CGContextRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_UI20;

typedef struct CGShading* CGShadingRef;

typedef union {
	float singleton;
	float array;
} SCD_Union_UI22;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	bool field5;
	bool field6;
} SCD_Struct_UI23;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
} SCD_Struct_UI25;

typedef struct {
	unsigned val[8];
} SCD_Struct_UI26;

typedef struct {
	bool field1;
	bool field2;
	bool field3;
	bool field4;
	double field5;
	int field6;
} SCD_Struct_UI27;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	CGSize field6;
} SCD_Struct_UI28;

typedef struct {
	id field1;
	double field2;
	double field3;
	SCD_Struct_UI28 field4;
	SCD_Struct_UI28 field5;
	SCD_Struct_UI28 field6;
	SCD_Struct_UI28 field7;
	bool field8;
} SCD_Struct_UI29;

typedef struct {
	unsigned idiom : 6;
	unsigned landscape : 1;
	unsigned split : 1;
	unsigned appearance : 8;
	unsigned rendering : 16;
} SCD_Struct_UI30;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef union {
	UIImage* image;
	UIView* view;
} SCD_Union_UI32;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_UI33;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	int position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_UI34;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_UI36;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_UI37;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_UI38;

typedef struct {
	NSTimer* timer;
	CGPoint location;
	bool isBlocked;
	bool isCancelled;
	bool isOnWebThread;
	bool isDisplayingHighlight;
	bool attemptedClick;
	CGPoint lastPanTranslation;
	DOMNode* element;
	id delegate;
	id interactionSheet;
	 UIWebRotatingSheet;
	id elementActions;
	 NSArray;
	bool allowsImageSheet;
	bool allowsDataDetectorsSheet;
	bool allowsLinkSheet;
	bool acceptsFirstResponder;
	double documentScale;
} SCD_Struct_UI39;

typedef struct UIWebViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	bool allowsUserScaling;
} UIWebViewportConfiguration;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_UI43;

typedef union GLKVector3 {
	SCD_Struct_UI43 field1;
	SCD_Struct_UI43 field2;
	SCD_Struct_UI43 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_UI45;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_UI46;

typedef union GLKQuaternion {
	SCD_Struct_UI45 field1;
	SCD_Struct_UI46 field2;
	float q[4];
} GLKQuaternion;

typedef struct {
	UIEdgeInsets quaternion;
	SCD_Struct_UI43 userAcceleration;
	SCD_Struct_UI43 rotationRate;
	SCD_Struct_UI43 magneticField;
	int magneticFieldCalibrationLevel;
	bool doingYawCorrection;
	bool doingBiasEstimation;
	bool isInitialized;
} SCD_Struct_UI48;

typedef struct {
	UIEdgeInsets field1;
	SCD_Struct_UI43 field2;
	SCD_Struct_UI43 field3;
	SCD_Struct_UI43 field4;
	int field5;
	bool field6;
	bool field7;
	bool field8;
} SCD_Struct_UI49;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_UI50;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	id field1;
	unsigned long long field2;
} SCD_Struct_UI52;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	CGPoint point;
	double time;
} SCD_Struct_UI54;

typedef struct {
	UIWebSelectionHandle* scrollingHandle;
	double startTime;
	int direction;
	NSTimer* timer;
} SCD_Struct_UI55;

typedef struct {
	UIWebSelectionHandle* activeHandle;
	CGPoint handleCenterStart;
	double handleOffset;
} SCD_Struct_UI56;

typedef struct {
	bool flipPossible;
	bool rectsChanged;
	CGRect originalSelectionRect;
} SCD_Struct_UI57;

typedef struct {
	UIWebSelectionHandle* start;
	UIWebSelectionHandle* end;
	CGSize startingOffset;
	bool anchorAtStart;
	SCD_Struct_UI57 flipData;
} SCD_Struct_UI58;

typedef union {
	float floatValue;
	double doubleValue;
	unsigned long long integerValue;
	void bytesValue;
} SCD_Union_UI59;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	long long objectID;
	long long nextGenericKey;
	unsigned nextValueSearchIndex;
	bool replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
	NSString* previousKey[64];
	void* previousKeyID[64];
	bool previousKeyExists[64];
	long long hashHits;
	long long hashHotMisses;
	long long hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue previousValue;
} UIKeyAndScopeToValueCache;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	double amount;
	int unit;
} SCD_Struct_UI66;

typedef struct {
	SCD_Struct_UI66 field1[4];
} SCD_Struct_UI67;

typedef struct __DCSDictionary* DCSDictionaryRef;

typedef struct {
	bool itemIsEnabled[25];
	BOOL timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	BOOL serviceString[100];
	BOOL serviceCrossfadeString[100];
	BOOL serviceImages[2][100];
	BOOL operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	BOOL batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	BOOL activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
} SCD_Struct_UI69;

typedef struct {
	bool overrideItemIsEnabled[25];
	unsigned overrideTimeString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideServiceImages : 2;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBatteryDetailString : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	SCD_Struct_UI69 values;
} SCD_Struct_UI70;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	bool animateContentRotation;
	bool preserveHeight;
	bool avoidFadingBottomOfContent;
	bool skipSnapshotOfEndState;
	double contentStretchRightEdgeInset;
	int edgeClip;
} SCD_Struct_UI73;

typedef struct __CFSet* CFSetRef;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	double targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct {
	NSMutableArray* all;
	NSMutableArray* html;
	NSMutableArray* javascript;
	NSMutableArray* css;
	NSMutableArray* error;
	NSMutableArray* warning;
	NSMutableArray* tip;
	NSMutableArray* log;
} SCD_Struct_UI76;

typedef struct {
	UIWebPDFView* view;
	NSTimer* timer;
} SCD_Struct_UI77;

typedef struct UIKBTheme* UIKBThemeRef;

typedef struct CGGradient* CGGradientRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct PDFHistoryItem {
	bool restorePending;
	bool isInitialScale;
	double zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef union {
	SCD_Struct_UI30 styling;
	int intValue;
} SCD_Union_UI82;

typedef struct __CTFont* CTFontRef;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct {
	id field1;
	id field2;
	id field3;
} SCD_Struct_UI85;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	BOOL __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	id field1;
	int field2;
	int field3;
} SCD_Struct_UI88;

typedef struct {
	SCD_Struct_UI46 m_axisX;
	SCD_Struct_UI46 m_axisY;
	SCD_Struct_UI46 m_axisZ;
	SCD_Struct_UI46 m_trans;
} SCD_Struct_UI89;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;
