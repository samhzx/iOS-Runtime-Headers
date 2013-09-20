/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage {
    struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; } *_mav7_apps_clock_count_mask;
    NSMutableString *_mav7_apps_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; } *_mav7_apps_clock_duration_mask;
    struct _PLMav7BasebandHWStatsHSICState { unsigned int x1[6]; } *_mav7_hsic_state;
    struct _PLMav7BasebandHWStatsMCPMVeto { unsigned int x1[6]; } *_mav7_mcpm_sleep_veto;
    struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; } *_mav7_mpss_clock_count_mask;
    NSMutableString *_mav7_mpss_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; } *_mav7_mpss_clock_duration_mask;
    struct _PLMav7BasebandHWStatsNPAVeto { unsigned int x1; unsigned int x2[24]; } *_mav7_npa_sleep_veto;
    struct _PLMav7BasebandHWStatsProtocol { unsigned int x1[6][16]; unsigned int x2[6]; } *_mav7_protocol;
    struct _PLMav7BasebandHWStatsRFTech { unsigned int x1[6][4]; unsigned int x2[6][13]; unsigned int x3[6][13]; unsigned int x4[6][12]; unsigned int x5[6][11]; unsigned int x6[6][11]; } *_mav7_rf_tech;
}

@property struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }* apps_clock_count_mask;
@property NSMutableString * apps_clock_duration;
@property struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }* apps_clock_duration_mask;
@property struct _PLMav7BasebandHWStatsHSICState { unsigned int x1[6]; }* hsic;
@property struct _PLMav7BasebandHWStatsMCPMVeto { unsigned int x1[6]; }* mcpm_sleep_veto;
@property struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }* mpss_clock_count_mask;
@property NSMutableString * mpss_clock_duration;
@property struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }* mpss_clock_duration_mask;
@property struct _PLMav7BasebandHWStatsNPAVeto { unsigned int x1; unsigned int x2[24]; }* npa_sleep_veto;
@property struct _PLMav7BasebandHWStatsProtocol { unsigned int x1[6][16]; unsigned int x2[6]; }* protocol;
@property struct _PLMav7BasebandHWStatsRFTech { unsigned int x1[6][4]; unsigned int x2[6][13]; unsigned int x3[6][13]; unsigned int x4[6][12]; unsigned int x5[6][11]; unsigned int x6[6][11]; }* rf;

- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)apps_clock_count_mask;
- (id)apps_clock_duration;
- (struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)apps_clock_duration_mask;
- (struct _PLMav7BasebandHWStatsHSICState { unsigned int x1[6]; }*)hsic;
- (id)indexToRAT:(unsigned int)arg1;
- (id)initWithData:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logClockWithLogger:(id)arg1;
- (void)logHSICWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logProtocolActiveWithLogger:(id)arg1;
- (void)logRFWithLogger:(id)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (struct _PLMav7BasebandHWStatsMCPMVeto { unsigned int x1[6]; }*)mcpm_sleep_veto;
- (struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)mpss_clock_count_mask;
- (id)mpss_clock_duration;
- (struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)mpss_clock_duration_mask;
- (struct _PLMav7BasebandHWStatsNPAVeto { unsigned int x1; unsigned int x2[24]; }*)npa_sleep_veto;
- (void)parseData:(id)arg1;
- (struct _PLMav7BasebandHWStatsProtocol { unsigned int x1[6][16]; unsigned int x2[6]; }*)protocol;
- (struct _PLMav7BasebandHWStatsRFTech { unsigned int x1[6][4]; unsigned int x2[6][13]; unsigned int x3[6][13]; unsigned int x4[6][12]; unsigned int x5[6][11]; unsigned int x6[6][11]; }*)rf;
- (void)setApps_clock_count_mask:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)setApps_clock_duration:(id)arg1;
- (void)setApps_clock_duration_mask:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)setHsic:(struct _PLMav7BasebandHWStatsHSICState { unsigned int x1[6]; }*)arg1;
- (void)setMcpm_sleep_veto:(struct _PLMav7BasebandHWStatsMCPMVeto { unsigned int x1[6]; }*)arg1;
- (void)setMpss_clock_count_mask:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)setMpss_clock_duration:(id)arg1;
- (void)setMpss_clock_duration_mask:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)setNpa_sleep_veto:(struct _PLMav7BasebandHWStatsNPAVeto { unsigned int x1; unsigned int x2[24]; }*)arg1;
- (void)setProtocol:(struct _PLMav7BasebandHWStatsProtocol { unsigned int x1[6][16]; unsigned int x2[6]; }*)arg1;
- (void)setRf:(struct _PLMav7BasebandHWStatsRFTech { unsigned int x1[6][4]; unsigned int x2[6][13]; unsigned int x3[6][13]; unsigned int x4[6][12]; unsigned int x5[6][11]; unsigned int x6[6][11]; }*)arg1;

@end