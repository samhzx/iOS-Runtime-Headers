/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TUHardPauseController : NSObject {
    unsigned short _cachedAppropriateState;
    NSString *_cachedDisplayString;
    unsigned short _state;
    bool_cachedValuesAreValid;
}

@property unsigned short cachedAppropriateState;
@property(retain) NSString * cachedDisplayString;
@property bool cachedValuesAreValid;
@property(readonly) NSString * displayString;
@property unsigned short state;

+ (id)sharedHardPauseController;

- (unsigned short)appropriateState;
- (unsigned short)cachedAppropriateState;
- (id)cachedDisplayString;
- (bool)cachedValuesAreValid;
- (bool)canQueryHardPauseDigits;
- (void)dealloc;
- (id)displayString;
- (id)init;
- (void)modelStateChangedNotification:(id)arg1;
- (void)resetCacheValidity;
- (void)sendHardPauseDigits;
- (void)sendHardPauseDigitsLocal;
- (void)sendHardPauseDigitsRelayed;
- (void)setCachedAppropriateState:(unsigned short)arg1;
- (void)setCachedDisplayString:(id)arg1;
- (void)setCachedValuesAreValid:(bool)arg1;
- (void)setState:(unsigned short)arg1;
- (void)startListeningToHardPauseEvents;
- (unsigned short)state;
- (void)stopListeningForHardPauseEvents;
- (void)updateCachedValuesIfNecessary;

@end