//  https://github.com/rlong/cocoa.lib.NodeTree
//
//  Copyright (c) 2015 Richard Long
//
//  Released under the MIT license ( http://opensource.org/licenses/MIT )
//

#import <Foundation/Foundation.h>


@class NTNode;
@class NTNodeTreeReader;


@protocol NTNodeTreeReaderDelegate <NSObject>


- (NSObject<NTNodeTreeReaderDelegate>*)onNodeBeginForReader:(NTNodeTreeReader*)nodeTreeReader  nodePk:(NSNumber*)nodePk nodePath:(NSString*)nodePath edgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex typeId:(NSNumber*)typeId;


- (void)onPropertyWithEdgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex withBooleanValue:(BOOL)value;
- (void)onPropertyWithEdgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex withIntegerValue:(int64_t)value;
- (void)onPropertyWithEdgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex withNullValue:(NSNull*)value;
- (void)onPropertyWithEdgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex withRealValue:(double)value;
- (void)onPropertyWithEdgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex withStringValue:(NSString*)value;


- (void)onNodeEndForReader:(NTNodeTreeReader*)nodeTreeReader nodePk:(NSNumber*)nodePk nodePath:(NSString*)nodePath edgeName:(NSString*)edgeName edgeIndex:(NSNumber*)edgeIndex typeId:(NSNumber*)typeId;


@end

@interface NTNodeTreeReaderDelegate : NSObject <NTNodeTreeReaderDelegate>

@end
