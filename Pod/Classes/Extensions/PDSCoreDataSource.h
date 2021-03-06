//
//  PDSCoreDataSource.h
//  Patch
//
//  Created by Adam Iredale on 3/12/2014.
//  Copyright (c) 2014 Bionic Monocle Pty Ltd. All rights reserved.
//

@import CoreData;

#import "PatchProtocols.h"

/**
 *  Core Data datasource
 */

@interface PDSCoreDataSource : NSObject <PDSChangingDataSource>

@property (nonatomic, strong) NSPredicate *fetchPredicate;

- (instancetype)initWithEntityName:(NSString *)name sortDescriptors:(NSArray *)sortDescriptors andContext:(NSManagedObjectContext *)context ;
- (instancetype)initWithEntityName:(NSString *)name sortDescriptors:(NSArray *)sortDescriptors andContext:(NSManagedObjectContext *)context andSectionKeyPath:(NSString*) sectionKeyPath NS_DESIGNATED_INITIALIZER;

+ (instancetype)dataSourceWithEntityName:(NSString *)name sortDescriptors:(NSArray *)sortDescriptors andContext:(NSManagedObjectContext *)context;

+ (instancetype)dataSourceWithEntityName:(NSString *)name sortDescriptors:(NSArray *)sortDescriptors predicate:(NSPredicate *)predicate andContext:(NSManagedObjectContext *)context;

@end

@interface PDSCoreDataSource (ReadOnly)

@property (nonatomic, readonly) NSManagedObjectContext *context;

@end