/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueDisplayMetadata : NSObject {
    HFCharacteristicValueDisplayError * _error;
    int  _primaryState;
    int  _priority;
    NSString * _sortKey;
    int  _transitioningPrimaryState;
}

@property (nonatomic, retain) HFCharacteristicValueDisplayError *error;
@property (nonatomic) int primaryState;
@property (nonatomic) int priority;
@property (nonatomic, copy) NSString *sortKey;
@property (nonatomic) int transitioningPrimaryState;

+ (int)_unknownStatePriorityForServiceType:(id)arg1;
+ (id)displayMetadataForBridgeAccessory:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForServiceType:(id)arg1 characteristicReadResponse:(id)arg2;

- (void).cxx_destruct;
- (id)error;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;
- (int)primaryState;
- (int)priority;
- (void)setError:(id)arg1;
- (void)setPrimaryState:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setSortKey:(id)arg1;
- (void)setTransitioningPrimaryState:(int)arg1;
- (id)sortKey;
- (int)transitioningPrimaryState;

@end