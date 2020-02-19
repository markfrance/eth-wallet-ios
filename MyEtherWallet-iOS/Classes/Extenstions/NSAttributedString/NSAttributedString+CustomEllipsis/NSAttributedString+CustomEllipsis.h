//
//  NSAttributedString+CustomEllipses.h
//
//
// 11/05/2018.
//
//

@import Foundation;

@interface NSAttributedString (CustomEllipsis)
/*
 @truncationPosition - relative position from the end of the string. >= 0
 */
- (instancetype) truncatedAttributedStringWithCustomEllipsis:(NSAttributedString *)ellipsis maxSize:(CGSize)maxSize truncationPosition:(NSInteger)position;
@end
