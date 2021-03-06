// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from com_polestar_naosdk_api_external.djinni

#import <Foundation/Foundation.h>

/** Beacon proximity service status types */
typedef NS_ENUM(NSInteger, DBTBEACONSTATE)
{
    /** No change in beacon status OBSOLETE WILL BE REMOVE FROM API IN NEXT VERSION */
    DBTBEACONSTATE_NO_CHANGE,
    /** Beacon is going out of range */
    DBTBEACONSTATE_FIRST_UNSEEN,
    /** Beacon in transitory state before it's considered out of range (specifically on iOS, status reported when we don't get RSSI in ble measurement)  */
    DBTBEACONSTATE_FIRST_UNKNOWN,
    /** Beacon is seen with signal below the proximity threshold */
    DBTBEACONSTATE_FIRST_FAR,
    /** Beacon is seen with signal above the proximity threshold */
    DBTBEACONSTATE_FIRST_NEAR,
};
