/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNetworkWatcher : NSObject {
    <CPLNetworkWatcherDelegate> * _delegate;
    unsigned int  _networkState;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
}

@property (nonatomic) <CPLNetworkWatcherDelegate> *delegate;
@property (nonatomic, readonly) unsigned int networkState;

+ (id)_descriptionForNetworkState:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_initialReachabilityTestFailed;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg1;
- (void)_setupReachability;
- (void)_teardownReachability;
- (void)_updateState:(unsigned int)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (unsigned int)networkState;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
