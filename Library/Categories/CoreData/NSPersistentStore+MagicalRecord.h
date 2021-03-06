//
//  NSPersistentStore+MagicalRecord.h
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import "MagicalRecord.h"

// option to autodelete store if it already exists

extern NSString * const kMagicalRecordDefaultStoreFileName;

@interface NSPersistentStore (MagicalRecord)

+ (NSURL *) MR_defaultLocalStoreUrl;

+ (NSURL *) MR_defaultURLForStoreName:(NSString *)storeFileName;
+ (NSURL *) MR_urlForStoreName:(NSString *)storeFileName;
+ (NSURL *) MR_cloudURLForUbiqutiousContainer:(NSString *)bucketName;

- (NSArray *) MR_sqliteURLs;
- (BOOL) copyToURL:(NSURL *)destinationUrl error:(NSError **)error;

@end


