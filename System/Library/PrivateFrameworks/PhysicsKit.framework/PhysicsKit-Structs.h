/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, <PKPhysicsContactDelegate>;

typedef struct _NSZone* NSZoneRef;

typedef struct b2Vec2 {
	float x;
	float y;
} b2Vec2;

typedef struct b2BodyDef {
	bool _sk_affectedByGravity;
	unsigned _sk_categoryBitMask;
	unsigned _sk_collisionBitMask;
	unsigned _sk_intersectionCallbackBitMask;
	int type;
	unsigned position : 2Vec2;
	float angle;
	unsigned linearVelocity : 2Vec2;
	float angularVelocity;
	float charge;
	float linearDamping;
	float angularDamping;
	bool allowSleep;
	bool awake;
	bool fixedRotation;
	bool bullet;
	bool active;
	void userData;
	float gravityScale;
} b2BodyDef;

typedef struct _compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > {
	PKPhysicsShape __first_;
} compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> >;

typedef struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> > {
	PKPhysicsShape __begin_;
	PKPhysicsShape __end_;
	compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > __end_cap_;
} vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct b2RevoluteJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	bool collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float referenceAngle;
	bool enableLimit;
	float lowerAngle;
	float upperAngle;
	bool enableMotor;
	float motorSpeed;
	float maxMotorTorque;
} b2RevoluteJointDef;

typedef struct b2DistanceJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	bool collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float length;
	float frequencyHz;
	float dampingRatio;
} b2DistanceJointDef;

typedef struct b2WeldJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	bool collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float referenceAngle;
} b2WeldJointDef;

typedef struct b2PrismaticJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	bool collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	unsigned localAxisA : 2Vec2;
	float referenceAngle;
	bool enableLimit;
	float lowerTranslation;
	float upperTranslation;
	bool enableMotor;
	float maxMotorForce;
	float motorSpeed;
} b2PrismaticJointDef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct b2RopeJointDef {
	int type;
	void userData;
	unsigned bodyA : 2Body;
	unsigned bodyB : 2Body;
	bool collideConnected;
	unsigned localAnchorA : 2Vec2;
	unsigned localAnchorB : 2Vec2;
	float maxLength;
} b2RopeJointDef;

typedef struct PKContactListener {
	/*function pointer*/ void* _vptr$b2ContactListener;
	NSMutableDictionary* _contacts;
	<PKPhysicsContactDelegate>* _contactDelegate;
} PKContactListener;

typedef struct _compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > {
	/*function pointer*/ void* __first_;
} compressed_pair<PKPoint *, std::__1::allocator<PKPoint> >;

typedef struct _compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > {
	/*function pointer*/ void* __first_;
} compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> >;

typedef struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > {
	/*function pointer*/ void* __begin_;
	/*function pointer*/ void* __end_;
	compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > __end_cap_;
} vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> >;

typedef struct vector<PKPoint, std::__1::allocator<PKPoint> > {
	/*function pointer*/ void* __begin_;
	/*function pointer*/ void* __end_;
	compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > __end_cap_;
} vector<PKPoint, std::__1::allocator<PKPoint> >;

typedef struct PKDebugDrawPacket {
	vector<PKPoint, std::__1::allocator<PKPoint> > _linePoints;
	vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > _colors;
} PKDebugDrawPacket;

