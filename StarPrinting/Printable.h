//
//  NSObject+Printable.h
//  StarPrinting
//
//  Created by Matthew Newberry on 4/11/13.
//  OpenTable
//

#import <Foundation/Foundation.h>
#import "Printer.h"

@protocol Printable <NSObject>

@required

- (NSString *)printedFormat;

@end

@interface NSObject (Printable)

- (void)print;
- (void)print:(Printer *)printer;

@end
