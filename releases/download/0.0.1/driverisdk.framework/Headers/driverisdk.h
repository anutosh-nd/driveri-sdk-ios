#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class DriverisdkNDAPIClient, DriverisdkNDAuthAPI, DriverisdkNDError, DriverisdkNDCoachingAPI, DriverisdkEither<__covariant L, __covariant R>, DriverisdkNDEventAccessAPI, DriverisdkNDEventsAPI, DriverisdkNDGreenzoneAPI, DriverisdkNDNotificationsAPI, DriverisdkNDUserAPI, DriverisdkNDVideoAPI, DriverisdkEitherLeft<__covariant L>, DriverisdkKotlinNothing, DriverisdkEitherRight<__covariant R>, DriverisdkDriverScoreWithRank, DriverisdkDrivingStats, DriverisdkHighImpactEvent, DriverisdkNDStatsInterval, DriverisdkNDLeaderboard, DriverisdkNDGreenzoneStats, DriverisdkNDAPIResponse, DriverisdkAlertTypeCount, DriverisdkDriverStarSubtypeCount, DriverisdkEventDateFilter, DriverisdkLatLong, DriverisdkNDEvent, DriverisdkNDEventComment, DriverisdkNDEventData, DriverisdkNDVideo, DriverisdkNDEventDetail, DriverisdkNDFeedbackCategory, DriverisdkNDFeedbackConversation, DriverisdkNDFeedbackState, DriverisdkNDEventFeedback, DriverisdkNDWeeklyReviewSession, DriverisdkNDWeeklyReviewSessionDetail, DriverisdkNDCommentNotification, DriverisdkNDDriverReportNotification, DriverisdkNDEventAccessNotification, DriverisdkNDEventNotification, DriverisdkNDFeedbackSharedNotification, DriverisdkNDNotification, DriverisdkNDWeeklyReviewNotification, DriverisdkNDNotificationMessage, DriverisdkNDNotifications, DriverisdkNDTrimmedVideoNotification, DriverisdkNDEventAccessRequest, DriverisdkNDVideoData, DriverisdkKotlinEnum<E>, DriverisdkDATA_RETENTION_ERROR_MSG, DriverisdkNDUser, DriverisdkNDVODConsumption, DriverisdkKotlinArray<T>, DriverisdkKotlinx_serialization_coreSerializersModule, DriverisdkKotlinx_serialization_coreSerialKind, DriverisdkKotlinx_serialization_coreUpdateMode;

@protocol DriverisdkKotlinx_serialization_coreKSerializer, DriverisdkKotlinx_serialization_coreEncoder, DriverisdkKotlinx_serialization_coreSerialDescriptor, DriverisdkKotlinx_serialization_coreSerializationStrategy, DriverisdkKotlinx_serialization_coreDecoder, DriverisdkKotlinx_serialization_coreDeserializationStrategy, DriverisdkKotlinComparable, DriverisdkKotlinx_serialization_coreCompositeEncoder, DriverisdkKotlinAnnotation, DriverisdkKotlinx_serialization_coreCompositeDecoder, DriverisdkKotlinIterator, DriverisdkKotlinx_serialization_coreSerializersModuleCollector, DriverisdkKotlinKClass, DriverisdkKotlinKDeclarationContainer, DriverisdkKotlinKAnnotatedElement, DriverisdkKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface DriverisdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface DriverisdkBase (DriverisdkBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface DriverisdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface DriverisdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorDriverisdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface DriverisdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface DriverisdkByte : DriverisdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface DriverisdkUByte : DriverisdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface DriverisdkShort : DriverisdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface DriverisdkUShort : DriverisdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface DriverisdkInt : DriverisdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface DriverisdkUInt : DriverisdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface DriverisdkLong : DriverisdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface DriverisdkULong : DriverisdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface DriverisdkFloat : DriverisdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface DriverisdkDouble : DriverisdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface DriverisdkBoolean : DriverisdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriveriSDK")))
@interface DriverisdkDriveriSDK : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)apiEnvEnv:(NSString *)env __attribute__((swift_name("apiEnv(env:)")));
- (DriverisdkNDAPIClient *)getAPIClient __attribute__((swift_name("getAPIClient()")));
- (DriverisdkNDAuthAPI *)getAuthAPI __attribute__((swift_name("getAuthAPI()")));
- (DriverisdkEither<DriverisdkNDError *, DriverisdkNDCoachingAPI *> *)getCoachingAPI __attribute__((swift_name("getCoachingAPI()")));
- (DriverisdkEither<DriverisdkNDError *, DriverisdkNDEventAccessAPI *> *)getEventAccessAPI __attribute__((swift_name("getEventAccessAPI()")));
- (DriverisdkEither<DriverisdkNDError *, DriverisdkNDEventsAPI *> *)getEventsAPI __attribute__((swift_name("getEventsAPI()")));
- (DriverisdkEither<DriverisdkNDError *, DriverisdkNDGreenzoneAPI *> *)getGreenzoneAPI __attribute__((swift_name("getGreenzoneAPI()")));
- (DriverisdkNDNotificationsAPI *)getNotificationsAPI __attribute__((swift_name("getNotificationsAPI()")));
- (DriverisdkNDUserAPI *)getUserAPI __attribute__((swift_name("getUserAPI()")));
- (DriverisdkEither<DriverisdkNDError *, DriverisdkNDVideoAPI *> *)getVideoAPI __attribute__((swift_name("getVideoAPI()")));
@end;

__attribute__((swift_name("Either")))
@interface DriverisdkEither<__covariant L, __covariant R> : DriverisdkBase
- (L _Nullable)getLeft __attribute__((swift_name("getLeft()")));
- (R _Nullable)getRight __attribute__((swift_name("getRight()")));
@property (readonly) BOOL isLeft __attribute__((swift_name("isLeft")));
@property (readonly) BOOL isRight __attribute__((swift_name("isRight")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherLeft")))
@interface DriverisdkEitherLeft<__covariant L> : DriverisdkEither<L, DriverisdkKotlinNothing *>
- (instancetype)initWithValue:(L _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (L _Nullable)component1 __attribute__((swift_name("component1()")));
- (DriverisdkEitherLeft<L> *)doCopyValue:(L _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) L _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherRight")))
@interface DriverisdkEitherRight<__covariant R> : DriverisdkEither<DriverisdkKotlinNothing *, R>
- (instancetype)initWithValue:(R _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (R _Nullable)component1 __attribute__((swift_name("component1()")));
- (DriverisdkEitherRight<R> *)doCopyValue:(R _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDError")))
@interface DriverisdkNDError : DriverisdkBase
- (instancetype)initWithCode:(int32_t)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DriverisdkNDError *)doCopyCode:(int32_t)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverScoreWithRank")))
@interface DriverisdkDriverScoreWithRank : DriverisdkBase
- (instancetype)initWithGreenzone_score:(DriverisdkInt * _Nullable)greenzone_score rank:(int32_t)rank driverId:(int32_t)driverId __attribute__((swift_name("init(greenzone_score:rank:driverId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DriverisdkDriverScoreWithRank *)doCopyGreenzone_score:(DriverisdkInt * _Nullable)greenzone_score rank:(int32_t)rank driverId:(int32_t)driverId __attribute__((swift_name("doCopy(greenzone_score:rank:driverId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverId __attribute__((swift_name("driverId")));
@property (readonly) int32_t greenzoneScore __attribute__((swift_name("greenzoneScore")));
@property (readonly) int32_t rank __attribute__((swift_name("rank")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverScoreWithRank.Companion")))
@interface DriverisdkDriverScoreWithRankCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingStats")))
@interface DriverisdkDrivingStats : DriverisdkBase
- (instancetype)initWithId:(int32_t)id count:(int32_t)count name:(NSString *)name description:(NSString *)description __attribute__((swift_name("init(id:count:name:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DriverisdkDrivingStats *)doCopyId:(int32_t)id count:(int32_t)count name:(NSString *)name description:(NSString *)description __attribute__((swift_name("doCopy(id:count:name:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingStats.Companion")))
@interface DriverisdkDrivingStatsCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighImpactEvent")))
@interface DriverisdkHighImpactEvent : DriverisdkBase
- (instancetype)initWithCount:(int32_t)count name:(NSString *)name potentialScore:(int32_t)potentialScore duration:(NSString * _Nullable)duration __attribute__((swift_name("init(count:name:potentialScore:duration:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DriverisdkHighImpactEvent *)doCopyCount:(int32_t)count name:(NSString *)name potentialScore:(int32_t)potentialScore duration:(NSString * _Nullable)duration __attribute__((swift_name("doCopy(count:name:potentialScore:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t potentialScore __attribute__((swift_name("potentialScore")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighImpactEvent.Companion")))
@interface DriverisdkHighImpactEventCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneAPI")))
@interface DriverisdkNDGreenzoneAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getDriverScoreLeaderboardInterval:(DriverisdkNDStatsInterval *)interval startTime:(int64_t)startTime callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDLeaderboard * _Nullable))callback __attribute__((swift_name("getDriverScoreLeaderboard(interval:startTime:callback:)")));
- (void)getGreenzoneStatsInterval:(DriverisdkNDStatsInterval *)interval startTime:(int64_t)startTime callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDGreenzoneStats * _Nullable))callback __attribute__((swift_name("getGreenzoneStats(interval:startTime:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneStats")))
@interface DriverisdkNDGreenzoneStats : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
@property (readonly) int32_t driverScore __attribute__((swift_name("driverScore")));
@property (readonly) NSArray<DriverisdkDrivingStats *> * _Nullable drivingStats __attribute__((swift_name("drivingStats")));
@property (readonly) int32_t fleetGoalScore __attribute__((swift_name("fleetGoalScore")));
@property (readonly) int32_t fleetScore __attribute__((swift_name("fleetScore")));
@property (readonly) BOOL hasDriven __attribute__((swift_name("hasDriven")));
@property (readonly) NSArray<DriverisdkHighImpactEvent *> *highImpactEvents __attribute__((swift_name("highImpactEvents")));
@property (readonly) int32_t maxScore __attribute__((swift_name("maxScore")));
@property (readonly) int32_t poorPerformanceThreshold __attribute__((swift_name("poorPerformanceThreshold")));
@property (readonly) DriverisdkInt * _Nullable potentialScore __attribute__((swift_name("potentialScore")));
@property (readonly) int32_t topPerformanceThreshold __attribute__((swift_name("topPerformanceThreshold")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneStats.Companion")))
@interface DriverisdkNDGreenzoneStatsCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDLeaderboard")))
@interface DriverisdkNDLeaderboard : DriverisdkBase
- (instancetype)initWithNumDrivers:(DriverisdkInt * _Nullable)numDrivers leaderboard:(NSArray<DriverisdkDriverScoreWithRank *> * _Nullable)leaderboard gamificationFlag:(BOOL)gamificationFlag __attribute__((swift_name("init(numDrivers:leaderboard:gamificationFlag:)"))) __attribute__((objc_designated_initializer));
- (DriverisdkInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DriverisdkDriverScoreWithRank *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DriverisdkNDLeaderboard *)doCopyNumDrivers:(DriverisdkInt * _Nullable)numDrivers leaderboard:(NSArray<DriverisdkDriverScoreWithRank *> * _Nullable)leaderboard gamificationFlag:(BOOL)gamificationFlag __attribute__((swift_name("doCopy(numDrivers:leaderboard:gamificationFlag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DriverisdkDriverScoreWithRank *> * _Nullable leaderboard __attribute__((swift_name("leaderboard")));
@property (readonly) DriverisdkInt * _Nullable numDrivers __attribute__((swift_name("numDrivers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDLeaderboard.Companion")))
@interface DriverisdkNDLeaderboardCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("NDStatsInterval")))
@interface DriverisdkNDStatsInterval : DriverisdkBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.DAILY")))
@interface DriverisdkNDStatsIntervalDAILY : DriverisdkNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dAILY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.MONTHLY")))
@interface DriverisdkNDStatsIntervalMONTHLY : DriverisdkNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mONTHLY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.WEEKLY")))
@interface DriverisdkNDStatsIntervalWEEKLY : DriverisdkNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)wEEKLY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAuthAPI")))
@interface DriverisdkNDAuthAPI : DriverisdkBase
- (void)authenticateUserUsername:(NSString *)username password:(NSString *)password callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("authenticateUser(username:password:callback:)")));
- (void)authenticateUserWith2FAUsername:(NSString *)username password:(NSString *)password twoFACode:(NSString *)twoFACode callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("authenticateUserWith2FA(username:password:twoFACode:callback:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (NSString *)getAccessToken __attribute__((swift_name("getAccessToken()")));
- (NSString *)getRefreshToken __attribute__((swift_name("getRefreshToken()")));
- (BOOL)isAuthenticated __attribute__((swift_name("isAuthenticated()")));
- (void)revokeAuthenticationCallback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("revokeAuthentication(callback:)")));
- (void)skip2FAActivationUsername:(NSString *)username password:(NSString *)password callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("skip2FAActivation(username:password:callback:)")));
@end;

__attribute__((swift_name("ApiResponse")))
@interface DriverisdkApiResponse : DriverisdkBase
- (instancetype)initWithResponse:(BOOL)response msg:(NSString * _Nullable)msg msgCode:(NSString * _Nullable)msgCode __attribute__((swift_name("init(response:msg:msgCode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));
@property (readonly) NSString * _Nullable msgCode __attribute__((swift_name("msgCode")));
@property (readonly) BOOL response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponse.Companion")))
@interface DriverisdkApiResponseCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIClient")))
@interface DriverisdkNDAPIClient : DriverisdkBase
- (void)deleteUrl:(NSString *)url callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDAPIResponse * _Nullable))callback __attribute__((swift_name("delete(url:callback:)")));
- (void)getUrl:(NSString *)url callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDAPIResponse * _Nullable))callback __attribute__((swift_name("get(url:callback:)")));
- (void)postUrl:(NSString *)url body:(NSString *)body callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDAPIResponse * _Nullable))callback __attribute__((swift_name("post(url:body:callback:)")));
- (void)putUrl:(NSString *)url body:(NSString *)body callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDAPIResponse * _Nullable))callback __attribute__((swift_name("put(url:body:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIResponse")))
@interface DriverisdkNDAPIResponse : DriverisdkBase
- (instancetype)initWithStatus:(int32_t)status response:(NSString *)response headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("init(status:response:headers:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (DriverisdkNDAPIResponse *)doCopyStatus:(int32_t)status response:(NSString *)response headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("doCopy(status:response:headers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) NSString *response __attribute__((swift_name("response")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIResponse.Companion")))
@interface DriverisdkNDAPIResponseCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertTypeCount")))
@interface DriverisdkAlertTypeCount : DriverisdkBase
- (instancetype)initWithAlertType:(NSString *)alertType totalAlerts:(int32_t)totalAlerts moderateAlerts:(int32_t)moderateAlerts severeAlerts:(int32_t)severeAlerts contributionPercentage:(double)contributionPercentage __attribute__((swift_name("init(alertType:totalAlerts:moderateAlerts:severeAlerts:contributionPercentage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (DriverisdkAlertTypeCount *)doCopyAlertType:(NSString *)alertType totalAlerts:(int32_t)totalAlerts moderateAlerts:(int32_t)moderateAlerts severeAlerts:(int32_t)severeAlerts contributionPercentage:(double)contributionPercentage __attribute__((swift_name("doCopy(alertType:totalAlerts:moderateAlerts:severeAlerts:contributionPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *alertType __attribute__((swift_name("alertType")));
@property (readonly) double contributionPercentage __attribute__((swift_name("contributionPercentage")));
@property (readonly) int32_t moderateAlerts __attribute__((swift_name("moderateAlerts")));
@property (readonly) int32_t severeAlerts __attribute__((swift_name("severeAlerts")));
@property (readonly) int32_t totalAlerts __attribute__((swift_name("totalAlerts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertTypeCount.Companion")))
@interface DriverisdkAlertTypeCountCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCount")))
@interface DriverisdkDriverStarSubtypeCount : DriverisdkBase
- (instancetype)initWithDriverStarSubType:(NSString *)driverStarSubType count:(int32_t)count contributionPercentage:(double)contributionPercentage __attribute__((swift_name("init(driverStarSubType:count:contributionPercentage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (DriverisdkDriverStarSubtypeCount *)doCopyDriverStarSubType:(NSString *)driverStarSubType count:(int32_t)count contributionPercentage:(double)contributionPercentage __attribute__((swift_name("doCopy(driverStarSubType:count:contributionPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double contributionPercentage __attribute__((swift_name("contributionPercentage")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *driverStarSubType __attribute__((swift_name("driverStarSubType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCount.Companion")))
@interface DriverisdkDriverStarSubtypeCountCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol DriverisdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<DriverisdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DriverisdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol DriverisdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<DriverisdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<DriverisdkKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<DriverisdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol DriverisdkKotlinx_serialization_coreKSerializer <DriverisdkKotlinx_serialization_coreSerializationStrategy, DriverisdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCountSerializer")))
@interface DriverisdkDriverStarSubtypeCountSerializer : DriverisdkBase <DriverisdkKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)driverStarSubtypeCountSerializer __attribute__((swift_name("init()")));
- (DriverisdkDriverStarSubtypeCount *)deserializeDecoder:(id<DriverisdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<DriverisdkKotlinx_serialization_coreEncoder>)encoder value:(DriverisdkDriverStarSubtypeCount *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DriverisdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("EventDateFilter")))
@interface DriverisdkEventDateFilter : DriverisdkBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Last30Days")))
@interface DriverisdkEventDateFilterLast30Days : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)last30Days __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Last7Days")))
@interface DriverisdkEventDateFilterLast7Days : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)last7Days __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.LastMonth")))
@interface DriverisdkEventDateFilterLastMonth : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lastMonth __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.LastWeek")))
@interface DriverisdkEventDateFilterLastWeek : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lastWeek __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.ThisMonth")))
@interface DriverisdkEventDateFilterThisMonth : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thisMonth __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.ThisWeek")))
@interface DriverisdkEventDateFilterThisWeek : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thisWeek __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Today")))
@interface DriverisdkEventDateFilterToday : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)today __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Yesterday")))
@interface DriverisdkEventDateFilterYesterday : DriverisdkEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)yesterday __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoCamera")))
@interface DriverisdkEventVideoCamera : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoCamera.Companion")))
@interface DriverisdkEventVideoCameraCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t EXT_CAM_1 __attribute__((swift_name("EXT_CAM_1")));
@property (readonly) int32_t EXT_CAM_2 __attribute__((swift_name("EXT_CAM_2")));
@property (readonly) int32_t EXT_CAM_3 __attribute__((swift_name("EXT_CAM_3")));
@property (readonly) int32_t EXT_CAM_4 __attribute__((swift_name("EXT_CAM_4")));
@property (readonly) int32_t INWARD __attribute__((swift_name("INWARD")));
@property (readonly) int32_t LEFT __attribute__((swift_name("LEFT")));
@property (readonly) int32_t OUTWARD __attribute__((swift_name("OUTWARD")));
@property (readonly) int32_t RIGHT __attribute__((swift_name("RIGHT")));
@property (readonly) int32_t UNKNOWN __attribute__((swift_name("UNKNOWN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoStatus")))
@interface DriverisdkEventVideoStatus : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoStatus.Companion")))
@interface DriverisdkEventVideoStatusCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t AVAILABLE __attribute__((swift_name("AVAILABLE")));
@property (readonly) int32_t AVAILABLE_ON_REQUEST __attribute__((swift_name("AVAILABLE_ON_REQUEST")));
@property (readonly) int32_t NOT_AVAILABLE __attribute__((swift_name("NOT_AVAILABLE")));
@property (readonly) int32_t UPLOAD_IN_PROGRESS __attribute__((swift_name("UPLOAD_IN_PROGRESS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLong")))
@interface DriverisdkLatLong : DriverisdkBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (DriverisdkLatLong *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLong.Companion")))
@interface DriverisdkLatLongCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEvent")))
@interface DriverisdkNDEvent : DriverisdkBase
- (instancetype)initWithEventId:(int32_t)eventId eventSeverityLevel:(NSString *)eventSeverityLevel eventDescription:(NSString *)eventDescription causedBy:(int32_t)causedBy timeStamp:(int64_t)timeStamp vehicleNumber:(NSString *)vehicleNumber eventVideoOffset:(int32_t)eventVideoOffset eventDuration:(int32_t)eventDuration eventVideoStatus:(int32_t)eventVideoStatus driverName:(NSString *)driverName eventVideoPath:(NSString * _Nullable)eventVideoPath eventVideoFileName:(NSString * _Nullable)eventVideoFileName coachingSessionId:(int32_t)coachingSessionId sessionId:(NSString * _Nullable)sessionId txnHash:(NSString * _Nullable)txnHash rawAlertType:(NSString *)rawAlertType startLatLong:(NSString * _Nullable)startLatLong endLatLong:(NSString * _Nullable)endLatLong driverId:(int32_t)driverId privacyMode:(int32_t)privacyMode alertCategory:(int32_t)alertCategory __attribute__((swift_name("init(eventId:eventSeverityLevel:eventDescription:causedBy:timeStamp:vehicleNumber:eventVideoOffset:eventDuration:eventVideoStatus:driverName:eventVideoPath:eventVideoFileName:coachingSessionId:sessionId:txnHash:rawAlertType:startLatLong:endLatLong:driverId:privacyMode:alertCategory:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (DriverisdkNDEvent *)doCopyEventId:(int32_t)eventId eventSeverityLevel:(NSString *)eventSeverityLevel eventDescription:(NSString *)eventDescription causedBy:(int32_t)causedBy timeStamp:(int64_t)timeStamp vehicleNumber:(NSString *)vehicleNumber eventVideoOffset:(int32_t)eventVideoOffset eventDuration:(int32_t)eventDuration eventVideoStatus:(int32_t)eventVideoStatus driverName:(NSString *)driverName eventVideoPath:(NSString * _Nullable)eventVideoPath eventVideoFileName:(NSString * _Nullable)eventVideoFileName coachingSessionId:(int32_t)coachingSessionId sessionId:(NSString * _Nullable)sessionId txnHash:(NSString * _Nullable)txnHash rawAlertType:(NSString *)rawAlertType startLatLong:(NSString * _Nullable)startLatLong endLatLong:(NSString * _Nullable)endLatLong driverId:(int32_t)driverId privacyMode:(int32_t)privacyMode alertCategory:(int32_t)alertCategory __attribute__((swift_name("doCopy(eventId:eventSeverityLevel:eventDescription:causedBy:timeStamp:vehicleNumber:eventVideoOffset:eventDuration:eventVideoStatus:driverName:eventVideoPath:eventVideoFileName:coachingSessionId:sessionId:txnHash:rawAlertType:startLatLong:endLatLong:driverId:privacyMode:alertCategory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t causedBy __attribute__((swift_name("causedBy")));
@property (readonly) int32_t coachingSessionId __attribute__((swift_name("coachingSessionId")));
@property (readonly) int32_t commentsCount __attribute__((swift_name("commentsCount")));
@property (readonly) NSString *driverName __attribute__((swift_name("driverName")));
@property (readonly) double endLatitude __attribute__((swift_name("endLatitude")));
@property (readonly) double endLongitude __attribute__((swift_name("endLongitude")));
@property (readonly) NSString *eventDescription __attribute__((swift_name("eventDescription")));
@property (readonly) int32_t eventDuration __attribute__((swift_name("eventDuration")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *eventSeverityLevel __attribute__((swift_name("eventSeverityLevel")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int32_t eventVideoCamera __attribute__((swift_name("eventVideoCamera")));
@property (readonly) int32_t eventVideoOffset __attribute__((swift_name("eventVideoOffset")));
@property (readonly) NSString * _Nullable eventVideoPath __attribute__((swift_name("eventVideoPath")));
@property (readonly) NSString * _Nullable eventVideoPreviewUrl __attribute__((swift_name("eventVideoPreviewUrl")));
@property (readonly) int32_t eventVideoStatus __attribute__((swift_name("eventVideoStatus")));
@property (readonly) BOOL isFavorite __attribute__((swift_name("isFavorite")));
@property (readonly) BOOL isPrivacyModeEnabled __attribute__((swift_name("isPrivacyModeEnabled")));
@property (readonly) BOOL isViewed __attribute__((swift_name("isViewed")));
@property (readonly) double startLatitude __attribute__((swift_name("startLatitude")));
@property (readonly) double startLongitude __attribute__((swift_name("startLongitude")));
@property (readonly) int64_t timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString *vehicleNumber __attribute__((swift_name("vehicleNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEvent.Companion")))
@interface DriverisdkNDEventCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *ALERT __attribute__((swift_name("ALERT")));
@property (readonly) int32_t CAUSED_BY_DRIVER __attribute__((swift_name("CAUSED_BY_DRIVER")));
@property (readonly) int32_t CAUSED_BY_OTHER __attribute__((swift_name("CAUSED_BY_OTHER")));
@property (readonly) int32_t CAUSED_BY_THIRD_PARTY __attribute__((swift_name("CAUSED_BY_THIRD_PARTY")));
@property (readonly) NSString *DRIVERSTAR __attribute__((swift_name("DRIVERSTAR")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *WARN __attribute__((swift_name("WARN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventComment")))
@interface DriverisdkNDEventComment : DriverisdkBase
- (instancetype)initWithCreatedAt:(int64_t)createdAt createdBy:(int32_t)createdBy commentedBy:(NSString *)commentedBy comment:(NSString *)comment __attribute__((swift_name("init(createdAt:createdBy:commentedBy:comment:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDEventComment *)doCopyCreatedAt:(int64_t)createdAt createdBy:(int32_t)createdBy commentedBy:(NSString *)commentedBy comment:(NSString *)comment __attribute__((swift_name("doCopy(createdAt:createdBy:commentedBy:comment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) NSString *commentedBy __attribute__((swift_name("commentedBy")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventComment.Companion")))
@interface DriverisdkNDEventCommentCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventData")))
@interface DriverisdkNDEventData : DriverisdkBase
- (instancetype)initWithEvents:(NSArray<DriverisdkNDEvent *> *)events alertDistribution:(NSArray<DriverisdkAlertTypeCount *> *)alertDistribution negativeEventTypes:(NSArray<NSString *> *)negativeEventTypes positiveEventTypes:(NSArray<NSString *> *)positiveEventTypes __attribute__((swift_name("init(events:alertDistribution:negativeEventTypes:positiveEventTypes:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DriverisdkNDEvent *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DriverisdkAlertTypeCount *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDEventData *)doCopyEvents:(NSArray<DriverisdkNDEvent *> *)events alertDistribution:(NSArray<DriverisdkAlertTypeCount *> *)alertDistribution negativeEventTypes:(NSArray<NSString *> *)negativeEventTypes positiveEventTypes:(NSArray<NSString *> *)positiveEventTypes __attribute__((swift_name("doCopy(events:alertDistribution:negativeEventTypes:positiveEventTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DriverisdkAlertTypeCount *> *alertDistribution __attribute__((swift_name("alertDistribution")));
@property (readonly) NSArray<DriverisdkDriverStarSubtypeCount *> *driverStarDistribution __attribute__((swift_name("driverStarDistribution")));
@property (readonly) NSArray<DriverisdkNDEvent *> *events __attribute__((swift_name("events")));
@property (readonly) NSArray<NSString *> *negativeEventTypes __attribute__((swift_name("negativeEventTypes")));
@property (readonly) NSArray<NSString *> *positiveEventTypes __attribute__((swift_name("positiveEventTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventData.Companion")))
@interface DriverisdkNDEventDataCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventDetail")))
@interface DriverisdkNDEventDetail : DriverisdkBase
- (instancetype)initWithEvent:(DriverisdkNDEvent *)event videos:(NSArray<DriverisdkNDVideo *> *)videos __attribute__((swift_name("init(event:videos:)"))) __attribute__((objc_designated_initializer));
- (DriverisdkNDEvent *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DriverisdkNDVideo *> *)component2 __attribute__((swift_name("component2()")));
- (DriverisdkNDEventDetail *)doCopyEvent:(DriverisdkNDEvent *)event videos:(NSArray<DriverisdkNDVideo *> *)videos __attribute__((swift_name("doCopy(event:videos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DriverisdkNDEvent *event __attribute__((swift_name("event")));
@property (readonly) NSArray<DriverisdkLatLong *> *latLongTrail __attribute__((swift_name("latLongTrail")));
@property (readonly) DriverisdkLatLong *videoEndLatLong __attribute__((swift_name("videoEndLatLong")));
@property (readonly) DriverisdkLatLong *videoStartLatLong __attribute__((swift_name("videoStartLatLong")));
@property (readonly) NSArray<DriverisdkNDVideo *> *videos __attribute__((swift_name("videos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventDetail.Companion")))
@interface DriverisdkNDEventDetailCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventsAPI")))
@interface DriverisdkNDEventsAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)changeEventFavoriteStatusEvent:(DriverisdkNDEvent *)event callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("changeEventFavoriteStatus(event:callback:)")));
- (void)getCommentsForEventEvent:(DriverisdkNDEvent *)event callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDEventComment *> * _Nullable))callback __attribute__((swift_name("getCommentsForEvent(event:callback:)")));
- (void)getEventDetailEventId:(int32_t)eventId callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDEventDetail * _Nullable))callback __attribute__((swift_name("getEventDetail(eventId:callback:)")));
- (NSArray<DriverisdkNDFeedbackCategory *> *)getEventFeedbackCategories __attribute__((swift_name("getEventFeedbackCategories()")));
- (void)getEventsInTimeIntervalEventDateFilter:(DriverisdkEventDateFilter *)eventDateFilter callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDEventData * _Nullable))callback __attribute__((swift_name("getEventsInTimeInterval(eventDateFilter:callback:)")));
- (void)getEventsInTimeIntervalStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDEventData * _Nullable))callback __attribute__((swift_name("getEventsInTimeInterval(startTime:endTime:callback:)")));
- (void)getFeedbackConversationFeedbackId:(NSString *)feedbackId callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDFeedbackConversation *> * _Nullable))callback __attribute__((swift_name("getFeedbackConversation(feedbackId:callback:)")));
- (void)getFeedbackStateForEventEventId:(int32_t)eventId callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDFeedbackState *> * _Nullable))callback __attribute__((swift_name("getFeedbackStateForEvent(eventId:callback:)")));
- (void)markEventAsViewedEvent:(DriverisdkNDEvent *)event callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("markEventAsViewed(event:callback:)")));
- (void)postCommentOnEventEvent:(DriverisdkNDEvent *)event comment:(NSString *)comment callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("postCommentOnEvent(event:comment:callback:)")));
- (void)submitFeedbackForEventFeedback:(DriverisdkNDEventFeedback *)feedback callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("submitFeedbackForEvent(feedback:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCoachingAPI")))
@interface DriverisdkNDCoachingAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getCompletedWeeklyReviewSessionsCallback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDWeeklyReviewSession *> * _Nullable))callback __attribute__((swift_name("getCompletedWeeklyReviewSessions(callback:)")));
- (void)getPendingWeeklyReviewSessionsCallback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDWeeklyReviewSession *> * _Nullable))callback __attribute__((swift_name("getPendingWeeklyReviewSessions(callback:)")));
- (void)getWeeklyReviewSessionDetailSessionId:(NSString *)sessionId callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDWeeklyReviewSessionDetail * _Nullable))callback __attribute__((swift_name("getWeeklyReviewSessionDetail(sessionId:callback:)")));
- (void)markWeeklyReviewSessionAsCompleteSessionId:(NSString *)sessionId callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("markWeeklyReviewSessionAsComplete(sessionId:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSession")))
@interface DriverisdkNDWeeklyReviewSession : DriverisdkBase
- (instancetype)initWithSessionId:(NSString *)sessionId description:(NSString *)description createdAt:(int64_t)createdAt driverId:(int32_t)driverId driverName:(NSString * _Nullable)driverName sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(int32_t)driverStarsCount subTenantId:(int32_t)subTenantId tenantId:(int32_t)tenantId eventIds:(NSArray<DriverisdkLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DriverisdkLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion sessionAge:(DriverisdkInt * _Nullable)sessionAge vcStatus:(int32_t)vcStatus __attribute__((swift_name("init(sessionId:description:createdAt:driverId:driverName:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:sessionAge:vcStatus:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DriverisdkLong *> * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<DriverisdkLong *> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (DriverisdkNDWeeklyReviewSession *)doCopySessionId:(NSString *)sessionId description:(NSString *)description createdAt:(int64_t)createdAt driverId:(int32_t)driverId driverName:(NSString * _Nullable)driverName sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(int32_t)driverStarsCount subTenantId:(int32_t)subTenantId tenantId:(int32_t)tenantId eventIds:(NSArray<DriverisdkLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DriverisdkLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion sessionAge:(DriverisdkInt * _Nullable)sessionAge vcStatus:(int32_t)vcStatus __attribute__((swift_name("doCopy(sessionId:description:createdAt:driverId:driverName:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:sessionAge:vcStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<DriverisdkLong *> * _Nullable driverStarIds __attribute__((swift_name("driverStarIds")));
@property (readonly) int32_t driverStarsCount __attribute__((swift_name("driverStarsCount")));
@property (readonly) NSArray<DriverisdkLong *> * _Nullable eventIds __attribute__((swift_name("eventIds")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int64_t sessionEndTime __attribute__((swift_name("sessionEndTime")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t sessionStartTime __attribute__((swift_name("sessionStartTime")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSession.Companion")))
@interface DriverisdkNDWeeklyReviewSessionCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionDetail")))
@interface DriverisdkNDWeeklyReviewSessionDetail : DriverisdkBase
- (instancetype)initWithSessionId:(NSString *)sessionId createdAt:(int64_t)createdAt driverId:(int32_t)driverId sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(int32_t)driverStarsCount subTenantId:(int32_t)subTenantId tenantId:(int32_t)tenantId eventIds:(NSArray<DriverisdkLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DriverisdkLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion vcStatus:(int32_t)vcStatus alertsInSession:(NSArray<DriverisdkNDEvent *> *)alertsInSession driverStarsInSession:(NSArray<DriverisdkNDEvent *> *)driverStarsInSession __attribute__((swift_name("init(sessionId:createdAt:driverId:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:vcStatus:alertsInSession:driverStarsInSession:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DriverisdkNDEvent *> *)component14 __attribute__((swift_name("component14()")));
- (NSArray<DriverisdkNDEvent *> *)component15 __attribute__((swift_name("component15()")));
- (DriverisdkNDWeeklyReviewSessionDetail *)doCopySessionId:(NSString *)sessionId createdAt:(int64_t)createdAt driverId:(int32_t)driverId sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(int32_t)driverStarsCount subTenantId:(int32_t)subTenantId tenantId:(int32_t)tenantId eventIds:(NSArray<DriverisdkLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DriverisdkLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion vcStatus:(int32_t)vcStatus alertsInSession:(NSArray<DriverisdkNDEvent *> *)alertsInSession driverStarsInSession:(NSArray<DriverisdkNDEvent *> *)driverStarsInSession __attribute__((swift_name("doCopy(sessionId:createdAt:driverId:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:vcStatus:alertsInSession:driverStarsInSession:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t actualScore __attribute__((swift_name("actualScore")));
@property (readonly) NSArray<DriverisdkNDEvent *> *alertsInSession __attribute__((swift_name("alertsInSession")));
@property (readonly) NSString * _Nullable appreciationText __attribute__((swift_name("appreciationText")));
@property (readonly) NSArray<DriverisdkNDEvent *> *driverStarsInSession __attribute__((swift_name("driverStarsInSession")));
@property (readonly) int32_t potentialScore __attribute__((swift_name("potentialScore")));
@property (readonly) NSString * _Nullable recommendationText __attribute__((swift_name("recommendationText")));
@property (readonly) DriverisdkNDWeeklyReviewSession *weeklyReviewSession __attribute__((swift_name("weeklyReviewSession")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionDetail.Companion")))
@interface DriverisdkNDWeeklyReviewSessionDetailCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideo")))
@interface DriverisdkNDVideo : DriverisdkBase
- (instancetype)initWithVideoCatalogId:(int32_t)videoCatalogId videoPath:(NSString * _Nullable)videoPath fileName:(NSString * _Nullable)fileName videoDuration:(DriverisdkInt * _Nullable)videoDuration videoStatus:(int32_t)videoStatus audioPath:(NSString * _Nullable)audioPath timestamp:(int64_t)timestamp privacyMode:(int32_t)privacyMode __attribute__((swift_name("init(videoCatalogId:videoPath:fileName:videoDuration:videoStatus:audioPath:timestamp:privacyMode:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DriverisdkInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (DriverisdkNDVideo *)doCopyVideoCatalogId:(int32_t)videoCatalogId videoPath:(NSString * _Nullable)videoPath fileName:(NSString * _Nullable)fileName videoDuration:(DriverisdkInt * _Nullable)videoDuration videoStatus:(int32_t)videoStatus audioPath:(NSString * _Nullable)audioPath timestamp:(int64_t)timestamp privacyMode:(int32_t)privacyMode __attribute__((swift_name("doCopy(videoCatalogId:videoPath:fileName:videoDuration:videoStatus:audioPath:timestamp:privacyMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable audioPath __attribute__((swift_name("audioPath")));
@property (readonly) int32_t camera __attribute__((swift_name("camera")));
@property (readonly) int32_t privacyMode __attribute__((swift_name("privacyMode")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) DriverisdkInt * _Nullable videoDuration __attribute__((swift_name("videoDuration")));
@property (readonly) NSString * _Nullable videoPath __attribute__((swift_name("videoPath")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoAPI")))
@interface DriverisdkNDVideoAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getPresignedAudioUrlForVideoVideo:(DriverisdkNDVideo *)video callback:(void (^)(DriverisdkNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedAudioUrlForVideo(video:callback:)")));
- (void)getPresignedUrlForDefaultEventVideoEvent:(DriverisdkNDEvent *)event callback:(void (^)(DriverisdkNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedUrlForDefaultEventVideo(event:callback:)")));
- (void)getPresignedUrlForVideoVideo:(DriverisdkNDVideo *)video callback:(void (^)(DriverisdkNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedUrlForVideo(video:callback:)")));
- (void)requestEventVideoEvent:(DriverisdkNDEvent *)event callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("requestEventVideo(event:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCommentNotification")))
@interface DriverisdkNDCommentNotification : DriverisdkBase
- (instancetype)initWithEventId:(int32_t)eventId coachingSessionId:(int32_t)coachingSessionId comment:(NSString *)comment __attribute__((swift_name("init(eventId:coachingSessionId:comment:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DriverisdkNDCommentNotification *)doCopyEventId:(int32_t)eventId coachingSessionId:(int32_t)coachingSessionId comment:(NSString *)comment __attribute__((swift_name("doCopy(eventId:coachingSessionId:comment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t coachingSessionId __attribute__((swift_name("coachingSessionId")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCommentNotification.Companion")))
@interface DriverisdkNDCommentNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDDriverReportNotification")))
@interface DriverisdkNDDriverReportNotification : DriverisdkBase
- (instancetype)initWithRequestId:(int32_t)requestId timestamp:(int64_t)timestamp reportName:(NSString *)reportName __attribute__((swift_name("init(requestId:timestamp:reportName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DriverisdkNDDriverReportNotification *)doCopyRequestId:(int32_t)requestId timestamp:(int64_t)timestamp reportName:(NSString *)reportName __attribute__((swift_name("doCopy(requestId:timestamp:reportName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *reportName __attribute__((swift_name("reportName")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDDriverReportNotification.Companion")))
@interface DriverisdkNDDriverReportNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessNotification")))
@interface DriverisdkNDEventAccessNotification : DriverisdkBase
- (instancetype)initWithRequestId:(int32_t)requestId timestamp:(int64_t)timestamp __attribute__((swift_name("init(requestId:timestamp:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (DriverisdkNDEventAccessNotification *)doCopyRequestId:(int32_t)requestId timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(requestId:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessNotification.Companion")))
@interface DriverisdkNDEventAccessNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventNotification")))
@interface DriverisdkNDEventNotification : DriverisdkBase
- (instancetype)initWithEventId:(int32_t)eventId timestamp:(int64_t)timestamp eventSeverity:(NSString *)eventSeverity eventType:(NSString *)eventType __attribute__((swift_name("init(eventId:timestamp:eventSeverity:eventType:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDEventNotification *)doCopyEventId:(int32_t)eventId timestamp:(int64_t)timestamp eventSeverity:(NSString *)eventSeverity eventType:(NSString *)eventType __attribute__((swift_name("doCopy(eventId:timestamp:eventSeverity:eventType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *eventSeverity __attribute__((swift_name("eventSeverity")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventNotification.Companion")))
@interface DriverisdkNDEventNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackSharedNotification")))
@interface DriverisdkNDFeedbackSharedNotification : DriverisdkBase
- (instancetype)initWithTimestamp:(int64_t)timestamp feedbackId:(NSString *)feedbackId eventId:(int32_t)eventId title:(NSString *)title message:(NSString *)message __attribute__((swift_name("init(timestamp:feedbackId:eventId:title:message:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (DriverisdkNDFeedbackSharedNotification *)doCopyTimestamp:(int64_t)timestamp feedbackId:(NSString *)feedbackId eventId:(int32_t)eventId title:(NSString *)title message:(NSString *)message __attribute__((swift_name("doCopy(timestamp:feedbackId:eventId:title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *feedbackId __attribute__((swift_name("feedbackId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackSharedNotification.Companion")))
@interface DriverisdkNDFeedbackSharedNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotification")))
@interface DriverisdkNDNotification : DriverisdkBase
- (instancetype)initWithTitle:(NSString *)title subTitle:(NSString *)subTitle notificationId:(NSString *)notificationId badge:(int32_t)badge __attribute__((swift_name("init(title:subTitle:notificationId:badge:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDNotification *)doCopyTitle:(NSString *)title subTitle:(NSString *)subTitle notificationId:(NSString *)notificationId badge:(int32_t)badge __attribute__((swift_name("doCopy(title:subTitle:notificationId:badge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t badge __attribute__((swift_name("badge")));
@property (readonly) DriverisdkNDCommentNotification * _Nullable commentNotification __attribute__((swift_name("commentNotification")));
@property (readonly) DriverisdkNDEventAccessNotification * _Nullable eventAccessNotification __attribute__((swift_name("eventAccessNotification")));
@property (readonly) DriverisdkNDEventNotification * _Nullable eventNotification __attribute__((swift_name("eventNotification")));
@property (readonly) DriverisdkNDFeedbackSharedNotification * _Nullable feedbackSharedNotification __attribute__((swift_name("feedbackSharedNotification")));
@property (readonly) NSString *notificationId __attribute__((swift_name("notificationId")));
@property (readonly) NSString *subTitle __attribute__((swift_name("subTitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) DriverisdkNDWeeklyReviewNotification * _Nullable weeklyReviewNotification __attribute__((swift_name("weeklyReviewNotification")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotification.Companion")))
@interface DriverisdkNDNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessage")))
@interface DriverisdkNDNotificationMessage : DriverisdkBase
- (instancetype)initWithTimestamp:(int64_t)timestamp id:(NSString *)id isRead:(BOOL)isRead payload:(NSString *)payload __attribute__((swift_name("init(timestamp:id:isRead:payload:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DriverisdkNDNotificationMessage *)doCopyTimestamp:(int64_t)timestamp id:(NSString *)id isRead:(BOOL)isRead payload:(NSString *)payload __attribute__((swift_name("doCopy(timestamp:id:isRead:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRead __attribute__((swift_name("isRead")));
@property (readonly) DriverisdkNDNotification *notification __attribute__((swift_name("notification")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessage.Companion")))
@interface DriverisdkNDNotificationMessageCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotifications")))
@interface DriverisdkNDNotifications : DriverisdkBase
- (instancetype)initWithHasMoreNotifications:(BOOL)hasMoreNotifications unreadNotificationCount:(int32_t)unreadNotificationCount notifications:(NSArray<DriverisdkNDNotificationMessage *> * _Nullable)notifications __attribute__((swift_name("init(hasMoreNotifications:unreadNotificationCount:notifications:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<DriverisdkNDNotificationMessage *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DriverisdkNDNotifications *)doCopyHasMoreNotifications:(BOOL)hasMoreNotifications unreadNotificationCount:(int32_t)unreadNotificationCount notifications:(NSArray<DriverisdkNDNotificationMessage *> * _Nullable)notifications __attribute__((swift_name("doCopy(hasMoreNotifications:unreadNotificationCount:notifications:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasMoreNotifications __attribute__((swift_name("hasMoreNotifications")));
@property (readonly) NSArray<DriverisdkNDNotificationMessage *> * _Nullable notifications __attribute__((swift_name("notifications")));
@property (readonly) int32_t unreadNotificationCount __attribute__((swift_name("unreadNotificationCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotifications.Companion")))
@interface DriverisdkNDNotificationsCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationsAPI")))
@interface DriverisdkNDNotificationsAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (DriverisdkNDNotification * _Nullable)getNotificationData:(NSDictionary<NSString *, NSString *> *)data __attribute__((swift_name("getNotification(data:)")));
- (void)getNotificationsLoadMore:(BOOL)loadMore fetchOnlyUnread:(BOOL)fetchOnlyUnread callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDNotifications * _Nullable))callback __attribute__((swift_name("getNotifications(loadMore:fetchOnlyUnread:callback:)")));
- (void)doInitNotificationsCallback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("doInitNotifications(callback:)")));
- (BOOL)isNDNotificationData:(NSDictionary<NSString *, NSString *> *)data __attribute__((swift_name("isNDNotification(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationsAPI.Companion")))
@interface DriverisdkNDNotificationsAPICompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *NOTIFICATION_RECEIVED_BROADCAST __attribute__((swift_name("NOTIFICATION_RECEIVED_BROADCAST")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDTrimmedVideoNotification")))
@interface DriverisdkNDTrimmedVideoNotification : DriverisdkBase
- (instancetype)initWithEventId:(int32_t)eventId url:(NSString *)url timestamp:(int64_t)timestamp requestId:(int32_t)requestId __attribute__((swift_name("init(eventId:url:timestamp:requestId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDTrimmedVideoNotification *)doCopyEventId:(int32_t)eventId url:(NSString *)url timestamp:(int64_t)timestamp requestId:(int32_t)requestId __attribute__((swift_name("doCopy(eventId:url:timestamp:requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDTrimmedVideoNotification.Companion")))
@interface DriverisdkNDTrimmedVideoNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewNotification")))
@interface DriverisdkNDWeeklyReviewNotification : DriverisdkBase
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp eventType:(NSString *)eventType driverStarsCount:(int32_t)driverStarsCount vcSessionAge:(int32_t)vcSessionAge __attribute__((swift_name("init(sessionId:timestamp:eventType:driverStarsCount:vcSessionAge:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDWeeklyReviewNotification *)doCopySessionId:(NSString *)sessionId timestamp:(int64_t)timestamp eventType:(NSString *)eventType driverStarsCount:(int32_t)driverStarsCount vcSessionAge:(int32_t)vcSessionAge __attribute__((swift_name("doCopy(sessionId:timestamp:eventType:driverStarsCount:vcSessionAge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverStarsCount __attribute__((swift_name("driverStarsCount")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewNotification.Companion")))
@interface DriverisdkNDWeeklyReviewNotificationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationTypes")))
@interface DriverisdkNotificationTypes : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationTypes.Companion")))
@interface DriverisdkNotificationTypesCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *ALERT_CONVERTED_TO_DRIVER_STAR __attribute__((swift_name("ALERT_CONVERTED_TO_DRIVER_STAR")));
@property (readonly) NSString *DRIVERS_REPORT_JOB __attribute__((swift_name("DRIVERS_REPORT_JOB")));
@property (readonly) NSString *EVENT_ACCESS __attribute__((swift_name("EVENT_ACCESS")));
@property (readonly) NSString *EXECUTIVE_REPORTS_COMPLETED __attribute__((swift_name("EXECUTIVE_REPORTS_COMPLETED")));
@property (readonly) NSString *FEEDBACK_SHARED __attribute__((swift_name("FEEDBACK_SHARED")));
@property (readonly) NSString *NEW_ALERT_CREATED __attribute__((swift_name("NEW_ALERT_CREATED")));
@property (readonly) NSString *NEW_ALERT_SHARED __attribute__((swift_name("NEW_ALERT_SHARED")));
@property (readonly) NSString *NEW_COMMENT_ADDED __attribute__((swift_name("NEW_COMMENT_ADDED")));
@property (readonly) NSString *TRIMMED_VIDEO_REQUEST __attribute__((swift_name("TRIMMED_VIDEO_REQUEST")));
@property (readonly) NSString *UNKNOWN __attribute__((swift_name("UNKNOWN")));
@property (readonly) NSString *VIRTUAL_COACHING __attribute__((swift_name("VIRTUAL_COACHING")));
@property (readonly) NSString *VIRTUAL_COACHING_REMINDER __attribute__((swift_name("VIRTUAL_COACHING_REMINDER")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessAPI")))
@interface DriverisdkNDEventAccessAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)createVideoUploadRequestVideoCatalogIds:(NSArray<DriverisdkInt *> *)videoCatalogIds callback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkBoolean *))callback __attribute__((swift_name("createVideoUploadRequest(videoCatalogIds:callback:)")));
- (void)fetchVideosInEventAccessRequestRequestId:(int32_t)requestId callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDVideo *> * _Nullable))callback __attribute__((swift_name("fetchVideosInEventAccessRequest(requestId:callback:)")));
- (void)getAssociatedVideosVideoCatalogId:(int32_t)videoCatalogId callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDVideo *> * _Nullable))callback __attribute__((swift_name("getAssociatedVideos(videoCatalogId:callback:)")));
- (void)getEventAccessRequestsStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDEventAccessRequest *> * _Nullable))callback __attribute__((swift_name("getEventAccessRequests(startTime:endTime:callback:)")));
- (void)getVideoListFromDriveriForIntervalStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DriverisdkNDError * _Nullable, NSArray<DriverisdkNDVideoData *> * _Nullable))callback __attribute__((swift_name("getVideoListFromDriveriForInterval(startTime:endTime:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequest")))
@interface DriverisdkNDEventAccessRequest : DriverisdkBase
- (instancetype)initWithRequestId:(int32_t)requestId createdAt:(int64_t)createdAt requestStartTime:(int64_t)requestStartTime requestEndTime:(int64_t)requestEndTime status:(int32_t)status noOfVideosRequested:(int32_t)noOfVideosRequested noOfVideosNotAvailable:(int32_t)noOfVideosNotAvailable __attribute__((swift_name("init(requestId:createdAt:requestStartTime:requestEndTime:status:noOfVideosRequested:noOfVideosNotAvailable:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (DriverisdkNDEventAccessRequest *)doCopyRequestId:(int32_t)requestId createdAt:(int64_t)createdAt requestStartTime:(int64_t)requestStartTime requestEndTime:(int64_t)requestEndTime status:(int32_t)status noOfVideosRequested:(int32_t)noOfVideosRequested noOfVideosNotAvailable:(int32_t)noOfVideosNotAvailable __attribute__((swift_name("doCopy(requestId:createdAt:requestStartTime:requestEndTime:status:noOfVideosRequested:noOfVideosNotAvailable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int32_t noOfVideosNotAvailable __attribute__((swift_name("noOfVideosNotAvailable")));
@property (readonly) int32_t noOfVideosRequested __attribute__((swift_name("noOfVideosRequested")));
@property (readonly) int64_t requestEndTime __attribute__((swift_name("requestEndTime")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t requestStartTime __attribute__((swift_name("requestStartTime")));
@property (readonly) NSString *requestStatus __attribute__((swift_name("requestStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequest.Companion")))
@interface DriverisdkNDEventAccessRequestCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoData")))
@interface DriverisdkNDVideoData : DriverisdkBase
- (instancetype)initWithLatlong:(NSString * _Nullable)latlong videoAvailableOnDevice:(DriverisdkNDVideo * _Nullable)videoAvailableOnDevice deletedVideo:(DriverisdkNDVideo * _Nullable)deletedVideo vehicleNumber:(NSString * _Nullable)vehicleNumber endLatLong:(NSString * _Nullable)endLatLong maxSpeed:(DriverisdkDouble * _Nullable)maxSpeed minSpeed:(DriverisdkDouble * _Nullable)minSpeed __attribute__((swift_name("init(latlong:videoAvailableOnDevice:deletedVideo:vehicleNumber:endLatLong:maxSpeed:minSpeed:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DriverisdkDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DriverisdkDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DriverisdkNDVideoData *)doCopyLatlong:(NSString * _Nullable)latlong videoAvailableOnDevice:(DriverisdkNDVideo * _Nullable)videoAvailableOnDevice deletedVideo:(DriverisdkNDVideo * _Nullable)deletedVideo vehicleNumber:(NSString * _Nullable)vehicleNumber endLatLong:(NSString * _Nullable)endLatLong maxSpeed:(DriverisdkDouble * _Nullable)maxSpeed minSpeed:(DriverisdkDouble * _Nullable)minSpeed __attribute__((swift_name("doCopy(latlong:videoAvailableOnDevice:deletedVideo:vehicleNumber:endLatLong:maxSpeed:minSpeed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double endLatitude __attribute__((swift_name("endLatitude")));
@property (readonly) double endLongitude __attribute__((swift_name("endLongitude")));
@property (readonly) NSArray<NSString *> *eventsDetected __attribute__((swift_name("eventsDetected")));
@property (readonly) DriverisdkDouble * _Nullable maxSpeed __attribute__((swift_name("maxSpeed")));
@property (readonly) DriverisdkDouble * _Nullable minSpeed __attribute__((swift_name("minSpeed")));
@property (readonly) NSString *speedUnit __attribute__((swift_name("speedUnit")));
@property (readonly) double startLatitude __attribute__((swift_name("startLatitude")));
@property (readonly) double startLongitude __attribute__((swift_name("startLongitude")));
@property (readonly) NSString * _Nullable vehicleNumber __attribute__((swift_name("vehicleNumber")));
@property (readonly) DriverisdkNDVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoData.Companion")))
@interface DriverisdkNDVideoDataCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppBeaconAPI")))
@interface DriverisdkNDAppBeaconAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)disableAppBeaconLogin __attribute__((swift_name("disableAppBeaconLogin()")));
- (void)markAsNotDriving __attribute__((swift_name("markAsNotDriving()")));
- (void)startDriving __attribute__((swift_name("startDriving()")));
- (void)stopDriving __attribute__((swift_name("stopDriving()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol DriverisdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface DriverisdkKotlinEnum<E> : DriverisdkBase <DriverisdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DATA_RETENTION_ERROR_MSG")))
@interface DriverisdkDATA_RETENTION_ERROR_MSG : DriverisdkKotlinEnum<DriverisdkDATA_RETENTION_ERROR_MSG *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DriverisdkDATA_RETENTION_ERROR_MSG *alerts __attribute__((swift_name("alerts")));
@property (class, readonly) DriverisdkDATA_RETENTION_ERROR_MSG *eventAccess __attribute__((swift_name("eventAccess")));
@property (class, readonly) DriverisdkDATA_RETENTION_ERROR_MSG *greenzone __attribute__((swift_name("greenzone")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUser")))
@interface DriverisdkNDUser : DriverisdkBase
- (instancetype)initWithEmail:(NSString *)email roleType:(int32_t)roleType gamificationFlag:(BOOL)gamificationFlag productTierId:(DriverisdkInt * _Nullable)productTierId firstName:(NSString *)firstName lastName:(NSString *)lastName userName:(NSString *)userName tenantId:(int32_t)tenantId userId:(int32_t)userId driverId:(int32_t)driverId roleId:(int32_t)roleId roleName:(NSString *)roleName coachingModel:(NSString *)coachingModel showWeeklyReviews:(BOOL)showWeeklyReviews hasAudioAccess:(BOOL)hasAudioAccess useAppAsBeacon:(BOOL)useAppAsBeacon multiDriverLoginEnabled:(BOOL)multiDriverLoginEnabled productTierApplyOn:(NSString * _Nullable)productTierApplyOn productTierConfig:(NSString * _Nullable)productTierConfig __attribute__((swift_name("init(email:roleType:gamificationFlag:productTierId:firstName:lastName:userName:tenantId:userId:driverId:roleId:roleName:coachingModel:showWeeklyReviews:hasAudioAccess:useAppAsBeacon:multiDriverLoginEnabled:productTierApplyOn:productTierConfig:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (DriverisdkNDUser *)doCopyEmail:(NSString *)email roleType:(int32_t)roleType gamificationFlag:(BOOL)gamificationFlag productTierId:(DriverisdkInt * _Nullable)productTierId firstName:(NSString *)firstName lastName:(NSString *)lastName userName:(NSString *)userName tenantId:(int32_t)tenantId userId:(int32_t)userId driverId:(int32_t)driverId roleId:(int32_t)roleId roleName:(NSString *)roleName coachingModel:(NSString *)coachingModel showWeeklyReviews:(BOOL)showWeeklyReviews hasAudioAccess:(BOOL)hasAudioAccess useAppAsBeacon:(BOOL)useAppAsBeacon multiDriverLoginEnabled:(BOOL)multiDriverLoginEnabled productTierApplyOn:(NSString * _Nullable)productTierApplyOn productTierConfig:(NSString * _Nullable)productTierConfig __attribute__((swift_name("doCopy(email:roleType:gamificationFlag:productTierId:firstName:lastName:userName:tenantId:userId:driverId:roleId:roleName:coachingModel:showWeeklyReviews:hasAudioAccess:useAppAsBeacon:multiDriverLoginEnabled:productTierApplyOn:productTierConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverId __attribute__((swift_name("driverId")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) int32_t userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUser.Companion")))
@interface DriverisdkNDUserCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUserAPI")))
@interface DriverisdkNDUserAPI : DriverisdkBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)changePasswordNewPassword:(NSString *)newPassword oldPassword:(NSString *)oldPassword callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("changePassword(newPassword:oldPassword:callback:)")));
- (void)forgotPasswordUsername:(NSString *)username callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("forgotPassword(username:callback:)")));
- (void)getUserCallback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDUser * _Nullable))callback __attribute__((swift_name("getUser(callback:)")));
- (void)getVODConsumptionCallback:(void (^)(DriverisdkNDError * _Nullable, DriverisdkNDVODConsumption * _Nullable))callback __attribute__((swift_name("getVODConsumption(callback:)")));
- (void)resetPasswordPassword:(NSString *)password token:(NSString *)token callback:(void (^)(DriverisdkNDError * _Nullable))callback __attribute__((swift_name("resetPassword(password:token:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVODConsumption")))
@interface DriverisdkNDVODConsumption : DriverisdkBase
- (instancetype)initWithCount:(int32_t)count eventVideoCount:(int32_t)eventVideoCount deviceCount:(int32_t)deviceCount eventAccessVideoCount:(int32_t)eventAccessVideoCount limit:(int32_t)limit warningThreshold:(float)warningThreshold __attribute__((swift_name("init(count:eventVideoCount:deviceCount:eventAccessVideoCount:limit:warningThreshold:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (float)component6 __attribute__((swift_name("component6()")));
- (DriverisdkNDVODConsumption *)doCopyCount:(int32_t)count eventVideoCount:(int32_t)eventVideoCount deviceCount:(int32_t)deviceCount eventAccessVideoCount:(int32_t)eventAccessVideoCount limit:(int32_t)limit warningThreshold:(float)warningThreshold __attribute__((swift_name("doCopy(count:eventVideoCount:deviceCount:eventAccessVideoCount:limit:warningThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t deviceCount __attribute__((swift_name("deviceCount")));
@property (readonly) int32_t eventAccessVideoCount __attribute__((swift_name("eventAccessVideoCount")));
@property (readonly) int32_t eventVideoCount __attribute__((swift_name("eventVideoCount")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) float warningThreshold __attribute__((swift_name("warningThreshold")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVODConsumption.Companion")))
@interface DriverisdkNDVODConsumptionCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventFeedback")))
@interface DriverisdkNDEventFeedback : DriverisdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t categoryId __attribute__((swift_name("categoryId")));
@property int32_t eventId __attribute__((swift_name("eventId")));
@property NSString *image __attribute__((swift_name("image")));
@property NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventFeedback.Companion")))
@interface DriverisdkNDEventFeedbackCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategory")))
@interface DriverisdkNDFeedbackCategory : DriverisdkBase
- (instancetype)initWithCategoryId:(int32_t)categoryId displayName:(NSString *)displayName __attribute__((swift_name("init(categoryId:displayName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DriverisdkNDFeedbackCategory *)doCopyCategoryId:(int32_t)categoryId displayName:(NSString *)displayName __attribute__((swift_name("doCopy(categoryId:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategory.Companion")))
@interface DriverisdkNDFeedbackCategoryCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversation")))
@interface DriverisdkNDFeedbackConversation : DriverisdkBase
- (instancetype)initWithImage:(NSString *)image message:(NSString *)message userId:(int32_t)userId timestamp:(int64_t)timestamp __attribute__((swift_name("init(image:message:userId:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDFeedbackConversation *)doCopyImage:(NSString *)image message:(NSString *)message userId:(int32_t)userId timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(image:message:userId:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversation.Companion")))
@interface DriverisdkNDFeedbackConversationCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackState")))
@interface DriverisdkNDFeedbackState : DriverisdkBase
- (instancetype)initWithFeedbackMessageState:(NSString *)feedbackMessageState categoryDisplayName:(NSString *)categoryDisplayName feedbackId:(NSString * _Nullable)feedbackId categoryId:(int32_t)categoryId __attribute__((swift_name("init(feedbackMessageState:categoryDisplayName:feedbackId:categoryId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DriverisdkNDFeedbackState *)doCopyFeedbackMessageState:(NSString *)feedbackMessageState categoryDisplayName:(NSString *)categoryDisplayName feedbackId:(NSString * _Nullable)feedbackId categoryId:(int32_t)categoryId __attribute__((swift_name("doCopy(feedbackMessageState:categoryDisplayName:feedbackId:categoryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *categoryDisplayName __attribute__((swift_name("categoryDisplayName")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString * _Nullable feedbackId __attribute__((swift_name("feedbackId")));
@property (readonly) NSString *feedbackMessageState __attribute__((swift_name("feedbackMessageState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackState.Companion")))
@interface DriverisdkNDFeedbackStateCompanion : DriverisdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDErrorKt")))
@interface DriverisdkNDErrorKt : DriverisdkBase
@property (class, readonly) int32_t AUTHENTICATION_ERROR __attribute__((swift_name("AUTHENTICATION_ERROR")));
@property (class, readonly) int32_t BAD_REQUEST __attribute__((swift_name("BAD_REQUEST")));
@property (class, readonly) int32_t CONTENT_NOT_ACCESSIBLE __attribute__((swift_name("CONTENT_NOT_ACCESSIBLE")));
@property (class, readonly) int32_t DATA_RETENTION_POLICY __attribute__((swift_name("DATA_RETENTION_POLICY")));
@property (class, readonly) int32_t FEATURE_NOT_AVAILABLE __attribute__((swift_name("FEATURE_NOT_AVAILABLE")));
@property (class, readonly) int32_t FORBIDDEN_RESOURCE __attribute__((swift_name("FORBIDDEN_RESOURCE")));
@property (class, readonly) int32_t INTERNAL_SERVER_ERROR __attribute__((swift_name("INTERNAL_SERVER_ERROR")));
@property (class, readonly) int32_t INVALID_DATA __attribute__((swift_name("INVALID_DATA")));
@property (class, readonly) int32_t INVALID_TIMESTAMP_FOR_GZ_INTERVAL __attribute__((swift_name("INVALID_TIMESTAMP_FOR_GZ_INTERVAL")));
@property (class, readonly) int32_t NETWORK_UNAVAILABLE __attribute__((swift_name("NETWORK_UNAVAILABLE")));
@property (class, readonly) int32_t NOT_AUTHENTICATED __attribute__((swift_name("NOT_AUTHENTICATED")));
@property (class, readonly) int32_t NOT_AUTHORIZED __attribute__((swift_name("NOT_AUTHORIZED")));
@property (class, readonly) int32_t NOT_DRIVER_USER __attribute__((swift_name("NOT_DRIVER_USER")));
@property (class, readonly) int32_t REQUEST_EXPIRED __attribute__((swift_name("REQUEST_EXPIRED")));
@property (class, readonly) int32_t RESOURCE_NOT_FOUND __attribute__((swift_name("RESOURCE_NOT_FOUND")));
@property (class, readonly) int32_t UNKNOWN_ERROR __attribute__((swift_name("UNKNOWN_ERROR")));
@property (class, readonly) int32_t USER_NOT_INITIALIZED __attribute__((swift_name("USER_NOT_INITIALIZED")));
@property (class, readonly) int32_t USER_SESSION_EXPIRED __attribute__((swift_name("USER_SESSION_EXPIRED")));
@property (class, readonly) int32_t VOD_LIMIT_EXHAUSTED __attribute__((swift_name("VOD_LIMIT_EXHAUSTED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventCommentKt")))
@interface DriverisdkNDEventCommentKt : DriverisdkBase
+ (NSString *)toJSONString:(NSArray<DriverisdkNDEventComment *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionKt")))
@interface DriverisdkNDWeeklyReviewSessionKt : DriverisdkBase
+ (NSString *)toJSONString_:(NSArray<DriverisdkNDWeeklyReviewSession *> *)receiver __attribute__((swift_name("toJSONString(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessageKt")))
@interface DriverisdkNDNotificationMessageKt : DriverisdkBase
+ (NSString *)toJSONString__:(NSArray<DriverisdkNDNotificationMessage *> *)receiver __attribute__((swift_name("toJSONString(___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategoryKt")))
@interface DriverisdkNDFeedbackCategoryKt : DriverisdkBase
+ (NSString *)toJSONString___:(NSArray<DriverisdkNDFeedbackCategory *> *)receiver __attribute__((swift_name("toJSONString(____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversationKt")))
@interface DriverisdkNDFeedbackConversationKt : DriverisdkBase
+ (NSString *)toJSONString____:(NSArray<DriverisdkNDFeedbackConversation *> *)receiver __attribute__((swift_name("toJSONString(_____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackStateKt")))
@interface DriverisdkNDFeedbackStateKt : DriverisdkBase
+ (NSString *)toJSONString_____:(NSArray<DriverisdkNDFeedbackState *> *)receiver __attribute__((swift_name("toJSONString(______:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface DriverisdkKotlinNothing : DriverisdkBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol DriverisdkKotlinx_serialization_coreEncoder
@required
- (id<DriverisdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<DriverisdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(DriverisdkKotlinArray<id<DriverisdkKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<DriverisdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<DriverisdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(DriverisdkKotlinArray<id<DriverisdkKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<DriverisdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<DriverisdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) DriverisdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol DriverisdkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<DriverisdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<DriverisdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) DriverisdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol DriverisdkKotlinx_serialization_coreDecoder
@required
- (id<DriverisdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<DriverisdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(DriverisdkKotlinArray<id<DriverisdkKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (DriverisdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) DriverisdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) DriverisdkKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol DriverisdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DriverisdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DriverisdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) DriverisdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface DriverisdkKotlinArray<T> : DriverisdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(DriverisdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<DriverisdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface DriverisdkKotlinx_serialization_coreSerializersModule : DriverisdkBase
- (void)dumpToCollector:(id<DriverisdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<DriverisdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<DriverisdkKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<DriverisdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DriverisdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<DriverisdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DriverisdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol DriverisdkKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface DriverisdkKotlinx_serialization_coreSerialKind : DriverisdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol DriverisdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<DriverisdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) DriverisdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) DriverisdkKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface DriverisdkKotlinx_serialization_coreUpdateMode : DriverisdkKotlinEnum<DriverisdkKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DriverisdkKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) DriverisdkKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) DriverisdkKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol DriverisdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol DriverisdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<DriverisdkKotlinKClass>)kClass serializer:(id<DriverisdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<DriverisdkKotlinKClass>)baseClass actualClass:(id<DriverisdkKotlinKClass>)actualClass actualSerializer:(id<DriverisdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<DriverisdkKotlinKClass>)baseClass defaultSerializerProvider:(id<DriverisdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol DriverisdkKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol DriverisdkKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol DriverisdkKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol DriverisdkKotlinKClass <DriverisdkKotlinKDeclarationContainer, DriverisdkKotlinKAnnotatedElement, DriverisdkKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
